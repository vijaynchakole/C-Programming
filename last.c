#include<stdio.h>

int main()
{

int row=5;
int i=0,j=0;


for(i=1;i<=row;i++)
{
	for(j=1;j<(row+i);j++)
		{
				if((i+j)>row)
					{
								if((j==(row+i-1)))
									{
											printf("%c",64+i);

									}
									else
											{

													printf("%c ",64+i);

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
