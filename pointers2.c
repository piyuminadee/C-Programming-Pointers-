/*Write a program in C to demonstrate the
use of the &(address of) and
*(value at address) operators.*/

#include <stdio.h>

int main(){
    int m = 300, *mptr=&m;
    char cht = 'z', *chtptr = &cht;
    float fx = 300.600006, *fxptr = &fx;
  printf("Pointer : Demonstrate the use of & and * operator :\n");

    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p", &cht);

    printf("\nUsing & and * operator :  ");
    printf("\nvalue at address of m =%d", *(&m));
    printf("\nvalue at address of fx =%f", *(&fx));
    printf("\nvalue at address of cht = %c", *(&cht));

    printf("\nUsing only pointer variable :");
    printf("\naddress of m =%p", mptr);
    printf("\naddress of cht =%p", chtptr);
    printf("\naddress of fx =%p", fxptr);

    printf("\n Using only pointer operator : ");
    printf("\nvalue at address of m =%d", *mptr);
    printf("\nvalue at address of fx =%f", *fxptr);
    printf("\nvalue at ad dress of cht =%c", *chtptr);

}
