#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define N 5                   // Number of philosophers
#define LEFT (i + N - 1) % N  // Left neighbor
#define RIGHT (i + 1) % N     // Right neighbor

sem_t mutex;                  // Mutex to protect critical section
sem_t S[N];                   // One semaphore per philosopher

void think(int i) {
    printf("\nPhilosopher %d is thinking", i + 1);
    sleep(1);
}

void take_fork(int i) {
    sem_wait(&mutex);
    printf("\nPhilosopher %d is hungry", i + 1);
    sem_post(&mutex);
    sem_wait(&S[i]);
}

void eat(int i) {
    sem_wait(&mutex);
    printf("\nPhilosopher %d takes fork %d and %d", i + 1, LEFT + 1, i + 1);
    printf("\nPhilosopher %d is eating", i + 1);
    sleep(2);
    printf("\nPhilosopher %d putting fork %d and %d down", i + 1, LEFT + 1, i + 1);
    sem_post(&S[i]);
    sem_post(&S[LEFT]);
    sem_post(&S[RIGHT]);
    sem_post(&mutex);
}

void* philosopher(void* arg) {
    int i = *(int*)arg;
    while (1) {
        think(i);
        take_fork(i);
        eat(i);
    }
}

int main() {
    int i;
    pthread_t thread_id[N];
    sem_init(&mutex, 0, 1);

    for (i = 0; i < N; i++)
        sem_init(&S[i], 0, 0);

    for (i = 0; i < N; i++) {
        pthread_create(&thread_id[i], NULL, philosopher, &i);
    }

    for (i = 0; i < N; i++)
        pthread_join(thread_id[i], NULL);

    return 0;
}