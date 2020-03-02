#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL ;

typedef struct node
{

	int data ;

	struct node*next ;



}NODE,*PNODE,**PPNODE ;


BOOL InsertFirst(PPNODE first,PPNODE Last, int No);
BOOL InsertLast(PPNODE first,PPNODE Last, int No);
BOOL InsertAtPosition(PPNODE first,PPNODE Last, int No, int iPos) ;


void Display(PNODE first,PNODE Last);
int CountNode(PNODE first,PNODE Last);
int SearchNode(PNODE first,PNODE Last, int No);


BOOL DeleteFirst(PPNODE first,PPNODE Last);
BOOL DeleteLast(PPNODE first,PPNODE Last);
BOOL DeleteAtPosition(PPNODE first,PPNODE Last, int iPos) ;

int main()
{
	PNODE Head = NULL ;
	PNODE Tail = NULL ;

	InsertLast(&Head,&Tail,10);
	InsertLast(&Head,&Tail,20);
	InsertLast(&Head,&Tail,30);
	InsertLast(&Head,&Tail,40);
	InsertLast(&Head,&Tail,50);

 //printf("Number of Nodes are %d\n",CountNode(Head,Tail));

	Display(Head,Tail	);
printf("\n\n");
//InsertAtPosition(&Head,&Tail,56,4);

//DeleteFirst(&Head,&Tail);

//DeleteLast(&Head,&Tail);

//DeleteAtPosition(&Head,&Tail,5);

printf(" At %d Position\n",SearchNode(Head,Tail,89));

Display(Head,Tail	);


return 0 ;

}

//////////////////////////////////////////////////////////////////////////////////////////////

BOOL InsertFirst(PPNODE first,PPNODE Last,int No)
{

PNODE NewN = NULL ;

 NewN = (PNODE)malloc(sizeof(NODE)) ;

NewN->data = No ;

NewN->next = NULL ;

	if((*first)==NULL && (*Last)==NULL)
		{
				*first = NewN ;
				*Last = NewN ;
				(*Last)->next = *first ;

		}
			else
					{
							NewN->next = *first ;
							*first = NewN ;
							(*Last)->next = *first ;
	
				}

return TRUE ;

}
////////////////////////////////////////////////////////////////


void Display(PNODE first,PNODE Last)
{
	
	if(first==NULL && Last==NULL)
	{
			return ;
		
	}

do	{

			printf("%d  ",first->data);

			first = first->next ;


		}while(first!=Last->next);

}

///////////////////////////////////////////////////////////////////////

BOOL InsertLast(PPNODE first,PPNODE Last, int No)
{

	PNODE NewN = NULL ;

	PNODE temp = *first ;

	NewN=(PNODE)malloc(sizeof(NODE));

	NewN->data = No ;

	if(*first==NULL && *Last==NULL)
		{

			*first = NewN ;
			*Last = NewN ;

		 (*Last)->next = *first ;

		}
			else
					{


					(*Last)->next = NewN;

						NewN->next = *first ;
	
						*Last = NewN ;
						
				}

return TRUE ;
}

////////////////////////////////////////////////////////////////////////

int CountNode(PNODE first,PNODE Last)
{

	int iCnt = 0 ;

	do{
				iCnt++ ;
				first = first->next ;

		}while(first!=(Last)->next);

return iCnt ;

}

///////////////////////////////////////////////////////////////////////////////

BOOL InsertAtPosition(PPNODE first,PPNODE Last, int No, int iPos) 
{

	PNODE NewN = NULL ;

	NewN = (PNODE)malloc(sizeof(NODE));

	NewN->data = No ;

int Max = CountNode(*first,*Last);


if(iPos<1 || iPos>(Max+1))
{

	return FALSE ;

}

if(iPos==1)
{

InsertFirst(first,Last,No);
return TRUE ;

}

if(iPos==(Max+1))
{

InsertLast(first,Last,No);

return TRUE ;

}

PNODE temp = *first ;

while(iPos>2)
{
iPos-- ;
temp = temp->next ;

}

NewN->next = temp->next ;

temp->next = NewN ;

return TRUE ;

}

//////////////////////////////////////////////////////////////////////////////////////////

BOOL DeleteFirst(PPNODE first,PPNODE Last)
{

	
	if(*first==NULL && *Last==NULL)
	{

		return TRUE ;
		
	}

	if(*first==*Last)
	{

			free(*first);

			*first = *Last  =NULL ;

			return TRUE ;


		}

		*first = (*first)->next ;

		free((*Last)->next);

		 (*Last)->next = *first ;



}

/////////////////////////////////////////////////////////////////////////////////////

BOOL DeleteLast(PPNODE first,PPNODE Last)
{

PNODE temp = *first ;

	if(*first==NULL && *Last==NULL)
	{

		return TRUE ;

	}
	
if(*first==*Last)
{
	free(*first);

	*first=*Last=NULL ;

	return TRUE ;


}

while(temp->next!=*Last)
{
	
	temp = temp->next ;

}



temp->next = *first ;

free(*Last);

*Last = temp ;

return TRUE ;


}

////////////////////////////////////////////////////////////////////////////////////////

BOOL DeleteAtPosition(PPNODE first,PPNODE Last, int iPos) 
{

	int Max = CountNode(*first,*Last);

	PNODE temp = *first ;

	PNODE temp2 = NULL ;

	if(iPos<1 || iPos>(Max+1))
		{

			return FALSE ;

		}


if(iPos==1)
{

DeleteFirst(first,Last	);

return TRUE ;

}

if(iPos==(Max+1))
{
	DeleteLast(first,Last);

	return TRUE;

}


while(iPos>2)
{

	temp = temp->next ;
	iPos-- ;

}
/*
temp2 = temp->next->next ;

free(temp->next) ;

temp->next = temp2 ;
*/

temp2 = temp->next ;

temp->next = temp->next->next ;

free(temp2);



return TRUE ;

}

///////////////////////////////////////////////////////////////////////////////////////

int SearchNode(PNODE first,PNODE Last, int No)
{
	
	int iCnt = 0 ; 

	if(first==NULL && Last==NULL)
	{
		return iCnt ;
	
	}

do{

		iCnt++ ;

		if(first->data == No)
		{
				
			break ;		
		}
		
	first = first->next ;

	}while(first!=Last->next) ;

	if(first->data == No)
{

return iCnt ;
}
else
{

return 0;
}

}
