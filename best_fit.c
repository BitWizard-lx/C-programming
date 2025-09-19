#include <stdio.h>
#include <limits.h>

// Structure to represent a memory block
typedef struct {
    int id;
    int size;
    int allocatedProcessId; // -1 if not allocated
} MemoryBlock;

// Structure to represent a process
typedef struct {
    int id;
    int size;
} Process;

void bestFit(MemoryBlock blocks[], int numBlocks, Process processes[], int numProcesses) {
    // Initialize all blocks as unallocated
    for (int i = 0; i < numBlocks; i++) {
        blocks[i].allocatedProcessId = -1;
    }

    printf("Executing Best Fit Algorithm...\n");
    printf("----------------------------------\n");

    // Iterate through each process to allocate
    for (int i = 0; i < numProcesses; i++) {
        int bestFitBlockIndex = -1;
        int minRemainingSize = INT_MAX;

        // Find the best fit block for the current process
        for (int j = 0; j < numBlocks; j++) {
            // Check if block is free and large enough
            if (blocks[j].allocatedProcessId == -1 && blocks[j].size >= processes[i].size) {
                // Calculate remaining size if this block is chosen
                int remainingSize = blocks[j].size - processes[i].size;
                
                // If this block is a better fit (smaller remaining size)
                if (remainingSize < minRemainingSize) {
                    minRemainingSize = remainingSize;
                    bestFitBlockIndex = j;
                }
            }
        }

        // Allocate the process if a suitable block was found
        if (bestFitBlockIndex != -1) {
            blocks[bestFitBlockIndex].allocatedProcessId = processes[i].id;
            printf("Process P%d (size %d) allocated to Block %d (size %d). Remaining space: %d\n",
                   processes[i].id, processes[i].size, blocks[bestFitBlockIndex].id, blocks[bestFitBlockIndex].size, minRemainingSize);
        } else {
            printf("Process P%d (size %d) could not be allocated. No suitable block found.\n",
                   processes[i].id, processes[i].size);
        }
    }
    printf("----------------------------------\n");
}

int main() {
    // Define initial memory blocks
    MemoryBlock blocks[] = {
        {1, 100}, {2, 500}, {3, 200}, {4, 300}, {5, 600}
    };
    int numBlocks = sizeof(blocks) / sizeof(blocks[0]);

    // Define processes to be allocated
    Process processes[] = {
        {101, 212}, {102, 417}, {103, 112}, {104, 426}
    };
    int numProcesses = sizeof(processes) / sizeof(processes[0]);

    bestFit(blocks, numBlocks, processes, numProcesses);

    return 0;
}