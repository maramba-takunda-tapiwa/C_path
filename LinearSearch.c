#include <stdio.h>
#include <stdlib.h>

int linear_search( int Array[] , int elements , int target ){
    int i ; 
    for ( i = 0 ; i < elements ; i++){
        if (Array[i] == target){
            return i ;
        } 
    } ; 
}

int main(){
    int array[] = { 2 , 5 , 9 , 10 , 11 , 45 , 23 , 2 , 6 , 8 , 2} ;
    int Elements = 11 ; 
    int Target = 2 ;
    
    int result = linear_search(array , Elements , Target); 

    if (result == -1 ){
        printf("Item has not been found!\n") ; 
    } else {
        printf("Item has been found at index %d!\n" , result) ; 
    }
    return 0 ; 

}