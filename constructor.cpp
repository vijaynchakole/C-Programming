#include<stdio.h>
#include<iostream>

using namespace std;
/*
class demo
{
	demo()
	{
		cout<<"constructor"<<endl;

	}
	
	~demo()
	{
		cout<<"destructor"<<endl;

	}

};

int main()
{

	demo obj ;// error due to private 

return 0;
}
*/
//////////////////////////////////////////
/*
using namespace std;

class demo
{

	/*demo()
	{
		cout<<"constructor"<<endl;

	}
	
	~demo()
	{
		cout<<"destructor"<<endl;

	}*/
/*
};

int main()
{

	demo obj ;// error due to private 

return 0;
}
*/
/////////////////////////////////////
/*
class demo
{
public:
	demo()
	{
		cout<<"constructor"<<endl;

	}

	demo(int x)
	{
		cout<<"parameterize constructor"<<endl;
	}
	
	~demo()
	{
		cout<<"destructor"<<endl;

	}

};

int main()
{

	demo obj ;// error due to private 
	demo obj2(11);
return 0;
}
*/

//////////////////////////////////////////////
/*
class demo
{
public:
	demo()
	{
		cout<<"constructor"<<endl;

	}
	
	~demo()
	{
		cout<<"destructor"<<endl;

	}

};

int main()
{

	demo obj ;// error due to private 

	demo *ptr = new demo ;
delete(ptr);
return 0;
}
*/
//////////////////////////////////////////////////
#include<malloc.h>
/*
class demo
{
public:
int i, j ;
	demo()
	{
		cout<<"constructor"<<endl;

	}
	
	~demo()
	{
		cout<<"destructor"<<endl;

	}

};

int main()
{

	demo obj ;
demo *ptr = new demo ;
delete ptr;
	/*demo *ptr = (demo*)malloc(sizeof(demo));
obj.i = 10 ;
	cout<<ptr->i<<endl;
return 0;
}*/
//////////////////////////////////////////////////
/*
class demo
{
public:
	demo()
	{
		cout<<"constructor"<<endl;

	}
	
demo(int i)
	{
		cout<<"para constructor"<<endl;

	}
demo(int i,int j)
	{
		cout<<"parameterise2 constructor"<<endl;

	}
	~demo()
	{
		cout<<"destructor"<<endl;

	}

}obj[]={10,20,30,50,40};

int main()
{

	cout<<"inside main"<<endl;

return 0;
}*/
////////////////////////////////////////////////////
/*
class demo
{
public:
int i , j ;
int *p ;
	demo()
	{
		cout<<"constructor"<<endl;
	i = 10 , j = 20 ;

	p = new int[2] ;

	p[0] = 10, p[1]=20 ;
	}

	demo(demo&ref)
	{
		cout<<"copy constructor"<<endl;

	}
	
	~demo()
	{
		cout<<"destructor"<<endl;

	}

};

int main()
{

	demo obj ;// error due to private 
demo obj1 ;

obj1 = obj ;
cout<<obj.p[0]<<endl;
cout<<obj1.p[0]<<endl;
obj1.p[1]++ ;

cout<<obj.p[1]<<endl;
return 0;
}
*/
//////////////////////////////////////////

/*
class demo//recursive call
{
public:

	demo()
	{
		cout<<"constructor"<<endl;
		fun();

	}

~demo()
{
cout<<"destructor"<<endl;
	fun();
}

void fun()
{
	demo obj ;

};



int main()
{
	demo obj ;//



return 0 ;
}
*/
//////////////////////////////////////////////////////

/*
class demo//recursive call
{
public:

	demo()
	{
		cout<<"constructor"<<endl;
		class hello
	{
		public:
		hello()
		{
			cout<<"hello const"<<endl;

		}
	
	~hello()
	{

		cout<<"hello destruct"<<endl;
	}

	}hobj;
	}

~demo()
{
cout<<"destructor"<<endl;
	
}

};


int main()
{
	demo obj ;//

return 0 ;
}
*/
////////////////////////////////////////////////
/*
class demo
{
public:

	demo()
	{
		cout<<"constructor"<<endl;
	}

~demo()
{
cout<<"destructor"<<endl;
	
}

};

void fun()
{
	cout<<"inside fun"<<endl;

 static demo obj2 ;
cout<<"returning from fun"<<endl;
}


int main()
{
	fun();
	demo obj ;//
printf("returning from main\n");

return 0 ;
}
*/

/////////////////////////////////////////////////////
/*
class demo
{
public:

int i, j ;

	demo()
	{
		cout<<"constructor"<<endl;
		this->i=10;
		(*this).j=20 ;
		demo(11);
	}

demo(int x)
{
i=j=x;

cout<<"inside para constructor"<<endl;

}
~demo()
{
cout<<"destructor"<<endl;
	
}

};

int main()
{
	demo() ;


return 0 ;
}
*/
////////////////////////////////////////////////////

/*
typedef class demo
{
public:

int i, j ;

	demo()
	{
		cout<<"constructor"<<endl;
		this->i=10;
		(*this).j=20 ;
		//demo(11);
	}

demo(int x)
{
i=j=x;

cout<<"inside para constructor"<<endl;

}
~demo()
{
cout<<"destructor"<<endl;
	
}

}obj,obj1;

int main()
{


obj h;
obj1 l ;
return 0 ;
}
*/
///////////////////////////////////////////////////////////


 class demo
{
public:

int i, j ;

	demo()
	{
		cout<<"constructor"<<endl;
		this->i=10;
		(*this).j=20 ;
		//demo(11);
	}

demo(int x)
{
i=j=x;

cout<<"inside para constructor"<<endl;

}
~demo()
{
cout<<"destructor"<<endl;
	
}

};

int main()
{

demo *ptr = new demo[2] ;
delete []ptr;

demo *p = (demo*)malloc(2*(sizeof(demo)));

free(p);



return 0 ;
}
