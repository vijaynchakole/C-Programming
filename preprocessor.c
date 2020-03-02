#include<stdio.h>
#include<malloc.h>

/*
#define DEMO 0

int main()
{

	int i = 10 ; 
 
 #ifdef DEMO

	printf("Hello\n");

	++i ;


	#else

			printf("World\n");

			--i ;

	

#endif

	printf("value of i is %d\n",i);




return 0 ;
}

*/

////////////////////////////////////////////////////////////////////////////////

/*
void fun()
{
	printf("Inside fun\n");

#undef NULL //error :: 'NULL' undeclared (first use in this function)

}

int main()
{

	int i = 10 ; 

	char *p ; 

	fun() ;//Inside fun
 
	p = NULL ;

	p = (char*)malloc(10) ;

	printf("%ld\n",sizeof(p)) ;//8



return 0 ;

}
*/

//////////////////////////////////////////////////////////////////////////////////
/*
#define DEMO 10



int main()
{
	
	printf("%d\n",DEMO);//10

	#define DEMO 20 

	printf("%d\n",DEMO);//20

	#define DEMO 30
	printf("%d\n",DEMO); //30

 
return 0 ;

}
*/
/////////////////////////////////////////////////////////////////////////////////
/*

void fun()
{

	#define DEMO 40

	printf("%d\n",DEMO);//40



}

int main()
{

	fun() ;
	

	

	printf("%d\n",DEMO) ; //40


return 0 ;

}
*/

///////////////////////////////////////////////////////////////////////////////

/*
void fun()
{
	
#define DEMO 40 

	printf("From fun : %d\n",DEMO);




}

#define DEMO 10 

int main()
{

	printf("From main : %d\n",DEMO);//10


	#define DEMO 20

	printf("From fun : %d\n",DEMO);//20

	fun();

	printf("From fun : %d\n",DEMO);//20


return 0 ;

}

*/

///////////////////////////////////////////////////////////////////////////////
/*
void fun()
{
	
	

	printf("From fun : %d\n",DEMO);//error :: undeclared identifier


}

int main()
{


	
	#define DEMO 20

	printf("From main : %d\n",DEMO);//10


	fun();

	

return 0 ;

}
*/
////////////////////////////////////////////////////////////////////////////
/*
#include<conio.h>//fatal erro :: no such directory

#include"stdio.h"

int main()
{


printf(" Header file included\n");
return 0 ;


}*/
////////////////////////////////////////////////////////////////////////
/*
void fun()
{
	
	#undef DEMO 


}

int main()
{
	#define DEMO 10 


	printf("From main %d\n",DEMO);//10

	fun() ;

	printf("After main %d\n",DEMO);//10


return 0 ;
}
*/

////////////////////////////////////////////////////////////////////////////
/*
void fun()
{

	#define DEMO 20 

}

int main()
{

	#define DEMO 10

	printf("From main %d\n",DEMO);//10

	#undef DEMO

	fun() ;

	printf("After main %d\n",DEMO);//error :: undeclared identifier



}
*/

//////////////////////////////////////////////////////////////////

/*
#define DEMO(no) no+no

int main()
{

	int i = DEMO(10) ;
	
	printf("From main:: %d\n",i);//20

return 0 ;

}
*/

////////////////////////////////////////////////////////////////

/*
#define DEMO(no) no+no

int demo(int no)
{

	return no*no ;

}

int main()
{

	int j1 = 10, j2 = 10 ;

	int i1 = DEMO(j1+j2) ;//40

	int i2 = demo(j1+j2);//400

	printf("%d   %d\n",i1,i2);//40  400


return 0 ;

}

*/

//////////////////////////////////////////////////////////////////////////////////////////////

/*
#define DEMO(no1,no2)

printf("From macro addition %d\n",no1*no2);//error :: expected declaration specifier

int main()
{

	DEMO(2,5);


return  0 ;

}

*/

///////////////////////////////////////////////////////////////////////////////

/*
#define DEMO1 10

#define DEMO2 'a'
#define DEMO3 2.4

int main()
{

	printf("%d  %d  %d\n",sizeof(DEMO1),sizeof(DEMO2),sizeof(DEMO3));// 4 4 8



return 0 ;


}
*/
///////////////////////////////////////////////////////////////////////////////////////////
/*

#define DEMO DEMO1 

#define DEMO1 DEMO2 
#define DEMO2 10 

int main()
{

	int i = DEMO ;

	printf("%d\n", i);// 10



return 0 ;


}
*/
////////////////////////////////////////////////////////////////////////////////////

/*
#define UPPER(a) (a>= 'A' && a<= 'Z')


#define LOWER(a) (a>= 'a' && a<= 'z')

#define ALPHABET(a) ((LOWER(a) || UPPER(a))?1:0 )


int main()
{

char ch = 'g' ;

	if(ALPHABET(ch))
	{

		printf("it is alphabet\n");//it is alphabet


	}



return 0 ;

}
*/
///////////////////////////////////////////////////////////////////////////////////////////////
/*
#define SQUARE(X) (X*X)

int square(int x)
{

	return x*x ;


}

int main()
{

 int i1 = 4, j = 2, ans1, ans2 ;


	ans1 = square(++i1);//25
	ans2 = SQUARE(++j);//16


	printf("%d %d\n",ans1,ans2);


return 0 ;

}
*/

////////////////////////////////////////////////////////////////
/*

#define FILE 10 

int main()
{

	printf("FILE\n");

return 0;

}
*/

////////////////////////////////////////////////////////
/*
#define PRINT(no) printf("%d\n",no) ;

int main()
{

	PRINT(10);//10
	PRINT(20);//20
	PRINT(30);//30

return 0 ;

}
*/
/////////////////////////////////////////////////////////
#define STR(str) #str

int main()
{

	printf(STR(Vijay\n));//Vijay


return 0 ;

}
