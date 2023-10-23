/*Write a program in C to print all permutations of a given string using pointers.*/
#include <stdio.h>
#include <string.h>

int main(){
    char arr[]="abcd";
    char temp;
    printf("how many  element:%d\n",strlen(arr));
    int num = strlen(arr);

  for(int i=0; i<num; i++){
        for(int j = 0; j<num-1; j++){

            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]= temp;
            for(int k=0; k<num; k++){
                printf("%c", arr[k]);
            }
            printf("\n");

        }

  }
return 0;
 }
