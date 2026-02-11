#include <stdio.h>
#include <stdlib.h>

int main(){
    int a , b; /*This is declaring the variables a and b to be integer variables*/

    printf("Enter side A\n") ;
    scanf("%d" , &a ); /*This is storing the value entered into the memory address of a*/
    printf("Enter side B\n") ; 
    scanf("%d" ,  &b) ;
    printf("The area is %d\n : ", a*b) ; 
    return 0 ; 

    double c , d ; /*This is declaring the varaibles c , d to be double "float" */
    printf("enter the sides of the shape\n") ;
    scanf("%lf %lf" , &c , &d);
    printf("The area of the shape is : %.2lf\n" , c*d); /*This is preserving 2 decimal places for the result*/ 

    double a ; 
    int b ; 
    printf("Enter a ");scanf("%lf" , &a) ;printf("enter b "); scanf("%d" , &b);
    printf("The result is %.2lf: " , a/b);
    return 0 ; 

}