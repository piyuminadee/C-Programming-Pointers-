#include <stdio.h>
#include <string.h>

void main(){
char str[]="welcome to jenny's lecture";
char *ptr= str;

printf("%c\n", *ptr);  //w
printf("%c\n", *(ptr+++1)); //e
printf("%c\n",*((ptr--+5)-1)+5);//between o and j space
printf("%c\n",*(++ptr+10)-32);
printf("%c\n,%c\n,%c\n",*ptr,*++ptr,*--ptr);

}
