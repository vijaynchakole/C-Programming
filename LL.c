#include"headerL.h"

int main()
{


PNODE head = NULL ;


Insertfirst(&head,10);
Insertfirst(&head,20);
Insertfirst(&head,30);
Insertfirst(&head,40);
Insertfirst(&head,50);
Insertfirst(&head,60);



Display(head) ;

swap(&head);

printf("\n\n");

Display(head) ;

//Ascending(&head) ;

printf("\n\n");

Display(head) ;

return 0 ;

}


//////////////////////////////////////////////////////////////////////////
boolean Insertfirst(PPNODE first,int no)
{

PNODE Newn = NULL ;

Newn = (PNODE)malloc(sizeof(NODE)) ;


Newn->data = no ;


Newn->next = *first ;
*first = Newn ;

return 0 ;


}
/////////////////////////////////////////////////

void Display(PNODE first)
{


	while(first!=NULL)
	{

		printf("%d  ",first->data);
		first = first->next ;


	}


}
///////////////////////////////////////////////

void swap(PPNODE first)
{

	if((*first)==NULL || (*first)->next==NULL)
return ;

PNODE prev = NULL ;

PNODE current = *first ;

PNODE temp = NULL ;



*first = current->next ;

temp = (*first)->next ;

(*first)->next = current ;

current->next = temp ;

prev = current ;

current = current-> next ;




while(current!=NULL && current->next!=NULL)
{

	prev->next = current->next ;

	temp = current->next->next ;

	current->next->next = current ;

	current->next = temp ;

	prev = current ;

	current = current->next ;

}

return ;

	
}
//////////////////////////////////////////////////////////////////////////

/*
void Ascending(PPNODE first)
{


	PNODE prev = NULL ;

	PNODE current = *first ;

	PNODE Next = NULL ;

	PNODE temp = NULL, C2,P2,N2 ;

	int Max = 0 ;
	int flag = 0 ;




		while(current!=NULL)
		{

				current = temp ;
				while(temp!=NULL)
				{
						
						if(temp->data>Max)
							{ 
                   flag = 1 ;
									Max = temp->data ;

									P2 = prev ;
									C2= temp ;
									N2 = temp->next ;
	

							}
						prev = temp ;
          temp = temp->next ;


				}


		if(flag==1)
		{

			flag = 0 ;

		
			C2->next = *first ;
			*first = C2 ;
			P2->next = N2 ;




		}

	//prev = current ;

	current = current->next ;



		}

}
*/


