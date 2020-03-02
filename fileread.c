#include<stdio.h>

#include<unistd.h>
#include<sys/types.h>
//#include<stdlib.h>
#include<fcntl.h>
#include<malloc.h>

void DectoHex(int num);
void dectoBinary(int num);

int main()
{

 int fd = 0, Rfd = 0  ;
	char ch ;

	char arr[100] ;


	fd = open("xdemo.txt",O_RDONLY);

	if(fd==-1)
	{

		printf("unable to open file\n");



	}
	else
		{
			printf("file opened successfully\n");



		}



	while((read(fd,&ch,1))!=0)
		{


			dectoBinary(ch);
			//DectoHex(ch);
			//printf("%c",ch);


		}



return 0 ;

}
////////////////////////////////////////////////////////////////////////////////////////////////////////



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

free(ptr);
//printf("  ");



}



////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
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


}*/
