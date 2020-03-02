
#include<stdio.h>
#include<malloc.h>


typedef struct node
{

  int data;
  struct node *next;


}NODE,*PNODE,**PPNODE;

 
void Insertfirst(PPNODE,int);
void display(PNODE);
void AscendingLL(PPNODE first);


int main()
{
  PNODE head = NULL ;
  PNODE tail = NULL;

 


 Insertfirst(&head,5);
 /*Insertfirst(&head,30);
 Insertfirst(&head,20);*/
 Insertfirst(&head,40);
 Insertfirst(&head,50);
 Insertfirst(&head,20);
 Insertfirst(&head,10);
Insertfirst(&head,30);

  display(head);

printf("\n\n");

AscendingLL(&head);
 display(head);


return 0 ;

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
      printf("%d ",first->data);
      
       first=first->next;
    
    }

}

void AscendingLL(PPNODE first)
{
   PNODE temp1=*first, temp2=*first,prev1=*first;
   PNODE next2=NULL,prev2=NULL;
 int num=0;


while(temp1!=NULL)
{

prev2=temp1;
temp2=temp1->next;

    while(temp2!=NULL)
   {   
 	if(temp2->data>=temp1->data)
	{
	   if((temp1==(*first)))
		{
		  *first=temp2;
		  next2=temp2->next;
		temp2->next=temp1->next;
		prev2->next=temp1;
		temp1->next=next2;
		  
	           
	}
		else
		{
			prev2->next=temp1;
			next2=temp1->next;
			temp1->next=temp2->next;
			prev1->next=temp2;
			temp2->next=next2;		   
			


		}


	}

prev2=temp2;
temp2=temp2->next;
}
prev1=temp1;
temp1=temp1->next;
}




}









/*  
else
{

	*first=temp2;
	next2=temp2->next;
	temp2->next=temp1->next;
	prev2->next=temp1;
	temp1->next=next2;


}*/

 /*
           num=temp1->data;
           temp1->data=temp2->data;
            temp2->data=num;
           */
