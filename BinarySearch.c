#include <stdio.h>
#include <stdlib.h>

int Binary_Search( int Array[] , int elements , int target ){
    int low = 0 ; /*This is a pointer which indicates the first element in the current search*/
    int high = elements - 1 ; /*This is a pointer which indicates the last element of the current search*/

    while (low <= high){
        int mid = (low + high)/2 ; 
        if (Array[mid] == target){
            return mid ; /*The target has been found*/
        }else if (Array[mid] < target ){
            low = mid + 1 ; /*This is moving the low pointer forward to the position where the mid pointer was + 1 */
        }else {
            high = mid - 1 ; /*This is moving the high pointer backwards to the position where the mid pointer was - 1 */
        }
    }
    return -1 ; 

}

int main(){
    int array[] = { 4 , 56 , 62, 71 , 89 , 90} ;
    int Elements = 6 ; 
    int Target = 71 ;

    int result = Binary_Search(array , Elements , Target) ; 
    
    if (result == -1 ){
        printf("Target was not found") ; 
    } else {
        printf("Target has been found at index %d\n" , result) ; 
    }
    return  0 ; 
}