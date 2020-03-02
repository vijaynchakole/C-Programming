#include<stdio.h>

void CheckPrime();
void Arithmatic();
void String();

int main()
{

printf("Hello World;\n");

//CheckPrime();


String();

return 0 ;



}

void CheckPrime()
{


int i = 0, j = 0, num =0 ;


for(i=2 ; i <100 ; i++)
{

for(j=2 ; j<=(i/2) ; j++)
{

 if(i%j == 0)
  {

		break ;
	
	}


}

if(j>(i/2))
{

printf("%d  ",i);


}



}



}

//////////////////////////////////

void Arithmatic()
{
}


void String()
{

char arr[100] = "Universal" ;

printf("%s",arr);

char *str = arr ;


while(*str!='\0')
{

printf("%cA",*str);

str++ ;


}





}
