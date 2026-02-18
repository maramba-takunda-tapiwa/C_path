#include <stdio.h>
#include <stdlib.h>

void insertionSort(int array[], int elements)
{
    for (int iterator = 1; iterator < elements; iterator++)
    {
        int key = array[iterator]; /*This is assigning the key with the element we want to insert into the sorted potion "*/
        int trail = iterator - 1;  /*This is creating a trailing indicator to last element of the sorted portion */

        while (trail >= 0 && array[trail] > key) /*Unless false , this is a condition which will be checked to ensure we dont go out of the array and also the bigger number is shift to the right*/
        {
            array[trail + 1] = array[trail]; /*shifting the larger element to the right*/
            trail--;                         /*This is simply updating the trailing indicator to check for more unsorted elements in the given range*/
        }
        array[trail + 1] = key; /*This is now replacing the empty space with the element which was overrided*/
    }
}

void printing(int array[], int n)
{
    for (int i = 0 ; i < n; i++)
    {
        printf("Current element: %d\n", array[i]);
    }
}

int main()
{
    int array[] = {2, 5, 9, 10, 11, 45, 23, 2, 6, 8, 2};
    int elements = 11;
    printf("Unsorted Array\n");
    printing(array, elements);

    printf("Sorted Array\n");
    insertionSort(array, elements);
    printing(array, elements);

    return 0;
}