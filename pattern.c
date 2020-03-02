#include<stdio.h>
/*
int main()
{


int i = 0 , j = 0, num = 0 ;


char arr[]="Piyush" ;
	
char *ptr = NULL ;


//printf("%s\n",arr);


while(arr[i]!='\0')
{

	for(j=0 ; j<=i ; j++)
		{

			printf("%c  ",arr[j]);


		}
i++ ;

	printf("\n");

}

return 0 ;

}
*/


//////////////////////////////////////////////////////////////////

/*
int main()
{


int i = 0 , j = 0, num = 0 ;


char arr[]="PIYUSH" ;
	
char *ptr = NULL ;

ptr = arr ;

while(*ptr!='\0')
{

	i++ ;
	ptr++ ;

}

ptr=arr ;
	while(i)
	{
		j=0;
		while(j<i)
		{
			if(j%2==0)
			printf("%c ",ptr[j]);

			else
				printf("%c ",ptr[j]+32);


			j++;

		}

		printf("\n");
		i--;



	}


return 0 ;

}
*/
/////////////////////////////////////////////////////////////////////

int main()
{


int i = 0 , j = 0, num = 0,temp = 0,temp2=0,temp3=0 ;


char arr[]=/*"VIJAY NARSING CHAKOLE VIJAY NARSING CHAKOLE";*/"UNIX WIN32 SDK" ;
	
char *ptr = NULL ;


//printf("%s\n",arr);

int flag = 0 ;
while(arr[i]!='\0')
{


	if(arr[i]==' ')
	{	
		if(flag==0)
		{ 
			flag = 1 ;
			temp2 = num;
		}
		else
	   		{		
				temp2 = --num;
			}
	
		temp = ++i ;
		temp3=temp2;
		//temp2 = temp2 - 2;
		while(temp2--)	
		{	
			printf("  ");	
		
		}
temp2 = temp3 ;
		
}	

	
		if(i!=0)
		printf("\n");
		while(temp2-->1)	
		{	
			printf("  ");	
		
		}
temp2 = temp3 ;	

	
		for(j=temp ; j<=i ; j++ )
		{
			printf("%c ",arr[j]);

		}

	i++ ;
	num++ ;
	
}

return 0 ;

}
