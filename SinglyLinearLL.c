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


BOOL InsertFirst(PPNODE first, int No);
BOOL InsertLast(PPNODE first, int No);
BOOL InsertAtPosition(PPNODE first, int No, int iPos) ;

BOOL DeleteFirst(PPNODE first);
BOOL DeleteLast(PPNODE first);
BOOL DeleteAtPosition(PPNODE first, int iPos) ;



int CountNode(PNODE first);
int SearchNode(PNODE first, int No);
void DisplayLL(PNODE first);


int main()
{

PNODE Head = NULL ;


/*
InsertLast(&Head,10);
InsertLast(&Head,20);
InsertLast(&Head,30);
InsertLast(&Head,40);
InsertLast(&Head,50);
*/


DisplayLL(Head);

printf("\n\n");

InsertAtPosition(&Head,75,3);

//DeleteFirst(&Head);
//DeleteLast(&Head);
//DeleteAtPosition(&Head,2);

//printf(" At %d position\n",SearchNode(Head,40));
DisplayLL(Head);


return 0 ;
}
///////////////////////////////////////////////////////////////////////////////////
BOOL InsertFirst(PPNODE first,int No)
{

PNODE NewN = NULL ;

NewN = (PNODE)malloc(sizeof(NODE));

NewN->next = *first ;
NewN->data = No ;

*first = NewN ;

return TRUE ;

}
///////////////////////////////////////////////////////////////////////////////

void DisplayLL(PNODE first)
{

	while(first!=NULL)
	{

		printf("%d  ",first->data);
	
	first = first->next ;

	}

}
/////////////////////////////////////////////////////////////////////////////

BOOL InsertLast(PPNODE first, int No)
{

PNODE NewN = NULL ;
PNODE Temp = NULL ;
Temp = *first ;

NewN = (PNODE)malloc(sizeof(NODE));

NewN->next = NULL ;
NewN->data = No ;

if(*first==NULL)
{
	*first = NewN ;
	

}
else
{

while(Temp->next!=NULL)
{
Temp = Temp->next ;
}

Temp->next = NewN ;

}


return TRUE ;
}
////////////////////////////////////////////////////////////////////////////

int CountNode(PNODE first)
{

 int iCnt = 0 ;

	if(first==NULL)
	{
		return iCnt;

	}

while(first!=NULL)
{

	iCnt++ ;
	first = first->next ;

}

return iCnt ;

}

////////////////////////////////////////////////////////////////////////////


BOOL InsertAtPosition(PPNODE first, int No, int iPos)
{

 PNODE NewN = NULL ;
 PNODE temp = *first ;

	NewN = (PNODE)malloc(sizeof(NODE));

	NewN->next = NULL ;
	NewN->data = No ;

	int Max = CountNode(*first) ;


	if(/*(*first==NULL && iPos!=1) ||*/ (iPos<1) || iPos > (Max+1))
		{

			printf("error :: NULL value in Head\n");
				return FALSE ;

  	}
	

if(iPos==1)
{

	InsertFirst(first,No);

	return TRUE ;


}

if(iPos == (Max+1))
{

InsertLast(first,No);

return TRUE ;
}


while(iPos>2)
{

	temp = temp->next ;
	iPos--;

}

NewN->next = temp->next ;

temp->next = NewN ;


return TRUE ;


}

/////////////////////////////////////////////////////////////////////////////////////////

BOOL DeleteFirst(PPNODE first)
{

PNODE temp = *first ;

	if(*first==NULL)
	{
			return TRUE;

	}

*first = (*first)->next ;

free(temp) ;
	
	
return TRUE ;

}

/////////////////////////////////////////////////////////////////////////////////////////

BOOL DeleteLast(PPNODE first)
{

PNODE temp = *first ;

if(*first==NULL)
{

return TRUE;

}

if((*first)->next==NULL )
{

free(*first);

*first = NULL ;

return TRUE ;

}


while((temp->next)->next!=NULL)
{

	temp = temp->next ;

}

free(temp->next) ;

temp->next = NULL ;

return TRUE ;

}

/////////////////////////////////////////////////////////////////////////////////////////////

BOOL DeleteAtPosition(PPNODE first, int iPos) 
{

int Max = CountNode(*first) ;

PNODE temp = *first ;
PNODE temp2 = NULL ;


if(*first==NULL || iPos<1 || iPos>Max)
{
return TRUE ;

}

if(iPos==1)
{
	DeleteFirst(first);
	return TRUE ;

}

if(iPos==Max)
{
DeleteLast(first);

return TRUE ;

}

while(iPos>2)
{

temp = temp->next ;
iPos--;

}

temp2 = temp->next->next ;
free(temp->next) ;

temp->next = temp2 ;

return TRUE ;

}

/////////////////////////////////////////////////////////////////////////////////////////////

int SearchNode(PNODE first, int No)
{

int iCnt = 0 ;


if(first==NULL)
{
return 0 ;

}

while(first!=NULL)
{


iCnt++ ;

if(first->data == No)
{
	break ;

}

first = first->next ;


}

	if(first->data == No)
{

return iCnt ;
}
else
{

return 0;
}

}
