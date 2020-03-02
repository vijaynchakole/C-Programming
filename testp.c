#include<stdio.h>

#include<stdio.h>
int main()
{

int row = 4, num=0,temp=0 ;

int i=0,j=0;

scanf("%d",&row);

num=row-1 ;

temp = row ;

for(i=1;i<=row;i++)
{

num=row-1 ;
	for(j=1;j<=row;j++)
  {
		if((i+j)>row)
		{

				if(j==row)
					{

						printf("%c",65+num);

					}
					else
							{

									printf("%c ",65+num);
									num--;

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
	num=row-1 ;
	for(j=1;j<=row;j++)
	{

			if(j>i)
				{

						if(j==row)
							{

								printf("%c",65+num);

							}
								else
										{

											printf("%c ",65+num);
											num--;

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


return 0;
}



