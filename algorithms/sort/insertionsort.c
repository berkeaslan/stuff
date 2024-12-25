/***********************************************/
/*                                             */
/*   ____            _                         */
/*  |  _ \          | |                        */
/*  | |_) | ___ _ __| | _____                  */
/*  |  _ < / _ \ '__| |/ / _ \                 */
/*  | |_) |  __/ |  |   <  __/                 */
/*  |____/ \___|_|_ |_|\_\___|                 */
/*      /\       | |                           */
/*     /  \   ___| | __ _ _ __                 */
/*    / /\ \ / __| |/ _` | '_ \                */
/*   / ____ \\__ \ | (_| | | | |               */
/*  /_/    \_\___/_|\__,_|_| |_|               */
/*                                             */
/*   I value your feedback, comments,          */
/*   improvements, and corrections.            */
/*                                             */
/*   Feel free to contact me anytime:          */
/*   contact(at)berkeaslan.net                 */
/*                                             */
/*   Thank you for helping me improve!         */
/*                                             */
/***********************************************/

#include <stdio.h>

void insertionSort(int arr[], int n)
{
    // Implementation-wise: we can start the outer for loop at the second element (i = 1),
    // and iterate over i until the last element (i = n - 1), since the first element
    // (index 0) is already considered sorted.
    for (int i = 1; i < n; ++i)
    {
        // Save the current index and value of the element that we want to insert
        // into its correct position in the sorted part of the array.
        int insertIndex = i;
        int insertValue = arr[insertIndex];

        // Use this iterator to check where in the sorted portion of the array
        // the current value belongs. Start with the last element of the sorted part.
        int j = i - 1;

        // While the previous element is larger than the current value, shift the
        // previous element one position to the right. This creates space for the
        // current value to be inserted into its correct position.
        while (j >= 0 && arr[j] > insertValue) {
            arr[j + 1] = arr[j]; // Shift the larger element one position to the right.
            insertIndex = j;     // Update the insertion index.
            j--;                 // Move to the next element in the sorted part.
        }

        // Insert the current value at its correct position in the sorted portion.
        arr[insertIndex] = insertValue;
    }
}

// Function to print an array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    // Initialize the random array
    int randomArray[] = {27, 85, 13, 42, 68, 9, 54, 31, 76, 50};
    int size = sizeof(randomArray) / sizeof(randomArray[0]);


	printf("Unsorted Array:\n");
    printArray(randomArray, size);

    // Calling the Bubble sort function (once we have implemented it):
    // bubbleSort(randomArray, size);
    // selectionSort(randomArray, size);
    insertionSort(randomArray, size);

    printf("Sorted Array in Ascending Order:\n");
    printArray(randomArray, size);

    return 0;
}