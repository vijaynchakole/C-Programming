#include<iostream>
#include<stdio.h>
using namespace std ;

class Singleton
{

private :

Singleton()
{

printf("inside private constructor\n") ;

}

public :


static Singleton& getObject()
{


static Singleton obj ;

return obj ;


}


int addition()
{

printf("inside Addition\n");
return 79 ;

}
};


int main()
{

Singleton dobj = Singleton :: getObject() ;

int no = dobj.addition() ;
printf("%d\n",no);

Singleton hobj = Singleton :: getObject() ;

no = hobj.addition() ;
printf("%d\n",no);


//Singleton dobj ;
return 0;

}
