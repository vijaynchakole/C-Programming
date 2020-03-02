#include<stdio.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0


/*
int ChkPrime(int );

int main()
{


int i = 0 ;

printf("enter number\n");
scanf("%d",&i);

for(;i>0;i--)
if(ChkPrime(i)==0)
{
	printf("it is Prime number  %d\n",i);


}
else
{
	printf("It is NOT Prime\n");

}


return 0;

}

int ChkPrime(int num)
{

int end = 0 ;

for(end=2 ; end<=(num/2);end++)
{

	if((num%end)==0)
	{

			break ;


	}


}

if(end>(num/2))
{
return 0 ;


}
else
{

return -1 ;

}

}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Fibonacci series
/*
int main()
{

int first=0,second=1,third=0,num=0;


printf("enter number\n");
scanf("%d",&num);

while(num>0)
{
printf("%d  ",first);

third=first+second ;
first=second ;
second = third ;
num--;

}

return 0;

}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Reverse Number
/*
int main()
{

int no = 0, reverse = 0 , digit = 0 ;


printf("enter number original \t");
scanf("%d",&no);

printf("\n");
while(no)
{

	digit = no%10;

 reverse = (reverse*10) + digit ;

	no=no/10;


}

printf("reverse number is %d\n",reverse);

return 0 ;

}
*/
/////////////////////////////////////////////////////////////////////////////
//Numbers Anagram
/*
int main()
{

 int num1=0,num2=0,i=0;
	int arr[10]={0};

printf("enter two numbeers\n");
scanf("%d%d",&num1,&num2);

while(num1>0 && num2>0)
{

	arr[(num1%10)]++ ;
	arr[(num2%10)]--;

	num1=num1/10;
	num2=num2/10 ;


}

if(num1!=num2)
{
	printf("numbers are not Anagram\n");

}

for(i=0;i<10;i++)
{
	if(arr[i]!=0)
		break ;


}

if(i!=10)
{
	printf("numbers are not Anagram\n");

}
else
{

printf("numbers are  Anagram\n");

}


return 0 ;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////
//String Reverse Pallindrome
/*
BOOL ReverseStr(char*str);

int main()
{

char str[100]={"\0"};

printf("enter string\n");
scanf("%s",str);

ReverseStr(str);

return 0 ;
}

BOOL ReverseStr(char* str)
{

	char*ptr = str ;


	while(*str!='\0')
	{

		str++ ;

	}
		str-- ;


	while(ptr<str)
	{

		if(*ptr!=*str)
		{
			break ;
		
		}


		ptr++ ;
	  str--;
	
	}


if(ptr==str)
{
	printf("string is Pallindrome\n");

}
else
{

	printf("string is NOT Pallindrome\n");

}

return TRUE ;

}
*/
//////////////////////////////////////////////////////////////////////////////////////////

//String Reverse 

BOOL ReverseStr(char*str);

int main()
{

char str[100]={"\0"};

printf("enter string\n");
scanf("%s",str);
ReverseStr(str);
printf("reverse string \n");
printf("%s\n",str);


return 0 ;
}
/*
BOOL ReverseStr(char* str)
{

	char*ptr = str ;
	char temp = '\0' ;


	while(*str!='\0')
	{

		str++ ;

	}
		str-- ;


	while(ptr<str)
	{

		temp = *ptr ;
		*ptr = *str ;
		*str = temp ;


		ptr++ ;
	  str--;
	
	}

/*
if(ptr==str)
{
	printf("string is Pallindrome\n");

}
else
{

	printf("string is NOT Pallindrome\n");

}

return TRUE ;

}
*/
////////////////////////////////////////////////////////////////////
/*
BOOL ReverseStr(char* str)
{

	char*ptr = str ;
  char*pptr = str ;
	char* temp1 = NULL ;
	char* temp2 = NULL ;
	char ch = '\0' ;


	while(*str!='\0')
	{

		str++ ;

	}
		str-- ;


	while(str>=ptr)
	{

	
		while(*str!=' ')
		{
				
			str--;

		}
			temp2=str ;
		str++ ;
	


	while((*str!=' ' && *str!='\0'))
	{

		ch = *ptr ;
		*ptr = *str ;
		*str = ch ;
		str++ ;
		ptr++;
		

	}

		str=--temp2;

	str-- ;
	
	}

return TRUE ;

}
*/
///////////////////////////////////////////////////////////////////////////


