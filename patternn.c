#include<stdio.h>
/*
int main()
{

int row = 0,col=0,num=1;
int i =0, j = 0;

scanf("%d",&row);

col = row ;

for(i=1;i<=row;i++)
{
    for(j=1;j<=col;j++)

    {
	
				if(j>=i)
				{
						if(j==col)
							{

								printf("%d",num);

							}
								else
											{

													printf("%d ",num);
														num++ ;

												}

					


				}
         else
						{

               printf("  ");


						}
       
		
						        
        
    }
 
    printf("\n");
num=1;
    

}

return 0;



}
*/
/*
int main()
{


	int row=0,col=0;
	int i=0,j=0;
	
	scanf("%d",&row);
	col = row ;
	for(i=1;i<=row;i++)
	{
	    for(j=1;j<(row+i);j++)
	        {
	            if((i+j)>row)
	            {
	                if((j==(row+i)))
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
	            printf("  ") ;
	            
	            
	            
	        }
	            
	            
	        }
	    
	    printf("\n");
	    
	    
	    
	}

return 0;

}*/

/*
int main()
{

int row = 4, num=4 ;

int i=0,j=0;



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


return 0;

}*/
///////////////////////////////////////////////////////////////////////////////////////////////


//Basic logic of problem number 22

/*
int main()
{

int row=4 ;
int i=0,j=0;


for(i=1;i<=row;i++)
{
	for(j=1;j<=i;j++)
		{
				if(i>=j)
					{
						
						if(i==j)
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
			for(j=1;j<=(row-i);j++)
				{
							if((i+j)<=row)
								{

									if((i+j)==row)
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
	

}//big if


}


return 0 ;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////

//Basic logic of problem number - 10

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
