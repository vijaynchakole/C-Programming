#include<stdio.h>


int substring(char*str,char*second);
void chkAnagram(char*str,char*second);

int main()
{
	char arr[100] = {'\0'} ;
	char brr[100] = {'\0'} ;


	printf("enter string1 \n");
	scanf("%[^'\n']s",arr);


	chkAnagram(arr,"ABCDEF");
//substring(arr,"ab") ;

return 0 ;

}
/////////////////////////////////////////////////////

/*
int substring(char*str,char*second)
{

char*ptr = str ;
char*temp = second ;
int iCnt = 0;


	while(*str!='\0')
	{

		if(*str==*second)
		{

			ptr = str ;
		
			temp = second ;

			while(*temp!='\0' && *temp == *str)
			{

				temp++ ;
				str++ ;


			}


				if(*temp=='\0')
				{

					iCnt++ ;
			
				}

		
			str = ptr ;


		}



		str++ ;




	}





printf("\n%d\n",iCnt);


return 0 ;


}
*/
/////////////////////////////////////////////////////

void chkAnagram(char*str, char*second)
{

	int i = 0 ;
	char arr[26] = {'\0'};


	while(*str!='\0')
	{
	
		arr[*str - 'A']++;
		str++;


	}

	while(*second!='\0')
	{

		arr[*second - 'A' ]-- ;
		second++;


	}



	for(i = 0 ; i<26 ; i++)
		{
			if(arr[i]!=0)
				break ;

		}

	
	if(i==26)
		printf("it is anagram\n");
	else
		printf("NOT anagram\n");




}
