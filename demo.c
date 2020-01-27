#include<stdio.h>
/*
int main()
{

 for(1;2;1)
{

printf("Infinite\n");

}



return 0;

}*/
/////////////////////////////////////////////////////////////////////

/*
char*sun(char*);

int main()
{

char*s=NULL;
char *arr=NULL;

s=sun(arr);


printf("%s",s);

return 0;

}

char*sun(char*brr)
{
  char buffer[]="shreeRam";
  brr=buffer;

return brr;

}*///garbage value will be print

////////////////////////////////////////////////////////////


/*
enum demo{i,j,k};

int main()
{



 printf("%d %d %d ",i,j,k);

return 0 ;

}0 1 2*/

////////////////?//////////////////////////////////////////////////////////////////////////////////////////////////

/*
enum demo{i=10,j,k};

int main()
{



 printf("%d %d %d ",i,j,k);

return 0 ;

}10,11,12*/

///////////////////////////////////////////////
/*
enum demo{i=10,j,k};


int main()
{

  int i=105;

 printf("%d %d %d ",i,j,k);

return 0 ;

}105 11 12*/
////////////////////////////////////////////////////////
/*
enum demo{i,j,k};

int main()
{

 printf("%d %d",sizeof(demo),sizeof(i));

return 0 ;

}each undeclared indentifier is reported only once  for each function it appears in 

*/
////////////////////////////////////////////////////////
/*
enum demo {i,j,k};

int main()
{
  printf("%u %u",&demo,&i);


return 0;
}//compiled time error*/

////////////////////////////////////////////////////////////

/*
enum demo{i,j,k};

int main()
{
 
i++;

printf("%d",i);



return 0;

}//compiled timed error //lvalue required as an incremented operand
*/
/////////////////////////////////

/*
enum demo{i,j,k};

int main()
{
 i = 15;


printf ("%d",i);





return 0;
}//compiled time error


*/
/////////////////////////////////////////////////////////
/*
enum demo{i,k,i};

int main()
{

  printf("%d",i);


return 0;
} //compiled time error = redefinination
*/
///////////////////////////////////////////
/*
enum demo{i=10,j,k,l=12};
int main()

{
  printf("%d %d %d %d ",i,j,k,l);

return 0;
}//10 11 12 12
*/

//////////////////////////////////////////////////
/*
enum demo{i=10,j,k,l=12}var;

int main()
{
   var=i;
demo *p=&var;

printf("%d\n",*p);
return 0;
}//initialization from incompatible pointer type(compiled time error);
*/

/////////////////////////////////////////////////////////
/*
enum demo{i=10,j,k,l=12}var;

int main()
{

  var=k;
printf("%d\n",var);



return 0;

}//12*/
///////////////////////////////////
/*
int a=11,b=12;

enum demo{i=10,j=b,k,l=12}var;

int main()
{

 printf("%d %d\n",i,j);


return 0;
}enumeration value for 'j' is not an integer constant
*/
//////////////////////////////////////////////////////
/*
enum demo{i=10,j,k,l=12}var;

int main()
{


var=l;
++var;
 printf("%d %d\n",i,var);


return 0;
}10 13
*/

//////////////////////////////////////////////////////
/*
#define no 10 

const int a =11;
const int b = 21;
enum demo{i=a,j,k,l=12};

int main()
{
  
printf("%d %d %d",i,j,k);


return 0 ;
}compiled error*/

//////////////////////////////////
/*
enum demo {i=10*2+3,j=i+10,k};

int main()
{

printf("%d %d %d\n",i,j,k);
return 0 ;

}*/

///////////////////////////////////
/*
enum demo {i=7/2,j=sizeof(i),k='a'};

int main()
{

printf("%d %d %d",i,j,k);


return 0;
}3 4 97*/
/////////////////////////
/*

enum demo {i=7/2,j=sizeof(i),k='a'};

struct hello
{
int i ;
enum demo var;


}obj={20,i};

int main()
{

printf("%d %d ",obj.i,obj.var);


return 0;
}20 3 */
//////////////////////////////////////
/*
 static enum demo{i=2,j,k,l}var1,var2;

int main()
{

printf("%d %d\n",var1,var2);

var1=i;
var2=i;

if(var1==var2)
{
  printf("Hello");

}


return 0;


}0 0 */
///////////////////////////////////////////////
/*
enum demo {i=2,j,k,l};

enum demo fun(enum demo var)
{
printf("%d\n",var);
return demo:j;

}

int main()
{
int i = 10 ;

i = fun(demo::i);

printf("%d\n",i);




return 0;
}*/

///////////////////////
/*
enum demo{i=2,j,k,l};

enum inner{a=demo::i,j};

int main()
{

printf("%d\n",i);
return 0 ;
}*/
