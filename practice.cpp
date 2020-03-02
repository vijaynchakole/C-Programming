#include<stdio.h>
namespace std ;
#include<iostream>


bool ChkPrime(int );

int main()
{


int i = 0 ;

printf("enter number\n");
scanf("%d",&i);

if(ChkPrime(i)==true)
{
	printf("it is Prime number\n");


}
else
{
	printf("It is NOT Prime\n");

}

return 0;

}

bool ChkPrime(int num)
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
return true ;


}
else
{

return false ;

}

}
