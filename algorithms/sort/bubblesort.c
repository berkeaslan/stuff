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
#include <stdbool.h>

void bubbleSort(int arr[], int n)
{
	// We iterate through each book in the shelf
	// starting at index 0 and moving to index (n - 2)
	// using the outer for loop. Why (n - 2)? Since we 
	// only need to look at the first (n - 1) indeces, and we start
	// counting at 0 to i <= n - 2 (or equivalently: i < n - 1),
	// will iterate through the first (n - 1) elements.
	for (int i = 0; i < n - 1; ++i)
	{
		// We include an indicator. Why do we do this? Simple:
		// once no swap occurs anymore (in the next for loop),
		// we can be sure that the "lower"-part of the array is
		// also sorted, so we don't need to pass over these parts
		// again.
		bool swapped = false; // Set to false at the beginning of each iter.

		// We use this for-loop to iterate and compare the books in the shelf
		// with excluding the last one at each pass, hence:
		// j < (n - 1) - i.
		for (int j = 0; j < (n - 1) - i; ++j)
			// If element at index j is higher than the index at
			// element j + 1, we swap them.
			if (arr[j] > arr[j + 1])
			{
				// Standard swap in C (using temp var.):
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

				// If swapped, we set the indicator to true.
				swapped = true;
			}

		// If no swap has occured, we can break out of the for loop:
		if (!swapped)
			break;
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
    bubbleSort(randomArray, size);
    // selectionSort(randomArray, size);
    // insertionSort(randomArray, size);

    printf("Sorted Array in Ascending Order:\n");
    printArray(randomArray, size);

    return 0;
}