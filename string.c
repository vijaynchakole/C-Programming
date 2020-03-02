#include<stdio.h>

int main()
{

char pstr[100] = {'\0'} ;

char*str=pstr;

scanf("%[^'\n']s",str);

while(*str!='\0')
{

printf("%c",*str);

str++;

}



return 0;
}

/*
/* Read input from STDIN. Print your output to STDOUT*/
/*
#include<stdio.h>
int main(int argc, char *a[])
{
	//Write code here
	
	char str[100] = {'\0'};
	char*ptr = NULL ;
	int i = 0,j=0;
	int flag = 0;
	
	scanf("%[^'\n']s",str);
	ptr=str;
	
	while(*str!='\0')
	{
	    j++;
	    str++ ;
	    
	}
	
	str=ptr;
	
	
	while(*str!='\0')
	{
	    
	    if(*str>='0' && *str<='9')
	        {
	            i++ ;
	            
	        }
	        
	        if(*str=='.')
	        {
	           flag = 1; 
	            
	        }
	        
	        str++;
	    
	}
	
	if(j==i)
	{
	    printf("This input is type of integer");
	    
	}
	else if(j==i && flag==1)
	{
	    printf("This input is type of float");
	    
	}
	else
	{
	    printf("This input is type of string");
	    
	}
	
	return 0;
}
*/
