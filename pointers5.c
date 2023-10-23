/*Write a program in C to store n elements in an array and print the elements using a pointer.
Test Data :*/
#include <stdio.h>

int main(){
    int num;
    printf("Input numbr of elements in  an arrray:");
    scanf("%d", &num);

    int arry[num], *arptr;
    arptr = arry;
    for (int i=0; i<num; i++){
        printf("\nenter element %d:", i);
        scanf("%d", &arry[i]);
    }

    for(int j=0; j<num; j++){
        printf("\n%d", *arptr++);
    }

return 0;
}
