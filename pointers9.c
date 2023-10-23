/*Write a program in C to count the number
of vowels and consonants
in a string using a pointer.*/

#include <stdio.h>
#include <string.h>

void main(){
   char str[]="woriild", *sptr;
   sptr = str;
   int count=0, cons=0;

   while(*sptr != '\0'){
    if(*sptr == 'a'|| *sptr == 'i'||*sptr == 'e'||*sptr == 'o'||*sptr == 'u'){
        count++;

    }
    else{
        cons++;
    }
    sptr++;
   }
printf("Number of  vowels: %d\n\nNumber of  constant: %d ", count, cons);
}
