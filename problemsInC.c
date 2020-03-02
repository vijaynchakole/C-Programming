#include<stdio.h>

/*
int main()
{

	char c = 'c' + 40;

	c = c + 10 ; 

	printf("%d\n",c);//characher has 1 byte size due to this once 127 range is cross then its becomes negative number (-107) because sign bit is becomes on 


return 0 ;

}
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{

	int i = 0 ;

	if(i == 0)
	{

		i = (5, i = 3 ,(i = 1) ); // 1

		printf("%d\n",i);//1

	}


return 0 ;

}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
int main()
{

	static int var = 5 ;

	printf("%d\n",var--);//5 4 3 2 1 0


	if(var)
	main();
	//printf("%d\n",var--);//4


return 0 ;

}
*/

///////////////////////////////////////////////////////////////////////////////
/*

union group
{

	char a[2][2] ;

	char b[4] ;

} x = {'A','B','C','D'};


int main()
{

	char c ;
	
	c = x.a[x.b[2]-67][x.b[3]-67] ;//65

	printf("%d\n",c);//




return 0 ;

}
*/
//////////////////////////////////////////////////////////////////////////////
/*
#define p(a,b) a##b

#define call(x) #x

int main()
{

	do
	{

		int i = 15 , j = 13 ;

		printf("%d\n",p(i-+,+j));


	}while(call((625)+3));//



return 0 ;

}
*/
//////////////////////////////////////////////////////////////////////////////
/*
int i = 40 ; 

int main()
{

	do
		{
			printf("%d\n",i++) ;


		}while(5,4,3,2,1,0);



return 0 ;

}//40
*/

///////////////////////////////////////////////////
/*
int main()
{

	int x = 123 ;

	int i = {printf("c""+++")};

	for( x = 0 ; x <= i ; x++)
	{

		printf("%x\n",x);//0 1 2 3 4



	}


return 0 ;

}
*/
////////////////////////////////////////////////////////////
/*
int main()
{

	int x = 123 ;

	int i = {printf("c""+++")+2};

	for( x = 0 ; x <= i ; x++)
	{

		printf("%o\n",x);//0 1 2 3 4



	}


return 0 ;

}
*/

//////////////////////////////////////////////////////////////
/*
int main()
{
	switch(0x0)
	{

		case  NULL : // POINTER is not permitted as case value
			printf("Vijay\n");
break ;

		case '\0' :// duplicate value 0

		printf("ajay");
break ;

		case 0 : 
		printf("Done\n");


		break ;	

	}



return 0 ;

}
*/

/////////////////////////////////////////////////////////////////
/*
int main()
{

	static int i ; 

	int j ; 
  
  for( j = 0 ; j <= 5 ; j+=2)
	{
		switch(j)

		{

			case 1 : i++ ; break ;

			
			case 2 : i+=2 ; 

	
			case 4 : i%2; j=-1 ;

			continue ;

			default : --i ; continue;




		}printf("%d\n",i);//2
		

	}




return 0 ;

}
*/
////////////////////////////////////////////////////////////////////////////////////
/*#include<string.h>
int main()
{
	char *ptr1 = NULL , *ptr2 = NULL ;

	strcpy(ptr1,"A");



	strcpy(ptr2,"Vijay");

	printf("%s\n%s\n",ptr1,ptr2);//segmentation fault

return 0 ;

}*/
/*
#include<string.h>
int main()
{
	char ptr1[10] , ptr2[10]  ;

	strcpy(ptr1,"A");



	strcpy(ptr2,"Vijay");

	printf("%s\n%s\n",ptr1,ptr2);//A  Vijay
return 0 ;

}
*/
////////////////////////////////////////////////////////////////////////////////////////////////
/*
int a [][3][2] = {1,2,3,4,5,6,7,8,9} ;


#define b sizeof

int main()
{
	printf("%ld %ld %ld %ld %ld\n",b(&a),b(a),b(*a),b(**a),b(&**a));//8 48 24 8 8
	

return 0 ;

}*/
///////////////////////////////////////////////////////////

/*

int main()
{

	int i = 0;

	int  a[3] = {i,++i,i++};// 0 1 1 ->2 

	a[--i] = i++ ;//a[1] = 1 ->2

	printf("%d\n",a[--i]) ;//a[1] = 1


return 0 ;
}//1

*/
//////////////////////////////////////////////////////////////////////////
/*
int g = 10 ; 

int f2(){return -g ;};

int f1(){return f2() ;}




int main()
{

	printf("%d %d %d \n",f1(),f2(),g);//  -10  -10 10



return 0 ;


}
*/
///////////////////////////////////////////////////////////////////////

/*
int g = 10 ; 

int f2()
{
	return -g ;


}

int f1()
{

	--g + 7 ; 

	return f2() ;


}


int main()
{

	printf("%d %d %d \n",f1()+1,f2()+3,g);//      -8  -7 10

return 0 ;

}
*/
///////////////////////////////////////////////////////////////////////////
/*
int iii = 10 ; 


void fun(int ii )//ii=2  second call ii = 1 ...............ii = 0
{
	int i = 10 ; //i=10.........i = 10

   if(ii!=0) // 2!=0 true ..........1!=0 true..........0!=0 false
	{
      

      --i , --iii ; // i = 9, iii = 9 ............i = 9, iii = 8

		fun(--ii); // ii = 1 ......ii = 0

		printf("%d %d %d  ",i,ii,iii);


	}


}

int main()
{
 
  fun(2);//9 0 8............ 9 1 8

return 0 ;

}
*/

////////////////////////////////////////////////////////////////////
/*

int x[][5] = {{1,2,3},{4,5},{6},7,8,9};


int main()
{

	printf("%ld %ld %ld %ld\n",sizeof(x),sizeof(&x),sizeof(x[1]),sizeof(&(x[1])));//  40 8 20  8



return 0 ;

}

*/
////////////////////////////////////////////////////////////////////

int main()
{

	switch(*(1+"AB""CD"+1))
		{

			case 'A' :
				printf("A");

			case 'B' :
			printf("B");
	
			case 'C' :

			printf("C");  ;

			case 'D' :

			printf("D");
			 

			break ;

		}



return 0 ;

}//C D..........due to absence of break statement
