#include <stdio.h>

int main(){
   int m = 29, *mptr, ab, *abptr;
   mptr = &m;
   //ab = 29;
   printf("Address of m : %p\n", mptr);
   printf("Value of m :%d\n", m);
   printf("Now ab is assigned with the address of m.\n");
   //*mptr = ab;
   //mptr = &ab;
   //abptr = &ab;
   *abptr =*mptr;
   abptr = mptr;
   printf("Address of ab :%p\n", abptr);
   printf("ab = %d\n", *abptr);

   printf("The value of m assigned to 34 now.\n");
   m = 34;
   printf("Address of pointer ab : %p\n", abptr);
   *abptr = *mptr;
   printf("Content of pointer ab :%d\n", *abptr);

   printf("The pointer variable ab is assigned with the value 7 now.\n");
   *abptr = 7;
   printf("Address of m :%p\n", &m);
   printf("Value of m :%d \n", m);
return 0;
}
