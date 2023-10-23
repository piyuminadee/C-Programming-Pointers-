#include <stdio.h>

int main(){
    int nm = 5, nm2=6, *nmptr=&nm, *nm2ptr = &nm2;
    printf("Input the first number :%d\n", nm);
    printf("Input the first number :%d\n",nm2);
    printf("The sum of the entered numbers is : %d\n", *nmptr+*nm2ptr);
}
