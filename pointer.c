#include<stdio.h>
/*
int main()
{


	int no = 10 ;
	int *p = &no ;

printf("%d\n",*p);//10
	

	return 0 ;
	
}//10

*/
//////////////////////////////////////////////////////
/*
int main()
{

	int no = 11 ;
	int *p,*q;
	
	p=&no ;
	
	q=p;

	printf("%d\t%d\n",*p,*q);//11 11
	

	return 0;
}//11 11

*/
///////////////////////////////////////////////////
/*
int main()
{
	
	int no = 21 ;
	int *p,*q ;
	p= &no;
	q=p;

printf("%d\n",*p+*q);//21+21=42





return 0 ;
}//42
*/

/////////////////////////////////////////////////////////
/*
//4
int main()
{

char ch ='M' ;

char *p = &ch ;

printf("%ld %ld %ld %ld %ld\n",sizeof(ch),sizeof(&ch),sizeof(p),sizeof(*p),sizeof (int));//1 8 8 1 4

//printf("%d\n",sizeof(&ch));

return 0 ;
}//1 8 8 1 4 
*/
///////////////////////////////////////////////////////////////

/*
//5

int main()
{

	float f =3.12 ;
	float *p = &f ;

	*p=6.12;

printf("%f  %f\n",f,*p);//6.120000  6.120000



return 0 ;
}// 6.120000   6.120000

*/
////////////////////////////////////////////////////////////////

/*
//6

int main()
{

int no1 =11, no2=12;

int *p = &no1 , *q = &no2 ;

printf("%d\n",*q-*p);//1 




return 0 ;
}//1
*/
//////////////////////////////////////////////////////////////////
/*
//7
int main()
{

	int no = 10 , *p =&no ;

	char ch='a',*q=&ch;

	float f = 3.12f, *r=&f ;

	double d = 6.12, *x =&d ;

printf("%ld %ld %ld %ld\n",sizeof(p),sizeof(q),sizeof(r),sizeof(x));//8 8 8 8

//	printf("%ld %ld %ld %ld\n",sizeof(p),sizeof(&q),sizeof(r),sizeof(&x));// 8 8 8 8

	//printf("%ld %ld %ld %ld\n",sizeof(*p),sizeof(*q),sizeof(*r),sizeof(*x));// 4 1 4 8



return 0 ;

}//8 8 8 8
*/

/////////////////////////////////////////////////////////////////////////////

/*

//8
int main()
{

	int no = 11 ;

	int *p,*q,*r ;

 p = q = r = &no ;

printf("%d\n",*p+*q-*r);//11




return 0 ;

}//11

*/

//////////////////////////////////////////////////////////////////////////////
/*
//9

int main()
{
	
	int no = 11 ;

	int *p,*q ;
	*p = &no ;

	 *q = &no ;

	(*p)++;

printf("%d\n",*q);//segmentation fault


return 0 ; 


}//segmentation fault
*/


///////////////////////////////////////////////////////////////////////////////
/*

//10
void fun(int *p, int* q)
{

	*p = 12 ; 

 q = 1200 ;


//printf("%d \n",*q);

}

int main()
{

	int no1 = 10, no2 = 10 ;

	fun(&no1, &no2);
	printf("%d %d \n",no1,no2);// 12 10


return 0 ;

}// 12 10

*/

/////////////////////////////////////////////////////////////////////////
/*
int no=11;

void fun(int *p)
{
	*p = 21 ;

	p = &no ;

	*p = 5 ;


}


int main()
{
	
	int no1 = 10 ;

	fun(&no1);

	printf("%d  %d\n",no,no1);// 5 21
		
return 0;
}//5 21 

*/

/////////////////////////////////////////////////////////////////////////////

/*
//12
int main()
{

		int no = 10 ; 
	int *p = &no, **q=&p, ***r=&q ;


printf("%d  %d  %d\n",*p,**q,***r);//10 10 10
	



return 0 ; 
}// 10  10  10

*/
/////////////////////////////////////////////////////////////////////////////
/*

int no1 = 10 ; 


float* fun(int no)
{
	
	no1 = no1 + no ;

	return &no1;


}

int main()
{

	int *p = NULL ;

	p = fun(10);

printf("%d\n",*p);//warning :: assignment from incompatible  pointer type ///20


return 0 ;

}//20 
*/
////////////////////////////////////////////////////////////////////////
/*
int main()
{
	
	int no = 10 ;
	int *p = &no ;

	if(p == &no)
	{
		printf("Marvellous Info\n");
		

	}//Marvellous Info

return 0 ;

}//Marvellous Info

*/

//////////////////////////////////////////////////////////////////////


/*

int main()
{

	int no=2049;

	char *p = (char*)&no;

	printf("%ld",*p);//1


return 0 ;

}//1

*/
//////////////////////////////////////////////////////////////////

/*
int main()
{

	int no = 21 ;

	char *p = (char*)&no ;

	printf("%d\n",*p);//21
	*p = 1 ;

	printf("%d\n",no);//1


return 0 ;
}//21  1 
*/

//////////////////////////////////////////////////////////////
/*
int main()
{


	int arr[]={10,20,30};

	int *p = &(arr[1]);
	
	printf("%d\n",++*p);//21

	printf("%d\n",arr[1]);//21
	p++;

	printf("%d\n",*p);//30




return 0 ;

}// 21 21 30 

*/


//////////////////////////////////////////////////////////////////////

/*
int main()
{

 int no = 10 ;

int *p = &no ;

int **q = &p ;

int ***r = &q ;

int ****a = &r ;

int *****b = &a ;

int ******c = &b;

	printf("%d\n",no);//10

	printf("%d\n",&no);// Address of no for example 100

	printf("%d\n",*p);//10

	printf("%d\n",**a);//address of q

	printf("%d\n",&(**b));//address of r

	printf("%d\n",***(&b));//address of q

	printf("%d\n",&(**r));//address of p

	printf("%d\n",******c);//10

	printf("%d\n",***r******b);//100

	printf("%d\n",******c+*****b);//20

	
return 0 ;

}

*/

/////////////////////////////////////////////////////////////////////////

/*
int main()
{

	char a[]={'a','e','i','o','M','u','r','s','v'};

	char*p=a, *q=&(a[4]),*r=&(a[8]);


	printf("%c  %c  %c  %c  %c\n",a[4],*(a),*(q+2),*r,*(a+1));// M a r v e 


	printf("%c  %c  %c  %c  %c\n",a[2],2[a],*(p+3),*(q+2-1),*(r-1));// i i o u s


return 0 ;

}

*/

//////////////////////////////////////////////////////////////////////////

/*
struct demo
{

	int arr[4] ;

	int a ;

}obj={10,20,30,40,50};




int main()
{

	int *p = (int*)&obj;

	struct demo *q = &obj;

	int *r = &(q->arr[2]);
	
	printf("%d\n",*(p+3)+q->a-*r);//60

	printf("%d  %d  %d  %d\n",*(p+3),*(obj.arr+3),*(r+1),*((q->arr)+3));//40 40 40 40

return 0 ;
}

*/
