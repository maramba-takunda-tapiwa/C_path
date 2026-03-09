#include <stdio.h>
#include <stdlib.h>

/*int gcd(int num1 , int num2){
    while (num2 != 0){
        int remainder = num1 % num2 ;
        num1 = num2 ; 
        num2 = remainder ; 
    }
    return num1 ; 
    
}*/
int main(){
    while (1){
    int num1 , den1 , num2 , den2 ;
    scanf("%d%d%d%d" , &num1 , &den1 , &num2 , &den2) ; 
    if (num1 == 0 && den1 == 0 && num2 == 0 && den2 == 0 ){
        break ;
    }
    if (num1*den2 > num2*den1){
        printf(">\n") ;
    }else if(num1*den2 < num2*den1){
        printf("<\n") ; 
    }else{
        printf("=\n") ; 
    }
   }
   return EXIT_SUCCESS ;
    
}