#include<stdio.h>
int ChkPalindrome(char*);
int Palindrome(char*) ;
int main()
{

char arr[1024] = {'\0'};

printf("enter string\n");
scanf("%[^'\n']s",arr);


Palindrome(arr);

return 0 ;
}
///////////////////////////////////////////////////////////////////////////

int Palindrome(char*str)
{
	
	int Max=0, iCnt = 0,num=0 ;
	char*temp = NULL, *ptr=NULL, *start = NULL,*first = NULL,*pointer=NULL,*end = NULL ;


		while(*str!='\0')
		{

				if(*str==' ')
					{

				
							while(*str==' ')
							{

									str++;	


							}


					}
			else
					{

						ptr = str ;
						first = str ;
						iCnt = 0 ;


  while(*str!=' '  &&  *str!='\0')
		{
				iCnt++;
			str++ ;

		}
		end = str ;
	str--;


	while(ptr<=str)
		{

			if(*ptr!=*str)
			{
				break ;
				
			}

			ptr++;
			str--;


		}

	if(ptr>str)
		{

				printf("it is Palindrome\n");

		if(iCnt>Max)
			{

				Max = iCnt ;
				
				pointer = first ;

			}



		}
			else
					{


						printf("it is NOT Palindrome\n");


				}

				str = end ;

					}




						
		}


while(pointer!=NULL && *pointer!=' ' && *pointer!='\0')
{

printf("%c",*pointer);
pointer++;
}
printf("\n");

return 0;

}

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
/*
int Palindrome(char*str)
{
	
	int Max=0, iCnt = 0 ;
	char*temp = NULL, *ptr=NULL ;


		while(*str!='\0')
		{

				if(*str==' ')
					{

				
							while(*str==' ')
							{

									str++;	


							}


					}
						else
								{

										if((iCnt = ChkPalindrome(str))>Max)
											{

												Max = iCnt ;
												ptr = str ;


											}

											while(*str!='\0' && *str!=' ')
												{

													str++ ;
												}


							}

		}


while(ptr!=NULL && *ptr!=' ' && *ptr!='\0')
{

printf("%c",*ptr);
ptr++;
}
printf("\n");

return 0;

}

///////////////////////////////////////////////////////////////////////////
int ChkPalindrome(char*str)
{

	char*ptr = str ;
	int iCnt = 0 ;


  while(*str!=' '  &&  *str!='\0')
		{
				iCnt++;
			str++ ;

		}
		
	str--;


	while(ptr<=str)
		{

			if(*ptr!=*str)
			{
				break ;
				
			}

			ptr++;
			str--;


		}

	if(ptr>str)
		{

				printf("it is Palindrome\n");
			return iCnt ;



		}
			else
					{


						printf("it is NOT Palindrome\n");
						return 0 ;


				}



}

*/
