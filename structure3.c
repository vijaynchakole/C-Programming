#include<stdio.h>
#include<malloc.h>
/*
struct demo
{
	
	int i ; 
	char ch ;
	int j ;

};


int main()
{

	#pragma pack(1)
	struct demo obj ;

	printf("%ld\n",sizeof(obj));//12 bytes ...if we allocate memory in term of 1 byte then { #prgma pack (1)} statement should be immediate above structure decclaration. then only the sizeof structure becames 9 bytes


return 0 ;

}
*/

///////////////////////////////////////////////////////////////////////////////////////////
/*
#pragma pack(1)
struct demo
{
	
	int i ; 
	char ch ;
	int j ;

};


int main()
{


	struct demo obj1 ;

	printf("%ld\n",sizeof(obj1));//9


return 0 ;

}

*/

/////////////////////////////////////////////////////////////////////////////////////////////
/*
struct demo
{
	
	#pragma pack(1)
	int i ; 
	char ch ;
	int j ;

};


int main()
{


	struct demo obj1 ;

	printf("%ld\n",sizeof(obj1));//9


return 0 ;

}*/

////////////////////////////////////////////////////////////////////////////////////////
/*
#pragma pack(2)

struct demo
{
	
	int i ; 
	char ch ;
	int j ;

};


int main()
{


	struct demo obj1 ;

	printf("%ld\n",sizeof(obj1));//10


return 0 ;

}
*/
///////////////////////////////////////////////////////////////////////////////////////
/*
#pragma pack(5)
struct demo
{
	
	int i ; 
	char ch ;
	int j ;

};


int main()
{


	struct demo obj1 ;

	printf("%ld\n",sizeof(obj1));//12.....due to pragma pack value should be 2's power number(1 2 4 8 16)


return 0 ;

}
*/

////////////////////////////////////////////////////////////////////////////////////
/*
#pragma pack(1)
union demo
{
	
	int i ; 
	char ch ;
	int j ;

};


int main()
{


	union demo obj1 ;

	printf("%ld\n",sizeof(obj1));//4 


return 0 ;

}
*/
///////////////////////////////////////////////////////////////////////////////////////
/*
#pragma pack(1)

union demo
{
	
	int i ; 

	struct hello
	{
		int i ;
		char ch ;
		int j ;
	
	}var;


};


int main()
{


	union demo obj1 ;

	printf("%ld\n",sizeof(obj1));//9


return 0 ;

}
*/

////////////////////////////////////////////////////////////////////////////////////////////////

/*
#define max 1
#pragma pack(max)
struct demo
{
	
	int i ; 
	char ch ;
	int j ;

};


int main()
{


	struct demo obj1 ;

	printf("%ld\n",sizeof(obj1));//12 .........max would be ignored


return 0 ;

}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////
/*
#pragma pack(1)
 
struct demo1
{
	
	int i ; 
	char ch ;
	int j ;

};

struct demo2
{
	
	int i ; 
	char ch ;
	int j ;

};


int main()
{


	struct demo1 obj1 ;
	struct demo2 obj2 ;

	printf("%ld\n",sizeof(obj1));//9
	printf("%ld\n",sizeof(obj2));//9


return 0 ;

}

*/

///////////////////////////////////////////////////////////////////////////////////////////

/*
struct demo1
{
	
	int i ; 
	char ch ;
	int j ;
	#pragma pack(1)//its preprossesor statement hence its execute first and due to this memory allocate in term of 1 byte
	int a ;
	char b ;
    int c ;



};


int main()
{

	
	struct demo1 obj ;

	printf("%ld\n",sizeof(obj));//21


return 0 ;

}
*/

/////////////////////////////////////////////////////////////////////////////////////////////////
/*
struct demo
{
	
	int i :3 ; 
	char ch : 2 ;
	int j:3;

};


int main()
{

	struct demo obj ;

	printf("%ld\n",sizeof(obj));//4

return 0 ;

}

*/
////////////////////////////////////////////////////////////////////////////////////////////////

/*
#pragma pack(1)
struct demo
{
	
	int i :2 ; 
	int j:2;

}obj;


int main()
{

	printf("enter values\n");
	scanf("%d%d",&obj.i,&obj.j);//cannot take address of bitfield


	printf("%ld\n",sizeof(obj));//4

return 0 ;

}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////

/*
#pragma pack(1)

struct demo
{
	
	int i :42 ; //width of the 'i' exceed its type
	char ch : 10 ;//width of the 'ch' exceed its type
	//int j:3;

};


int main()
{

	struct demo obj ;

	printf("%ld\n",sizeof(obj));//4

return 0 ;

}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
//#pragma pack(1)

struct demo
{
	
	int i[2] : 5 ; // bit-field-i has invalid type
	char ch[5] : 2 ;//bit-field-ch has invalid type

};


int main()
{

	struct demo obj ;

	printf("%ld\n",sizeof(obj));//4

return 0 ;

}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////
/*
//#pragma pack(1)

struct demo
{
	int i ;
	float f : 5 ;//bit-field-f has invalid type
	double d : 3 ;//bit-field-d has invalid type

};


int main()
{

	struct demo obj ;

	printf("%ld\n",sizeof(obj));//4

return 0 ;

}
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#pragma pack(1)
struct demo
{
	int i : 3 ;
	int j : 5 ;

}obj = {4,16};


int main()
{

//	struct demo obj ;

printf("%d\n%d\n",obj.i,obj.j);// -4 -16

	printf("%ld\n",sizeof(obj));//1

return 0 ;

}
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#pragma pack(1)
struct demo
{
	int i : 3 ;
	int j : 4 ;

}obj = {7,15};


int main()
{

//	struct demo obj ;

printf("%d\n%d\n",obj.i,obj.j);// -1 -1 due to sign bit also on hence results goes to negative

	printf("%ld\n",sizeof(obj));//1

return 0 ;

}

*/
////////////////////////////////////////////////////////////////
/*
#pragma pack(1)
struct demo
{
	int i : 3 ;
	int j : 4 ;

}obj = {128,256};


int main()
{

//	struct demo obj ;

printf("%d\n%d\n",obj.i,obj.j);// overflow in implicit constant conversion

	printf("%ld\n",sizeof(obj));//1

return 0 ;

}
*/
///////////////////////////////////////////////////////////////

#pragma pack(1)
struct demo1
{
	int k : 10 ;
	int i : 3 ;
	int j : 4 ;

}obj = {2,3};


int main()
{

//	struct demo obj ;

printf("%d\n%d\n",obj.k,obj.i);// 2 3

	printf("%ld\n",sizeof(obj));//3

return 0 ;

}
