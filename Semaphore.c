#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

// Define a semaphore
sem_t semaphore;

// Function to be executed by threads
void *threadFunction(void *arg) {
    // Wait on the semaphore
    sem_wait(&semaphore);

    // Critical section
    printf("Thread %ld entered the critical section.\n", (long)arg);

    // Simulate some work
    sleep(2);

    // Exit the critical section
    printf("Thread %ld exited the critical section.\n", (long)arg);

    // Post to the semaphore
    sem_post(&semaphore);

    pthread_exit(NULL);
}

int main() {
    // Initialize the semaphore
    sem_init(&semaphore, 0, 1);

    // Number of threads
    int numThreads = 3;

    // Thread IDs
    pthread_t threads[numThreads];

    // Create threads
    for (long i = 0; i < numThreads; ++i) {
        pthread_create(&threads[i], NULL, threadFunction, (void *)i);
    }

    // Join threads
    for (int i = 0; i < numThreads; ++i) {
        pthread_join(threads[i], NULL);
    }

    // Destroy the semaphore
    sem_destroy(&semaphore);

    return 0;
}
