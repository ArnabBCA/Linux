#include <stdio.h>
#include <string.h>

#define MAX_FILES 10

void displayDirectory(const char* directoryName, const char files[][50], const int fileSizes[], int fileCount) {
    printf("Directory: %s\n", directoryName);
    printf("Files:\n");

    for (int i = 0; i < fileCount; ++i) {
        printf("  %s - Size: %d KB\n", files[i], fileSizes[i]);
    }
}

int main() {
    // Directory information
    const char directoryName[] = "MyDirectory";
    
    // File information
    const char fileNames[MAX_FILES][50] = {"File1.txt", "File2.doc"};
    const int fileSizes[MAX_FILES] = {1024, 2048};
    int fileCount = 2;

    // Display the directory contents
    displayDirectory(directoryName, fileNames, fileSizes, fileCount);

    return 0;
}
