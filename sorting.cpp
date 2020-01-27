#include<stdio.h>
#include<malloc.h>

typedef struct node
{

 int data;

 struct node *next;


}NODE,*PNODE,**PPNODE;


void Insertfirst(PPNODE,int);
void display(PNODE);
void AscLL(PNODE first, PPNODE second);


int main()
{

 PNODE head = NULL; 
 PNODE head2 = NULL;

  

 Insertfirst(&head,12);
 Insertfirst(&head,70);
 Insertfirst(&head,80);
Insertfirst(&head,80);
 Insertfirst(&head,10);
 Insertfirst(&head,73);
 Insertfirst(&head,110);

  display(head);printf("\n\n");
 AscLL(head,&head2);
display(head);
printf("\n\n");
display(head2);
printf("\n\n");

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


void AscLL(PNODE first, PPNODE second)
{

  PNODE temp1=first;
  PNODE temp2=*second; 
PNODE prev= NULL;

 PNODE Newn=NULL;



while(first!=NULL)
{
  Newn=(PNODE)malloc(sizeof(NODE));
  Newn->data=first->data;
 Newn->next = NULL ;


  if(*second==NULL)
   {

      *second=Newn;
       temp2=*second;

   }
    else
	{
	   if(Newn->data>((*second)->data))
	      {

                 Newn->next=*second;
		*second=Newn;
		temp2=*second;

		}
		else
		{     
			temp2=*second;
		   while(temp2!=NULL && (Newn->data)<(temp2->data))
			{
			   prev=temp2;
			   temp2=temp2->next;


			}
                        
      			Newn->next=prev->next;

			prev->next=Newn;


		}	
	
	}
        
                              



first=first->next;

}





















}
