#include<stdio.h>
#include<malloc.h>


int dectoBinary(int num);

int main()
{

int num = 0,digit= 0 ;

printf("storage representation of negative number in memory\n");
printf("enter any negative number\n");
scanf("%d",&num);

dectoBinary(num);



return 0 ;


}


int dectoBinary(int num)
{

if(num>0)
{
	printf("enter negative number\n");

	

	return -1 ;

}
else
{

	num = -(num);


}

int digit = 0,j=1, x=0,k = 0;
int i = 0;
 char temp[32] = {'0'};
char* ptr = (char*)malloc(100*sizeof(char));
unsigned long int arr[32] = {0};
unsigned long int mult = 1, sum = 0 ;

	while(num!=0)
	{

		digit = num%2;


		ptr[i++] = digit ;
		
		num = num/2 ;
	

	}

printf("\n");

ptr = (char*)realloc(ptr,i*sizeof(char));

printf("Binary code is :: ");
for(j=(i-1); j >=0 ; j--)
{

	printf("%d",ptr[j]);//*

temp[j] = ptr[j] ;



	}

printf("\n");



for(i=0 ; i<32 ; i++ )
{

	if(temp[i]==0)
	{

	temp[i] = 1 ;


	}
		else
				{

					temp[i] = 0;

				}	


}
///////////////////////////
printf("Inverse is :\n");

for(i=31 ; i>=0 ; i-- )
{


printf("%d",temp[i]);

}

printf("\n two's compliment is :: \n");


arr[0] = 1 ;
for(k=1 ; k<32 ; k++)
{

	for(i=1 ; i<=k ; i++)
{
	
	mult = mult*2 ;
	
 

}

arr[k] = mult ;
mult = 1 ;


}


///////////////////////////

//convert binary into decimal and add 1 in it

for(i=31 ; i>=0 ; i-- )
{

		if(temp[i]==1)
			{

				sum = sum + arr[i] ;

			}

}
//printf("%ld\n",sum);


sum = sum+1 ;


i=0 ;
	while(sum!=0)
	{

		digit = sum%2;


		ptr[i++] = digit ;

		//printf("%d",digit);
		
		sum = sum/2 ;
	

	}

for(i=31 ; i>=0 ; i-- )
{

	printf("%d",ptr[i]);

}
printf("\n");
return 0;

}

