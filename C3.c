#include<stdio.h>
/*
void main()
{
	
	switch(*(1+"ADA""BC"+2))	//4th letter will execute
	{

		case'A' : printf("Hello\n");break ; 


		case'B' : printf("demo\n");break ; //demo

	
		case 'C' : printf("Hi\n");break ;

		
		case 'D' : printf("New\n");break ;
	

	}
	
}
*/
//////////////////////////////////////////////////////////////////

/*
void main()
{
	switch(0)
	{
		//case NULL : printf("New\n");break ;// pointers are not allowed permitted as case values


		case '\0' : printf("old\n");break ;

		//case 0 : printf("same\n");break ; // same


	}


}
*/
////////////////////////////////////////////////////////
/*
void main()
{

	static int i  ; int  j ;// i = -1 1 1 0 1 0

	for(j = 0 ; j<=5 ; j+=2)// 0 2 -1 1 3 5 
	switch(j)
	{
		case 1 : i++ ; break ;
		case 2 : i+= 2 ;
		case 4 : i%=2 ;j=-1 ;continue;
		default : --i ;
		continue ;

	}

	printf("%d\n",i); // 0

}
*/
///////////////////////////////////////////////////////////////
/*
void main()
{

	int x = 123 ;

	int i = {printf("c""++")};//3

	for(x=0;x<=i;x++)//i=3
	{

		printf("%x\n",x);// 0 1 2 3 


	}


}
*/
//////////////////////////////////////////////////////////

/*
#define p(a,b)a##b

#define call(x)#x

int main()
{

	do{

		int i = 15, j = 3 ;

		printf("%d\n",p(i-+,+j));//11
	
	}while(*(call(625)+3));//


}
*/

/////////////////////////////////////////////////////////
/*
int i = 40 ; 

int main()
{

	do{

		printf("%d\n",i++);//40

	}while(5,4,3,2,1,0);


printf("%d\n",i);//41


}*/
////////////////////////////////////////////////
/*
   struct bitfield
	{
		
		unsigned a : 6;
		unsigned c : 4  ;
		unsigned b : 2;
		


	
	}bit = {1,3,3} ;//4 byte

int main()
{

	printf("%ld\n",sizeof(bit));//

return 0 ;

}
*/
////////////////////////////////////////////

/*
union group
{
	char A[2][2] ;

	char B[4] ;


}x = {'A','B','C','D'};

void main()
{
char c ;

c = x.A[x.B[2]-67][x.B[3]-67] ;

printf("%c\n",c);//B
}
*/
//////////////////////////////////////////////
/*
void main()
{
	char c = 125 ;
	c = c+10 ;
	printf("%d\n",c);//negative answer//-121


}
*/
////////////////////////////////////////////
/*
void main()
{
	int i = 320 ;

	char*ptr = (char*)&i ;

	printf("%d\n",*ptr);//  64 //       1 2 4 8 16 32 64 128 256 


}
*/
/////////////////////////////////////////
/*
void main()
{

register i = 320 ;

	int *p = &i ;//error :: address of register 'i' is requested
	
	printf("%d\n",*p);

}
*/

/////////////////////////////////////////
/*
#include<string.h>

void main()
{

	char *ptr1 = NULL ;

	char *ptr2 = 0 ;

	strcpy(ptr1,"A");

	strcpy(ptr2,"questions");

	printf("\n%s  %s\n",ptr1,ptr2);//segmentation fault

	
}
*/
/////////////////////////////////////////////////
/*
void main()
{
int i = 0 ;

if(i == 0)
{
	i = ((5,(i=1)),i=10,(i=6));

	printf("%d\n",i);// 6

}
}
*/
/////////////////////////////////////////////////
/*
void main()
{
	static int var = 5 ;

	

	printf("%d\n",var--);//5 4 3 2 1 
	if(var)
	main();
	
	

}//
*/
//////////////////////////////////////////////////
/*
void fun(int i )
{
	if(i>5)	
fun(--i);
	printf("%d\n",i);//5 5 6 7 8 9 	


}

void main()
{
	fun(10);

}
*/
///////////////////////////////////////////////
/*
void fun()
{
	static int i = 10 ;

	printf("%d\n",i);//10

}
void main()
{

	fun();
}
*/
/////////////////////////////////////////////
/*
void main()
{
int x[][] = {{1,2,3},{4,5},{6},7,8,9};//error :: array has incomplete element type

	printf("%d %d %d %d %d\n",sizeof(x),sizeof(&x),sizeof(x[1]),sizeof(&(x[1])),sizeof(x[1][1]));


}

*/

//////////////////////////////////////////////
/*
void main()
{
	int a[][3][2] = {1,2,3,4,5,6,7,8,9};

	printf("%d %d %d %d %d\n",sizeof(&a),sizeof(*a),sizeof(**a),sizeof(***a),sizeof(**a));//  8  24 8 4 8

}
*/
//////////////////////////////////////////
/*
int iii = 10 ;
void fun(int ii)
{
	int i = 10 ;

	if(ii!=0)
	{
		--i;
		--iii ;

		fun(--ii);
		printf("%d  %d  %d\n",i,ii,iii);//

	}


}

void main()
{

fun(10);

return 0 ;

}

*/
/////////////////////////////////////////////

char *p[] = {"ABC","DEF","XYZ"};

char**q[] = {p+2,p=+1,p+0};

char***r = q+2 ;

--r;
q+1 ;
printf("%c %s %s",***r,**r,*(*r-1));//D EF 
//printf("%c",*(*(p+2)+2));
//printf("%d  %d\n",sizeof(r),sizeof(**r));
