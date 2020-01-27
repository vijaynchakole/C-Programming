#include<stdio.h>
//Basic logic of problem number - 10

int main()
{

int row=5,num=1;

int i=0,j=0;


for(i=1;i<=row;i++)
{
	for(j=1;j<(row+i);j++)
		{
				if((i+j)>row)
					{
								if((j==(row+i-1)))
									{
											printf("%d",num);

									}
									   else
													{

																printf("%d ",num);
																

															}
														


					}
						else
								{

											printf("  ");
	

								}


		}

num=num+2 ;


printf("\n");
}





return 0;
}
