#include <stdio.h>
#include <stdlib.h>

int main(){
    int a  ;
    double b ;
    char op ; 

    scanf("%d %c %lf" , &a ,&op ,&b );

    if (op == '+'){
    printf("Result: %.0lf\n" , a + b) ; 
    } else if (op == '-') {
        printf("Result: %.0lf\n" , a - b) ;
    } else if (op == '*'){
        printf("Result: %.0lf\n" , a * b) ; 
    } else if (op == '/') {
        printf ("Result: %.2lf\n" , a / b) ; 
    }
    else {
        printf("No such operator\n") ; 
    }
    return 0 ; 

}