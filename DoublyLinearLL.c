
#include<stdio.h>
#include<malloc.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL ;

typedef struct node
{

	struct node*prev ;

	int data ;

 struct node*next ;

}NODE,*PNODE,**PPNODE ;

void InsertFirst(PPNODE first,int iNo)
{

PNODE NewN = NULL ;

NewN = (PNODE)malloc(sizeof(NODE));



NewN->data = iNo ;
NewN->prev = NULL ;
NewN->next = NULL ;

if(*first==NULL)
{

	*first = NewN ;

}
else
{
	NewN->next = *first ;
	(*first)->prev = NewN ;
		*first = NewN ;	
	


}


}


void Display(PNODE first)
{

while(first!=NULL)
{

printf("%d ",first->data);

first = first->next ;
}

}

/////////////////////////////////////////////////


void DeleteFirst(PPNODE first )
{

PNODE temp = NULL ;

if(*first==NULL)
{
	return ;

}

if((*first)->next==NULL)
{
	free(*first);
	
	*first = NULL ;

return ;
}
		
temp = (*first)->next ;

	free(*first) ;

	*first = temp ;
	(*first)->prev = NULL;	





}
///////////////////////////////////////////////


void DeleteLast(PPNODE first)
{

PNODE temp = *first ;

if(*first==NULL)
{
	return ;

}

if((*first)->next==NULL)
{
	free(*first);
	*first = NULL;
	return ;
}

while(temp->next!=NULL)
{

temp = temp->next ;

}

temp->prev->next = NULL ;

free(temp);

return ;

}
//////////////////////////////////////

void DeleteAtPosition(PPNODE first,int iPos)
{

	if(iPos<1 || iPos>5)
	{
		return ;
	}

if(iPos==1)
{
DeleteFirst(first);
return ;
}

if(iPos==5)
{
DeleteLast(first);
return ;

}
PNODE temp = *first ;

while(iPos>2)
{

temp = temp->next ;
iPos--;

}

temp->next = temp->next->next ;
 free(temp->next->prev);
	temp->next->prev = temp ;


return ;

}

int main()
{

 PNODE Head = NULL ;

	InsertFirst(&Head,10);
	InsertFirst(&Head,20);
	InsertFirst(&Head,30);		
	InsertFirst(&Head,40);
	InsertFirst(&Head,50);
	

	Display(Head);

DeleteAtPosition(&Head,2);
printf("\n\n");
Display(Head);

return 0 ;

}

