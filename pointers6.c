#include <stdio.h>
//increment and decrement

int main(){

int a[]= {3,4,5,6};
int *p;
p =&a[2];
//printf("%d\n", *p++);
//printf("%d", *p);
//printf("%d", *++p);
 //printf("%d\n%d\n", *p++,*p++);

 printf("%d",*(p--));

return 0;
}
