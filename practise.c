#include <stdio.h>
#include <stdlib.h>


int BinarySearch( int array[] , int elements , int target){
    int low = 0 ; 
    int high = elements - 1 ; 

    int mid = (low + high)/2 ; 

    while (low <= high){
        if ( array[mid] == target ){
            return mid ; 
        } else if ( array[mid] < target ) {
            mid = low + 1 ; 
        } else if (array[mid] >  target){
            mid = high - 1 ; 
        }
    }
    return -1 ;
}

int main (){
    int array []  = { 4 , 56 , 62, 71 , 89 , 90} ; 
    int elements = 6 ; 
    int target = 62 ; 

    int result = BinarySearch(array , elements , target ) ; 

    if (result != -1 ){
        printf("Element found at index %d\n" , result ) ; 
    }else {
        printf("Element has not been found!\n") ; 
    }
    return 0 ; 
}
