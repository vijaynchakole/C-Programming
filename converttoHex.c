#include<stdio.h>
#include<malloc.h>

void DectoHex(int num);

int main()
{


int num = 0,digit= 0 ;

printf("enter number\n");
scanf("%d",&num);


DectoHex(num);

return 0 ;

}

void DectoHex(int num)
{


int digit = 0, iSum = 0,i=0,j=0 ;


char* ptr = (char*)malloc(100*sizeof(char));


	while(num!=0)
	{
		
		digit = num%16 ;

		if(digit>9)
		{

			//printf("%c",55+digit);

		ptr[i++] = 55+digit ;

		}
		else
			{

					ptr[i++] = digit ;

				//printf("%d",digit);


			}
	
		num = num/16 ;


	}


ptr = (char*)realloc(ptr,i*sizeof(char));

for(j = i-1 ; j>=0 ; j--)
{

   if(ptr[j]>9)
	{

	printf("%c",ptr[j]);

	}
	else 
		{

		printf("%d",ptr[j]);

		}


}

printf("\n");


}
