#include<stdio.h>
#include<malloc.h>


int dectoBinary(int num);

int main()
{

int num = 0,digit= 0 ;

printf("enter number\n");
scanf("%d",&num);

dectoBinary(num);



return 0 ;


}


int dectoBinary(int num)
{

int digit = 0,j=1, x=0 ;
int i = 0;
 char* temp = NULL ;
char* ptr = (char*)malloc(100*sizeof(char));


	while(num!=0)
	{

		digit = num%2;


		ptr[i++] = digit ;

		printf("%d",digit);
		
		num = num/2 ;
	

	}

ptr = (char*)realloc(ptr,i*sizeof(char));
temp = (char*)malloc(temp,i*sizeof(char));

for(j = (i-1) ; j>=0 ; j--)
{

	//printf("%d",ptr[j]);
	printf("hello World\n");

	if(ptr[j]==49)
	{

		temp[x] = 1;

	}
	else
			{

				temp[x] = 0;
		
	}


x++;

	}




printf("\n\n");

for(j = 0 ; j<x ; j++)
{

//	printf("%d  ",temp[j]);


	


}

//convert binary into decimal and add 1 in it

return 0;

 
}
