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

void selectionSort(int arr[], int n)
{
	// The outer loop has to go over all n elements in order to compare them
	// and bring them to the front if they are the minimum value. Since
	// we start counting at 0, going from 0 to (n - 1) contains the first 
	// n elements.
	for (int i = 0; i < n; ++i)
	{
		// We initialize the 1st element as the index of the minimum:
		int indexMin = i;
		// We check all i + 1 indeces after i in order to check if there is
		// another index with a lower value:
		for (int j = i + 1; j < n; ++j)
			if (arr[j] < arr[indexMin])
				indexMin = j; // if so we make this the smallest index.
		
		// Once we have found the smallest index, we swap the values
		// using the "standard" C swap:
		int temp = arr[i];
		arr[i] = arr[indexMin];
		arr[indexMin] = temp;
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
    selectionSort(randomArray, size);
    // insertionSort(randomArray, size);

    printf("Sorted Array in Ascending Order:\n");
    printArray(randomArray, size);

    return 0;
}