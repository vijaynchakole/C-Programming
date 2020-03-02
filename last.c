#include<stdio.h>
int main()
{

int row = 0 ;

int i=0,j=0;

scanf("%d",&row);

for(i=1;i<=row;i++)
{
	for(j=1;j<=row;j++)
  {
		if((i+j)>row)
		{

				if(j==row)
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

if(i==row)
{

for(i=1;i<row;i++)
{
	for(j=1;j<=row;j++)
	{

			if(j>i)
				{

						if(j==row)
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



}



}


}
