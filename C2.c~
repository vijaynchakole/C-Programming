#include<stdio.h>

/*
int main()
{


	char *str = "Marvellous" ;

	char *ptr = str ;

	char least = 127 ;

	while(*ptr++)

	least = (*ptr<least) ? *ptr : least ;

	printf("%d",least);//0


	//printf("%d\n",'s') ;


return 0 ;

}
*/
/////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	int i = 258, *p  ;

	char *q ;

	p = &i ;

	q = (char*)&i ;

	//printf("%d  %d\n",*((char*)p+1), *((char*)q+1)) ; // 1   1 


	printf("%d\n %d\n",*((int*)p)+2, *((int*)q)+1 );//260 259


return 0 ;

}
*/

///////////////////////////////////////////////////////////////////////
/*
int main()
{

	int i = 265, *p ;

	unsigned short *q ;

	p = &i ;

	q = (unsigned short *)&i ;

	printf("%d  %d\n",*((char*)p+1),*((unsigned short*)q+1)) ; //1 0 




return 0 ;

}*/

//////////////////////////////////////////////////////////////////////

/*
int main()
{

	int i = 300 ; 

	char*p = (char*)&i ;

	*++p = 2 ; 

	*--p = 2 ;

	//p = p +0;

	printf("%d\n",i);//514

return 0 ;

}
*/
////////////////////////////////////////////////////////////////////

/*
int main()
{

	int i = 32896 ;

	char *p = (char*)&i, *q = (char*)&i+1 ;


	if(*p == *q )
	{
		printf("Vijay\n");//Vijay

	}
else{
		printf("NOt\n");

	}


return 0 ;


}
*/

/////////////////////////////////////////////////////////////////////
/*
int main()
{
	int i = 582 ;

	char *p = (char*)&i , *q = (char*)&i+1 ;


if(*p == *q )
	{
		printf("Vijay\n");

	}
else{
		printf("NOT\n");

	}//NOT



return 0 ;

}
*/
///////////////////////////////////////////////////////////////////////
/*
#define Marvellous(a,b) a*b

int main()
{

int x = 3, y = 4 ;

	printf("%d\n",Marvellous(x+2,y-1));// 10



return 0 ;
}
*/
////////////////////////////////////////////////////////////////////////////////////////

/*
#define Max(a,b) (a>b) ? a:b

#define Min(a,b) (a<b) ? a : b 

#define Marvellous(a,b) (Max(a,b))*(Min(a,b))


int main()
{

int x = 3, y = 4 ;

	printf("%d\n",Marvellous(x+2,y-1));// 15



return 0 ;

}
*//////////////////////////////////////////////////
/*
#define Max(a,b) (a>b)?a:b 




int Max(int a, int b)
{

	return  (a<b)?a:b;

}

int main()
{

	int x = 3 , y = 4 ;

	printf("%d",Max(x,y));//3



return 0 ;


}//error
*/
////////////////////////////////////////////////////
/*
int Max(int a, int b)
{

	#define MAx(a,b) (a>b)?a:b 

	return  MAx(a,b) ;

}

int main()
{

	int x =3, y = 4 ;

	printf("%d\n",Max(x,y));//4




return 0 ;

}
*/
///////////////////////////////////////////////////////////////////////

/*
#define Fun(a,b) ++a+++b++ //error : lvalue required an increment operand


int main()
{

	int x = 3, y = 4 ;

	printf("%d\n%d\n%d\n",Fun(x,y),x,y);//4+5=9

return 0 ; 

}
*/
////////////////////////////////////////////////////////////////////
/*

int no = 10 ;

#define Fun(a) a+no

int main()
{

	int no = 3 ;

	printf("%d\n",Fun(no));//6


return 0 ;

}
*/
//////////////////////////////////////////////////////////////////
/*
#define Fun(a) a+no

int main()
{

	int no = 3 ;

	printf("%d\n",Fun(no));//6


return 0 ;

}
*/
////////////////////////////////////////////////////////////////
/*
#define Fun(a,no) (a&no)?1:0 

int main()
{
	int no1 = 528, no2=16 ;

	printf("%d\n",Fun(no1,no2));//1


return 0 ;

}
*/
///////////////////////////////////////////////////////////////////
/*

int main()
{

	char s[] = {'a','b','c','\n','c','\0'};

	char *p, *str1, *str2 ;

	p = &s[3] ;
	
	str1 = p ;

	str2 = s ;

	printf("%d\n",++*p+++*str2-32);//11 + 97 -32

	printf("%d\n",'\n'+1+'a'-32);//10+1 -> 11 + 97 - 32


return 0 ;

}
*/

////////////////////////////////////////////////////////////////////////////
/*
int main()
{

	char s[] = {'a','b','c','\n','c','\0'};

	char *p, *str1, *str2 ;

	p = &s[5] ;
	
	str1 = p ;

	str2 = s ;



	if((*(str1-2))-10 == *p)

	printf("%d\nFirst\n",++*p+++*str2-32);//66

	else

	printf("%d\n",--*p+++*str2-32);//64



//printf("%d",'\0');//0 
return 0 ;

}
*/

///////////////////////////////////////////////////////////////////////////////////
/*
int main()
{

char p[] = {'M','a','r','v','e','l','l','o','u','s','\0'};

char *p1 ;

p1 = p ;

int i = 0 ;

while(*(p+i)!='\0')
{
	++*(p+i) && i++ ;

	


}

printf("%s\n",p1);//Nbswfmmpvt



return 0 ;

}
*/

//////////////////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	
	int i = 4 , j = 7 ;


	j = sizeof(++j)||printf("Marvellous")&&i++;


	printf("%d\n%d\n",i,j);//  [ (00000100)|| 00001010 && 00000101]// 4 1


return 0; 



}
*/

///////////////////////////////////////////////////////////////////////////////////
/*
int main()
{

	int i = 4, j = 7 ;

	j = i || j++&&printf("Marvellous") ;

	printf("%d\n%d\n",i,j);// 4 1



return 0 ;
}
*/

///////////////////////////////////////////////////////////////////////////////////


