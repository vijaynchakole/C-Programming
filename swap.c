#include<stdio.h>

int main()
{
	int a = 10 , b = 20 ;

printf("before => a = %d and b = %d\n",a,b);


a = a + b ;

b = a - b ;

a = a - b ;



printf("after => a = %d and b = %d\n",a,b);
	
return 0 ;

}
