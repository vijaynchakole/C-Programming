#include<stdio.h>
void plus( char  *str);

int main()
{
int no = 258 ;

char *ptr =(char*)&no ;
ptr = ptr+3;
printf("%d\n",(char*)*ptr);
return 0; 

}

























/*
int main()
{
const char arr[50] = "vijay";

printf("%s\n",arr);
plus(arr);
printf("%s\n",arr);
return 0; 

}


void plus( char  *str)
{

	while(*str!='\0')
	{
		if(*str=='j')
			*str = ' ' ;

		str++ ;
	}

}
*/

////////////////////////////////////////////////////////////////////



