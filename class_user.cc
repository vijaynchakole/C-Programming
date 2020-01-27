#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>
#include"sharedfile.h"

int main()
{

   void *p = NULL ;

  SinglyLL *ptr = NULL ;
  doubly *ptr1 = NULL ;

  SinglyLL*(*fp1)() = NULL ;

   void(*fp2)(SinglyLL*) = NULL;
  doubly*(*fp3)() = NULL ;



   p = dlopen("/home/vijay/myclass.so",RTLD_LAZY);



  if(!p)

  {

     printf("unable to open file\n");

  }


   fp1 = (SinglyLL*(*)())dlsym(p,"create");

  
  fp2 = (void(*)(SinglyLL*))dlsym(p,"destroy");



   ptr= fp1();


  ptr->InsertFirst(50);
   ptr->InsertFirst(40);
    ptr->InsertFirst(30);
      ptr->InsertFirst(20);
       ptr->InsertFirst(10);



  ptr->display();
fp2(ptr);

printf("\n");

fp3 = (doubly*(*)())dlsym(p,"create2");

ptr1 = fp3();

 ptr1->InsertFirst1(11);
 ptr1->InsertFirst1(10);
  ptr1->InsertFirst1(9);
  ptr1->InsertFirst1(8);
  ptr1->InsertFirst1(7);

 ptr1->display1();

dlclose(p);

return 0 ;


}
