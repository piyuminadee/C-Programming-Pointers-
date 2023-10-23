/*Write a program in C to find
the maximum number between two
numbers using a pointer.*/

#include <stdio.h>

int main(){
    int num1=5, *nptr = &num1, num2 = 6, *nmptr = &num2;
 printf("Input the first number : %d", num1);
 printf("\nInput the second number :%d", num2);

 if(*nptr> *nmptr){
   printf("\n%d is the maximum number", *nptr);
 }
 else{
    printf("\n%d is the maximum number", *nmptr);
 }

  return 0;
}

