#include<stdio.h>

int main()
{

int Row =5 ;
int i=0,j=0;

for(i=1;i<=Row;i++)
{
	for(j=1;j<=[(Row*2)-i] ; j++)
		{
					if(j>=i)
						{
								if(j==[(Row*2)-i])		
									{
											printf("*");


									}	
									else
											{

												printf("* ");

											}		
	
	
						}
					else
							{

								printf("  ");

							}

		}


	printf("\n");


}




return 0;
}
