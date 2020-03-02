#include<stdio.h>
#include<malloc.h>


void dectoBinary(int num);

int main()
{

int num = 0,digit= 0 ;

printf("enter number\n");
scanf("%d",&num);

dectoBinary(num);


return 0 ;


}


void dectoBinary(int num)
{

int digit = 0,j=1 ;
int i = 0;
 
char* ptr = (char*)malloc(100*sizeof(char));


	while(num!=0)
	{

		digit = num%2;


		ptr[i++] = digit ;

		//printf("%d",digit);
		
		num = num/2 ;
	

	}

ptr = (char*)realloc(ptr,i*sizeof(char));

for(j = i-1 ; j>=0 ; j--)
{

	printf("%d",ptr[j]);


}

//printf("  ");



}
