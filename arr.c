#include<stdio.h>
/*
int main()
{

	int arr[5] = {10,20,30,40,50};

	printf("%d %d %d %d\n",arr[2],2[arr],*(arr+2),*(2+arr));//30 30 30 30




return 0 ;

}
*/
//////////////////////////////////////////////////////////////////////////////////
/*
int main()
{

	int no = 5 ;

   int arr[no] = {10,20,30,40,50};

	printf("%d\n",arr[3]);//compile time error (excess elements in array initialer )

return 0 ;

}
*/
/////////////////////////////////////////////////////////////
/*
int main()
{

	const int no = 5 ;

   int arr[no] = {10,20,30,40,50};

	printf("%d\n",arr[3]);//(compile time error )excess elements in array initialer 

return 0 ;

}
*/
///////////////////////////////////////////////////////////////////
/*
int main()
{
	
	
 # define no 5

   int arr[no] = {10,20,30,40,50};

	printf("%d\n",arr[3]);//40

return 0 ;

}
*/
//////////////////////////////////////////////////////////////////
/*
int main()
{
	int arr[4] = {10,20,30,40,50,60};
	
	printf("%d\n",arr[6]);//compile time error(excess elements in array initialer )

return 0 ;

}
*/
///////////////////////////////////////////////////////////////////
/*
int main()
{

	int arr[4+3*3] = {10,20,30,40,50,60};
	
	printf("%d\n",arr[3]);// 40


return 0 ;

}
*/
/////////////////////////////////////////////////////////////////////
/*
#define fun(no) no*no
int main()
{

	int arr[fun(2)] = {10,20,30,40};
	
	printf("%d\n",arr[3]);// 40


return 0 ;

}
*/
////////////////////////////////////////////////////////////
/*

int main()
{

	int arr[4] = {10,20};
	int brr[4] ;
	brr[0] = 10 ;
	brr[1] = 20 ;
	
	
	printf("%d %d\n",arr[2],arr[3]);// 0 0
	printf("%d %d\n",brr[2],brr[3]);// 0 0 


return 0 ;

}
*/
///////////////////////////////////////////////////////////
/*
int main()
{
	
	int arr[] = {10,20,30,40} ;

	printf("%ld\n",sizeof(arr));//16

	printf("%d\n",arr[2]);//30


return 0 ;

}
*/
//////////////////////////////////////////////////////////
/*
int main()
{
	
	int arr[] ; // error : array size is missing
		arr[0] = 10 ;

		arr[1] = 20 ;

		

	//printf("%ld\n",sizeof(arr));//16

	printf("%d\n",arr[1]);//error 


return 0 ;

}
*/
////////////////////////////////////////////////
/*
int main()
{

	int arr[4] = {10,20,30,40} ;
	
	printf("%d\n",arr+1);// address of 20
	
	printf("%d\n",arr++); // error :: lvalue required as increment operand

return 0;

}

*/
//////////////////////////////////////////////
/*
int main()
{
	int arr[] = {10,20,30,40};

	int brr[] = {10,20,30,40};
	
	if(arr==brr)
	printf("both are equals\n");
	else
		printf("both are NOTequals\n");//both are NOTequals
		


return 0;
}
*/
////////////////////////////////////////////////
/*
int main()
{
	int i = 0 ;

  int arr[4] = {10,20,30,40} ;
	
  int brr[4] ;

 brr = arr ;

	for(i = 0 ; i<4 ; i++)
		printf("%d ",brr[i]);//error:: incompatible types when assigning to type 'int[4]' to 'int*'

return 0 ;

}
*/
///////////////////////////////////////////////////////
/*
int main()
{

	int arr[]={10,20,30,40};
		
	int (*p)[] = arr ;


	printf("%ld  %d %d\n",sizeof(p),*p,arr);//8 100





return 0 ;


}
*/
/////////////////////////////////////////////////////////
/*
int main()
{
	int arr[4] = {10,20,30,40};
	//int brr[4] = arr ;//error invalid initiliazer
	
	int (*p)[4] = &arr ;

	printf("%u %u\n",arr,arr+1);//100 104

	printf("%u %u\n",p,p+1);//100 104

	printf("%u %u\n",sizeof(p),sizeof(*p));//8 16
	
	//printf("%ld\n",sizeof(brr));//error


return 0;
}
*/
///////////////////////////////////////////////////
/*
void fun(int *p,int a[5])
{
	int i = 0 ;
	for( i = 0 ; i<5 ; i++)
	{

		printf("%d  %d\n",*p,a[i]);// 10 10 20 20 30 30 40 40 0 0 

		p++ ;

	

	}

	printf("%d  %d %d\n",sizeof(p),sizeof(*p),sizeof(a));//8 4 8


	

}

int main()
{

	int arr[] = {10,20,30,40};

	fun(arr,arr);	

return 0 ;
}
*/
/////////////////////////////////////////////////////////////////////
/*
int main()
{
	
	int i , j ;
	int a[] = {1,5,8};
	int b[] = {2,8,0};
	int c[] = {5,7,3};
	int* ptr[3] = {a,b,c};
	

	for(i = 2 ;i>=0 ; i--)
	{
		for(j=0 ; j<3 ; j++)
			{
				printf("%d ",*(ptr[i]+j));//5 7 3 ........... 2 8 0......1 5 8

			} 
	

	}


	printf("%d %d %d\n",sizeof(ptr),sizeof(ptr[0]),sizeof(*(ptr[2])));//24 8 4



return 0 ;
}

*/
///////////////////////////////////////////////////////////////////
/*
int main()
{

	int arr[5] = {10,20,30,40,50};
	
	printf("%u %u ",arr,&arr);//100 100

	printf("%u %u ", &(arr[0]),&(*(arr+0)));//100 100

	printf("%u %u\n",&(*(0 + arr)),&(0[arr]));//100 100



return 0 ;

}
*/

///////////////////////////////////////////////////////
/*
int main()
{
	
	int arr[6] = {10,20,30,40} ;

	printf("%d %d ",sizeof arr, sizeof &arr);//24 8

	printf("%d %d ",sizeof (arr)/sizeof(arr[0]),sizeof(arr[0]));//24/4 = 6  4

	printf("%d %d ",sizeof arr+1,sizeof(arr+1));//25  8

	printf("%d %d ",sizeof &arr+1,sizeof(&arr+1));//9 8

	printf("%d %d ",sizeof(*(arr+0)),sizeof(0[arr]));//4 4


return 0 ;

}
*/
//////////////////////////////////////////////////////////

int main()
{
	int a[5] = {1,2,3,4,5};
/*
	printf("a = %d\n",a);//100

	printf("a[0] = %d\n",a[0]);//1

	printf("0[5] = %d\n",a[5]) ;// index out of boundry
*/
	printf("%d\n",&a);//100
	printf("%d\n",&a[4]);//116
	printf("%d\n",a+1);//104
	printf("%d\n",&a+1);//104
	printf("%d\n",*(a+1));//2
	printf("%d\n",*(1+a));//2
	printf("%d\n",*((&a)+1));//
	printf("%d\n",sizeof(a));//20
	printf("%d\n",sizeof(&a));//8
	printf("%d\n",sizeof(a[1]));//4
	printf("%d\n",sizeof(1[a]));//4	





return 0 ;

}
