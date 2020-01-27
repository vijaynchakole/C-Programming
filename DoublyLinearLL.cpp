
#include<iostream>
#include<stdio.h>
#include<malloc.h>

using namespace std ;

#define TRUE 1
#define FALSE 0

typedef int BOOL ;

typedef struct node
{

	struct node*prev ;

	int data ;

 struct node*next ;

}NODE,*PNODE,**PPNODE ;

class DoublyLinearLL
{
	private :

	PNODE Head ;
	PNODE Tail ;

	public:
	DoublyLinearLL() ;
	~DoublyLinearLL() ;
	
	void InsertFirst(int);
	void Display();
	void InsertLast(int);
	void InsertAtPosition(int,int);
	int CountNODE();
	bool ReverseLL();
	


};

///////////////////////////////////////////////////////


DoublyLinearLL :: DoublyLinearLL()
	{
		Head = NULL ;
		Tail = NULL ;
	}
/////////////////////////////////////////
DoublyLinearLL ::	~DoublyLinearLL() 
{


if(Head==NULL && Tail==NULL)
{
	return ;
}

PNODE temp = Head ;

while(temp!=Tail)
{
	temp = temp->next ;

	delete(Head) ;

	Head = temp ;


}

delete(Head) ;

}

void DoublyLinearLL :: InsertFirst(int No)
{

PNODE NewN = NULL ;

//NewN = (PNODE)malloc(sizeof(NODE)) ;	
NewN = new NODE ;
NewN->data = No ;
NewN->prev = NULL ;
NewN->next = NULL ;


if(Head==NULL && Tail==NULL)
	{
		Head = NewN ;
		Tail = NewN ;
		NewN->prev = Tail ;
		NewN->next = Head ;
		return ;
	}
	else
			{
				NewN->prev = Tail ;
				NewN->next = Head ;
				Head = NewN ;
				Tail->next = Head ;
				return ;

			}
}

//////////////////////////////////////////////////////////////////////////////////////

int DoublyLinearLL :: CountNODE()
{

	PNODE temp = Head ;
	int iCnt = 0 ;

	do{

		iCnt++ ;
		temp = temp->next ;   

    }while(temp!=Tail->next);



return iCnt ;

}



////////////////////////////////////////////////////////////////////////////////////

void DoublyLinearLL :: Display()
{

	if(Head==NULL)
	{

		return ;
	}

PNODE temp = Head ;

do{
		cout<<temp->data<<" " ;
			temp=temp->next ;
	}while(temp!=Tail->next);


}
/////////////////////////////////////////////////////////////////

void DoublyLinearLL :: InsertLast(int No)
{

	PNODE NewN = NULL ;
	NewN = new NODE ;

	NewN->prev = NULL ;
	NewN->next = NULL ;
	NewN->data = No ;


if(Head==NULL && Tail==NULL)
{
	Head = NewN ;
	Tail = NewN ;
	Head->prev = Tail ;
	Tail->next = Head ;	
	
return ;

}





Tail->next = NewN ;
NewN->prev = Tail  ;
Tail = NewN ;
Tail->next = Head ;
Head->prev = Tail ;


return ;


}

////////////////////////////////////////////////////////////////

void DoublyLinearLL :: InsertAtPosition(int No,int iPos)
{

	PNODE NewN = NULL ;
	PNODE temp = Head ;

	NewN = new NODE;

	int Max = CountNODE();

	NewN->data = No ;
	NewN->prev = NULL ;
	NewN->next = NULL ;

if(iPos<1 || iPos>(Max+1))
{
	return ;

}

if(iPos==1)
{
InsertFirst(No);

return ;
}

if(iPos==(Max+1))
{
InsertLast(No);
return ;
}


while(iPos>2)
{

temp = temp->next ;
iPos--;

}


NewN->prev = temp ;
NewN->next = temp->next ;

temp->next = NewN ;

temp->next->prev = NewN;


return ;

}
/////////////////////////////////////////////////////////////////////

bool DoublyLinearLL :: ReverseLL()
{

PNODE previous = NULL ;
PNODE current = Head ;
PNODE Next = NULL ;

PNODE temp = NULL ;


while(current!=NULL)
{

current->next = Next ;
current->next = previous ;
previous = current ;
current = Next ;


}

Head = previous ;

return true ;


}

////////////////////////////////////////////////////////////////
int main()
{

 DoublyLinearLL obj ;

	obj.InsertLast(10) ;
	obj.InsertLast(20) ;
	obj.InsertLast(30) ;
	obj.InsertLast(40) ;
	obj.InsertLast(50) ;

	//obj.InsertAtPosition(46,6);

//printf("%d  ",obj.CountNODE());
	obj.Display();

	obj.ReverseLL() ;
	cout<<endl;
	obj.Display();



return 0 ;
}
