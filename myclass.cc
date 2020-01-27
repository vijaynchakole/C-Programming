using namespace std;
#include<stdio.h>
#include<malloc.h>
#include"sharedfile.h"

SinglyLL::SinglyLL()
{

   head = NULL ;


}

SinglyLL::~SinglyLL()
{

	PNODE temp1, temp2 ;

    temp1 = head ;

     while(temp1!=NULL)
     {

        temp2 = temp1;
        delete temp2 ;


    temp1 =  temp1->next ;

     }



}



void SinglyLL:: InsertFirst(int no)
{
    PNODE Newn = NULL ;

   Newn = (PNODE)malloc(sizeof(NODE));


   Newn->data = no ;

   Newn->next = NULL ;


   Newn->next = head ;
   
   head = Newn ;


}


void SinglyLL:: display()
{

  PNODE temp1 = head ;

   while(temp1!=NULL)
    {

       printf("%d  ",temp1->data);

       temp1 = temp1->next ;
    
    }


}
///////////////////////////////////////////////

doubly::doubly()
{

  head2 = NULL ;

}


doubly::~doubly()
{
  
  PNODE1 temp1, temp2 ;

    temp1 = head2 ;

     while(temp1!=NULL)
     {

        temp2 = temp1;
        delete temp2 ;


    temp1 =  temp1->next ;

     }



}


void doubly :: InsertFirst1(int no)
{
   PNODE1 Newn = NULL ;

   Newn = (PNODE1)malloc(sizeof(NODE1));

   Newn->data = no ;

   Newn->next = NULL ;
   Newn->prev = NULL ;
 
  Newn->next =  head2 ;

   head2 = Newn ;

}

void doubly::display1()
{

 PNODE1 temp1 = head2 ;

   while(temp1!=NULL)
    {

       printf("%d  ",temp1->data);

       temp1 = temp1->next ;
    
    }

}



extern "C"
{
    SinglyLL* create()
     {
        return new SinglyLL ;


     }

   void destroy(SinglyLL* p)
    {

       delete p ;

    }



}



extern "C"
{
   
   doubly* create2()
    {
       return new doubly ;



    }

 
  void destroy2(doubly*q)
  {

    delete q ;


  }


}
