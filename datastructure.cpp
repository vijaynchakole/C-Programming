
#include<stdio.h>
#include<malloc.h>


typedef struct node
{

  int data;
  struct node *next;


}NODE,*PNODE,**PPNODE;

 
void Insertfirst(PPNODE,int);
void display(PNODE);

void Insertfirstcircular(PPNODE,PPNODE,int);
void displaycircular(PNODE,PNODE);


int main()
{
  PNODE head = NULL ;
  PNODE tail = NULL;

 
 Insertfirst(&head,40);
 Insertfirst(&head,30);
 Insertfirst(&head,20);
 Insertfirst(&head,10);

  display(head);
/*
Insertfirstcircular(&head,&tail,10);
Insertfirstcircular(&head,&tail,20);
Insertfirstcircular(&head,&tail,30);
Insertfirstcircular(&head,&tail,40);
Insertfirstcircular(&head,&tail,50);

displaycircular(head,tail);*/



   return 0;
}






void Insertfirst(PPNODE first,int no)
{
   PNODE Newn = NULL ;
    
    Newn = (PNODE)malloc(sizeof(NODE));
    
    Newn->data = no ;
   Newn->next=NULL;

         Newn->next=*first;
        *first=Newn;
   

}

void display(PNODE first)
{
   while(first!=NULL)
    {
      printf("%d  ",first->data);
      
       first=first->next;
    
    }

}
///////////////////////////////////////////////////////////////////////////

void Insertfirstcircular(PPNODE first,PPNODE last,int no)
{

  PNODE Newn = NULL ;
  
 Newn =(PNODE)malloc(sizeof(NODE));

Newn->next =NULL;
Newn->data=no;


if(*first==NULL && *last==NULL)
{

  *first = Newn ;
  *last=Newn;
 (*last)->next=Newn;


}
else
  {
      Newn->next=*first;
      *first = Newn ;
       (*last)->next = *first ;
        


  }

}


void displaycircular(PNODE first,PNODE last)
{
    /*
 while(first!=last)
  {
      
    printf("%d  ",first->data);

     first=first->next;


  }*/




do{


  printf("%d  ",first->data);

     first=first->next;


}while(first!=last->next);








printf("\n");

}
