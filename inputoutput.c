#include<stdio.h>
/*
int main()
{
int no ; 
no = printf("Vijay\n");

printf("%d\n",no);

return 0 ;
}//6

*/
/////////////////////////////////////////////////
/*
int main()
{


int no = 10 ; 
int *p = &no ;
no = no + *p + printf("%d",no);//10

printf("%d",no);//22



return 0 ; 


}// 10 22
*/

////////////////////////////////////////////////////

/*
int main()
{

int no = 0 ;

no = printf("De\r\rmo\r\r");//8

printf("%d",no);

return 0 ;

}//8
*/

///////////////////////////////////////////////////////
/*
char *str = "%d";
int main()
{

int no = 10 ; 
 printf((char*)str,no);//10
 
return 0 ;
}//10

*/

////////////////////////////////////
/*
int main()
{

int no = printf("He\tll\n\tow\bworld\n");//  \b means backspace(character(w) gets override)

printf("%d",no);//16



return 0 ;
}//16
*/

//////////////////////////////////////////////////////
/*
int main()
{

int no ; 
no = 
 printf("He\tll\n\tow\b\rworldNew Line");//He    ll (new line) worldNew Line

printf("%d",no);//24







return 0 ;
}
*/

/////////////////////////////////////////////

/*
int main()
{

char str[] = "MarvellousInfosystem";

//printf("%s",str);//MarvellousInfosystem
//printf("%c",str[3]);//v
//printf("%s",&str[5]);//llousInfosystem
//printf("%6s",str);//MarvellousInfosystem
//printf("%20.5s",str);// 20 spaces Marve
//printf("%20.7s",str);// 20 spaces Marvell
//printf("%-20.5s",str);//Marve 20 spaces
//printf("%-20.1s",str);// M 20 spaces
//printf("%-20.0s",str);// 20 spaces
//printf("%5s",str);//MarvellousInfosystem
//printf("%*.*s",14,5,str);//14 spaces Marve
//printf("%14.5s",str);//14 spaces Marve

return 0 ;
}
 
*/

/////////////////////////////////////////////////
/*
int main()
{

int no = 3, a = 1234 ;

float num = 123.45 ;
 //printf("%*d",no,a);//1234
//printf("%6d",a);//  1234
//printf("%*.*f",7,2,num);//  123.45
//printf("%0.0f",num);//123
//printf("%1.3f",num);//123.450

return 0 ;

}*/

////////////////////////////////////////////////////////
/*
int main()
{

//printf("%c","MarvellousInfo"[4]);//e

char arr[]="MarvellousInfo" ;


//printf("%c",arr[4]);//e

//printf(5+"MarvellousInfo");//llousInfo
//printf("Marvellous""Info");//MarvellousInfo
//printf("Marvellous","Info");//Marvellous


return 0 ;

}
*/
//////////////////////////////////////////////////////////////
/*
int main()
{
 int no1 = 52, no2 = 0 ;
char str[20] ;

no2 = sprintf(str,"%d%s",no1,"Marvellous");

printf("%d",no2);//12

no2=printf("%s",str);//52Marvellous

printf("%d",no2);//12

return 0 ;
}
*/

/////////////////////////////////////////////////////////////
/*
int main()
{

int no1, no2, no3,no ;//10 20 30 

no = scanf("%d%d%d",&no1,&no2,&no3);

printf("%d",no);//3 (number of input successfully read)




return 0 ;

}
*/

//////////////////////////////////////////////////////////////
/*
int main()
{

int no1, no2,no3,no;// 10 20 30


printf("Please enter three values\n");
no = scanf("%d%*d%d",&no1,&no2,&no3);

printf("%d",no);//2

printf("%d %d %d ",no1,no2,no3);//10 20 0


return 0 ;
}

*/
////////////////////////////////////////////
/*
int main()
{
int no ;//112105

scanf("%2d",&no);
printf("%d",no);//11


return 0 ;
}
*/
///////////////////////////////////////////////////
/*
int main()
{
 int no1=0, no2=0 ;// 1121 751 

scanf("%2d %d",&no1,&no2);

printf("%d  %d",no1,no2);//11 21


return 0 ;
}
*/
/////////////////////////////////////////////
/*
int main()
{

int no = 0 ;

no = printf("A:%d",printf("B:%d",printf("C:%d",printf("DEMO"))));//DEMOC:4B:3A:3

printf("Total count : %d",no);//3

return 0 ;
}
*/
///////////////////////////////////////////////
/*
int fun()
{

return printf("Exit from fun");// Exit from fun

}

int main()
{

printf("Return value is %d\n",fun());//Return value is 13

return 0 ;
}

*/

///////////////////////////////////////////////////////
/*
int fun()
{
//13+6*2=25
return printf("Exit from fun")+printf("Second")*2; // Exit from funSecond 

}

int main()
{

printf("Return value is %d\n",fun());//Return value is 25


return 0 ;
}*/
///////////////////////////////////////////////////////
/*
int fun(int(*fp)(const char*,...),char*ptr)
{

   return fp(ptr);

}

int main()
{

int no = 0 ;

char *ptr1 = "Marvellous Infosystems";

no = fun(printf,ptr1);//Marvellous Infosystem

printf("Return value is %d\n",no);//Return value is 22

return 0 ;
}

*/

/////////////////////////////////////////////////////////////////
/*
int main()
{

printf("\\nMarvellous\r");//\nMarvellous
printf("\n%%%%%%%%");//%%%%

return 0 ;
}
*/	
