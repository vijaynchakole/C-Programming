#include<stdio.h>
/*
int main()
{

	char*str = "hello" ;
	
	char *ptr = str ;

	char least = 127 ;


	while(*ptr++)// e l l o \0
	{
			printf("%c %d, ",*ptr,*ptr);
			least = (*ptr<least)?*ptr : least ;


	}

	printf("\n\n%d\n",least);//0





return 0 ;

}
*/

/////////////////////////////////////////////////////////////
/*
void main()
{

int i = 300 ;

	char *ptr  =(char*) &i; //address of 'i' consider (100)
	printf("%d\n\n",*ptr) ;
	*++ptr  = 2 ;// 1 2 4 8 16 32 65 128 256 

	printf("%d\n\n",*ptr);// 556


*++ptr ;// = 2 ;

	printf("%d\n\n",*ptr);//0

*++ptr ;

	printf("%d\n\n",*ptr);//0

printf("%d\n\n",i);//556



}
*/
//////////////////////////////////////////////////////////////////
/*
void main()
{

	int i = 258 ;

 int *ptr = &i ;

	printf("%d  %d\n",*((char*)ptr),*((char*)ptr+1));// 2 1


}
*/

///////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
/*
#include<string.h>
void main()
{

	char *p = "Hello" ;

	char a[] = "Hello" ;

	printf("%ld\n",sizeof(p));// 8

	printf("%ld %ld %ld\n",strlen(p),sizeof(a),strlen(a));// 5  6  5 	
/*
while(*p++)
{

printf("%d\n",p);


}

}*/

/////////////////////////////////////////////////////////////////////////

void main()
{
	static int a[3][3] = {1,2,3, 4,5,6 ,7,8,9};

	static *p[] = {a,a+1,a+2};

	int i,j ;
	
	for(i = 0 ; i<3 ;i++)
	{

		for(j=0 ; j<3 ; j++)
		printf("%d   %d",*((*p+i)+j,*(*(j+p)+i)));//1 


	}












}
