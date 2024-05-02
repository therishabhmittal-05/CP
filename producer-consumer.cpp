    #include <iostream>
    #include <semaphore.h>
    #include <thread>
    #include <vector>

    const int BUFFER_SIZE = 5;
    std::vector<int> buffer;
    sem_t empty, full;

    void producer() {
        for (int i = 0; i < 10; ++i) {
            sem_wait(&empty); // Acquire an empty slot in the buffer
            buffer.push_back(i);
            std::cout << "Produced: " << i << std::endl;
            sem_post(&full); // Signal that a new item has been produced
        }
    }

    void consumer() {
        for (int i = 0; i < 10; ++i) {
            sem_wait(&full); // Wait for an item to be available in the buffer
            int item = buffer.front();
            buffer.erase(buffer.begin());
            std::cout << "Consumed: " << item << std::endl;
            sem_post(&empty); // Signal that an empty slot is now available
        }
    }

    int main() {
        sem_init(&empty, 0, BUFFER_SIZE); // Initialize the empty semaphore with the buffer size
        sem_init(&full, 0, 0); // Initialize the full semaphore to 0

        std::thread prod(producer);
        std::thread cons(consumer);

        prod.join();
        cons.join();

        sem_destroy(&empty);
        sem_destroy(&full);

        return 0;
    }