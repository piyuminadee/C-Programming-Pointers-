#include <stdio.h>

/*void main(){
  int a = 5;
  int  *ptr2= NULL;
  int *ptr1;
  printf("%p\n",*ptr2);
  printf("%p",ptr1);
}*/
/*
int* f(){
    static int a=20;
    return &a;*/
}
void main(){
    int *ptr = NULL;

    {

        int a=4;
        ptr = &a;
        printf("%d\n", *ptr);
    }

/*int *ptr=(int *)malloc(sizeof(int));
*ptr = 10;
printf("%d\n", *ptr);
free(ptr);
ptr =NULL;*/
printf("%d\n", *ptr);   //it will give garbage value



 }
