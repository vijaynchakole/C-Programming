#include<iostream>

using namespace std ;
/*
class demo
{

public :

demo()
{
cout<<"inside constructor"<<endl;


}

 void fun( short int i)
{
 cout<<"first definition"<<endl;
}

/*void fun( float j)
{

cout<<"second definition"<<endl;
}
*/
/*

void fun( long float j)
{

cout<<"third definition"<<endl;
}

};

int main()
{
int i =10 ;
 int j = 20 ;
 demo obj;
obj.fun((short)10);//first
//obj.fun(10.0);
obj.fun((long)10);//third


return 0;
}
*/

/////////////////////////////////////////////////////////////////////////////////////////
/*
class demo
{

public :
void fun( short int i)
{

cout<<"first definition"<<endl;


} 

void fun( long int j)
{

 cout<<"second definition"<<endl;

}

};

int main()
{

demo obj ;

obj.fun((short)10) ;
obj.fun((long)10);
//obj.fun(10);//ambiguous error




return 0 ;
}*/
/////////////////////////////////////////////////////////////
/*
class demo
{

public :
static void fun(  int i)
{

cout<<"first definition"<<endl;


} 

static void fun( double j)
{

 cout<<"second definition"<<endl;

}

};

int main()
{

//demo obj ;

demo::fun(10) ; //first
demo::fun(10.0f); // second




return 0 ;
}*/
////////////////////////////////////////////////////////////////////////////////////////

/*
class demo
{

public :
 void fun(  int *i)
{

cout<<"first definition"<<endl;


} 

 void fun( float *j)
{

 cout<<"second definition"<<endl;

}

 void fun( void *j)
{

 cout<<"fourth definition"<<endl;

}

};

int main()
{

int no = 10 ;
double d = 10.0 ;
char ch = 'A' ;
float f = 10.0f ;
demo obj ;

obj.fun(&no) ; //first
obj.fun(&d); // fourth
obj.fun(&ch);//fourth
obj.fun(&f);//second

return 0 ;
}
*/
///////////////////////////////////////////////////////////

/*
class demo
{

public :
 

 void fun( int j);
/*
{

 cout<<"fourth definition"<<endl;

}
*//*
friend  void fun(int j);
};

void fun(int j)
{

cout<<"friend function"<<endl;
}

void demo::fun(int j)
{

cout<<"member function"<<endl;
}

int main()
{

int no = 10 ;
double d = 10.0 ;
char ch = 'A' ;
float f = 10.0f ;
demo obj ;

obj.fun(no) ; //first
fun(no);
/*
obj.fun(&d); // fourth
obj.fun(&ch);//fourth
obj.fun(&f);//second


return 0 ;
}*/
////////////////////////////////////////////////////////////////

class demo
{

public :
 

 void fun( int j)
{

 cout<<"fourth definition"<<endl;

}

 virtual void fun( int j)
{

 cout<<"fifth definition"<<endl;

}


};




int main()
{

int no = 10 ;
double d = 10.0 ;
char ch = 'A' ;
float f = 10.0f ;
demo obj ;

obj.fun(no) ; //first
//fun(no);
/*
obj.fun(&d); // fourth
obj.fun(&ch);//fourth
obj.fun(&f);//second
*/

return 0 ;
}
