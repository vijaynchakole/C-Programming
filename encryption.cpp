#include<iostream>
using namespace std ;


class security
{
public:
int start ;
int end ;
int pstart ;
int *ptr ;

security(char *str)
{
start = end = pstart = 0 ;


ptr = str ;

}

void setValue();

void Encryt();
void decrypt() ;


};

void security :: Encryt()
{

start = ptr ;

while(*ptr!='\0')
{

*ptr = *ptr + &ptr ;//+ ptr ;

ptr++ ;


}


}

#include<stdio.h>
int main()
{

 char arr[100] = "Hello world" ;
security obj(arr);

obj.Encryt();

printf("%s",arr);


return 0;
}
