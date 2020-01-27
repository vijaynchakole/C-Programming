#include<stdio.h>

int main()
{
 
 char arr[10000] = {'\0'} ;
 char alpha[26] = {'\0'} ;
 int i = 0 ;
 char*str;

	printf("enter string\n");
	scanf("%[^'\n']s",arr);

 str = arr ;
 
	while(*str!='\0')
	{

		if((*str>='A' && *str<='Z') || (*str>='a' && *str<='z'))
		{

			if((*str>='A' && *str<='Z'))
				{
				   alpha[*str-'A']++ ;
					
					
				}
				else
					{
						alpha[*str-'a']++ ;
					

					}


		}


		str++ ;


	}

  

	for(i=0;i<26;i++)
	{
		if(alpha[i]=='\0')
			{

				break ;

			}


	}


	if(i==26)
	{
		
		printf("pangram\n");

	}
	else
		{

			printf("not pangram\n");

		}


return 0 ;
}
