/*Write a program in C to calculate the length of a string using a pointer.
Test Data :*/
#include <stdio.h>
#include <string.h>
/*
int main(){
    char str[]="w3resoursejj", *sptr;
    sptr=str;
    int count =0;

    for(int i=0; i<strlen(sptr); i++){
           count++;
    }
    printf("\n%d", count);
return 0;
}*/
int count(char *sptr);
int main(){
   char str[]="w3resoursejj", sptr;

   count(str);

return 0;
}
int count(char *sptr){
   if(*sptr != "\0"){
       count++;
       sptr++;
   }
   return count;
}
