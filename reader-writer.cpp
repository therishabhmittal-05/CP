#include <iostream>
#include <semaphore.h>
#include <thread>
#include <vector>

sem_t wrt;
sem_t mutex;
int cnt = 1;
int numreaders = 0;

void writer() {
    sem_wait(&wrt);
    std::cout << "Writer is writing..." << std::endl;
    // Simulating writing
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Writer has finished writing." << std::endl;
    sem_post(&wrt);
}

void reader() {
    sem_wait(&mutex);
    numreaders++;
    if (numreaders == 1)
        sem_wait(&wrt);
    sem_post(&mutex);

    std::cout << "Reader is reading..." << std::endl;
    // Simulating reading
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Reader has finished reading." << std::endl;

    sem_wait(&mutex);
    numreaders--;
    if (numreaders == 0)
        sem_post(&wrt);
    sem_post(&mutex);
}

int main() {
    sem_init(&wrt, 0, 1);
    sem_init(&mutex, 0, 1);

    std::vector<std::thread> readers;
    std::vector<std::thread> writers;

    // Create reader threads
    for (int i = 0; i < 5; ++i) {
        readers.emplace_back(std::thread(reader));
    }

    // Create writer threads
    for (int i = 0; i < 3; ++i) {
        writers.emplace_back(std::thread(writer));
    }

    // Wait for all threads to finish
    for (auto& t : readers) {
        t.join();
    }
    for (auto& t : writers) {
        t.join();
    }

    sem_destroy(&wrt);
    sem_destroy(&mutex);

    return 0;
}