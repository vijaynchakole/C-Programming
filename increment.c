#include<stdio.h>
/*
int main()
{

	int i = 10, j = 20 ;


 printf("before %d\n",i++);//10

 printf("after %d\n",i);//11


}
*/
////////////////////////////////////////////////////////////////

/*
int main()
{

	int i = 10, j = 20 ;


 printf("before %d\n",++i);//11

 printf("after %d\n",i);//11


}
*/

/////////////////////////////////////////////////////////////////

/*
int main()
{

	int i = 10, j = 20 ;

if(i++ > 10)
printf("greater (i = %d)\n",i);

else
printf("smaller (i = %d)\n",i++);

return 0 ;

}

*/
//////////////////////////////////////////////////////////////////

/*
int* fun(int num)//40
{
	

 printf("inside fun up %d\n",++num);//41

	++num ;//42

 printf("inside fun down %d\n",num++);//42 ->43

	return &num;

}


int main()
{

	int i = 40 ;//j = 202 ;

 printf("before %d\n",i);//40

	int* ptr = fun(i++);//40 ->41


 printf("pointer %d\n",*ptr);//43
 printf("After %d\n",i);//41

 printf("before %d\n",i);//41
return 0 ;

}
*/

////////////////////////////////////////////////////////////

/*
int main()
{

	int no[5] = {10,20,30,40,50};

	int* ptr = no ;

	printf("before  %d\n",*ptr);//10

	++*++ptr ;

	printf("after  %d\n",*ptr);//21

	
return 0 ;
}
*/

/////////////////////////////////////////////////////////////////
/*
int main()
{

	int no[5] = {256,20,30,40,50};

	char* ptr = (char*)no ;

	printf("before  %d\n",*ptr);//0

	++ptr;

	

	printf("after  %d\n",*ptr);//1

	
return 0 ;
}
*/
////////////////////////////////////////////////////////////////
/*
int main()
{

	int no[5] = {10,20,30,40,50};

	int* ptr = no ;

	printf("before  %d\n",*ptr);//10

	*ptr++;// both operator has same precedence hence it will execute with the help of assositive and that is right to help for these operators.


	//++*ptr ;

	printf("after  %d\n",*ptr);//20


	
return 0 ;
}
*/
////////////////////////////////////////////////////////////////////
/*
int i = 10 ;

int gun(int i)
{
	 printf("inside gun %d\n",i);10


	i++;
	//num++ ;
	return ++i ;


}



int main()
{

	int num = 2 ,j = 20 ;


 printf("before %d\n",i);//10

	gun(i);

 printf("after %d\n",i);//10


}
*/

/////////////////////////////////////////////////////////////////////////////
/*
int num = 10 ;

int gun(int i)
{
	 printf("inside gun %d\n",i);//2


	i++;
	num++ ;
	return ++i ;


}



int main()
{

	int i = 2 ,j = 20 ;


 printf("before %d\n",i);//2

	gun(i);

 printf("after %d\n",i);//2

 printf("num is %d\n",num);//11


}
*/
