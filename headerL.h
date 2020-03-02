#include<stdio.h>
#include<malloc.h>

typedef int boolean ;


typedef struct node
{

	int data ;

	struct node* next ;

}NODE,*PNODE,**PPNODE ;

boolean Insertfirst(PPNODE first,int no);


void Display(PNODE first);

void swap(PPNODE first);

void Ascending(PPNODE first);
