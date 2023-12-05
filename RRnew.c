#include <stdio.h>

#define MAX_PROCESSES 10
#define TIME_QUANTUM 2

int main() {
    int burstTimes[MAX_PROCESSES];
    int remainingTimes[MAX_PROCESSES];
    int n;

    // Get the number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    // Input burst times for each process
    for (int i = 0; i < n; i++) {
        printf("Enter burst time for Process %d: ", i + 1);
        scanf("%d", &burstTimes[i]);
        remainingTimes[i] = burstTimes[i];
    }

    int currentTime = 0;

    // Continue until all processes are completed
    while (1) {
        int allProcessesCompleted = 1;  // Assume all processes are completed

        // Iterate through each process
        for (int i = 0; i < n; i++) {
            // If the process is not completed
            if (remainingTimes[i] > 0) {
                allProcessesCompleted = 0;  // Set the flag to false

                // Execute the process for the time quantum or its remaining time
                int executeTime = (remainingTimes[i] < TIME_QUANTUM) ? remainingTimes[i] : TIME_QUANTUM;
                currentTime += executeTime;
                remainingTimes[i] -= executeTime;

                printf("Process %d executed for %d units of time. Remaining time: %d\n", i + 1, executeTime, remainingTimes[i]);
            }
        }

        // If all processes are completed, exit the loop
        if (allProcessesCompleted)
            break;
    }

    return 0;
}
