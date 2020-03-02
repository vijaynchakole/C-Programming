#include<iostream>

using namespace std ;

/*
class demo
{
 public:
	demo()
	{
		cout<<"inside demo constructor"<<endl;

	}
	~demo()
	{
		cout<<"inside demo destructor"<<endl;

	}


};

class base
{

public:
demo dobj ;

	base()
	{
		
		cout<<"inside base constructor"<<endl;
	}

	~base()
	{

		cout<<"inside base destructor"<<endl;

	}

};

int main()
{

base bobj ;// demo con, base con, base des, demo des 


return 0;

}
*/
////////////////////////////////////////////////////////////////////

/*
class hello
{

	public :
	hello()
	{
		cout<<"hello constructor"<<endl;

	}

	~hello()
	{

		cout<<"hello destructor"<<endl;

	}

};


class demo
{
 public:
	hello hobj ;
	demo()
	{
		cout<<"demo constructor"<<endl;

	}
	~demo()
	{
		cout<<"demo destructor"<<endl;

	}


};

class base
{

public:
demo dobj ;

	base()
	{
		
		cout<<"base constructor"<<endl;
	}

	~base()
	{

		cout<<"base destructor"<<endl;

	}

};

int main()
{

base bobj ;// demo con, base con, base des, demo des 


return 0;

}
*/

//////////////////////////////////////////////////////////////////////////
/*
class hello
{

	public :
	hello()
	{
		cout<<"hello constructor"<<endl;

	}

	~hello()
	{

		cout<<"hello destructor"<<endl;

	}

};


class demo
{
 public:
	demo()
	{
		cout<<"demo constructor"<<endl;

	}
	~demo()
	{
		cout<<"demo destructor"<<endl;

	}


};

class base
{

public:
demo dobj ;
hello hobj;

	base()
	{
		
		cout<<"base constructor"<<endl;
	}

	~base()
	{

		cout<<"base destructor"<<endl;

	}

};

int main()
{

base bobj ;// 


return 0;

}
*/

////////////////////////////////////////////////
/*
class hello
{

	public :
	hello()
	{
		cout<<"hello constructor"<<endl;

	}

	~hello()
	{

		cout<<"hello destructor"<<endl;

	}

};


class demo : public hello
{
 public:
	demo()
	{
		cout<<"demo constructor"<<endl;

	}
	~demo()
	{
		cout<<"demo destructor"<<endl;

	}


};

class base
{

public:
demo dobj ;


	base()
	{
		
		cout<<"base constructor"<<endl;
	}

	~base()
	{

		cout<<"base destructor"<<endl;

	}

};

int main()
{

base bobj ;// 


return 0;

}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
class demo
{
 public:
	demo(int x)
	{
		cout<<"demo constructor"<<endl;

	}
	~demo()
	{
		cout<<"demo destructor"<<endl;

	}


};

class base 
{

public:

	demo dobj(10);



	base(int x)
	{
		
		cout<<"base constructor"<<endl;
	}

	~base()
	{

		cout<<"base destructor"<<endl;

	}

};

int main()
{

base bobj(11) ;// 


return 0;

}
*/

///////////////////////////////////////////////////////////////
/*
class hello
{r

	public :
	hello(int i)
	{
		cout<<"hello para constructor"<<endl;

	}

	~hello()
	{

		cout<<"hello destructor"<<endl;

	}

};


class demo : public hello
{
 public:
	demo(int c) :hello(int x)
	{
		cout<<"demo para constructor"<<endl;

	}
	~demo()
	{
		cout<<"demo destructor"<<endl;

	}


};

class base
{

public:
demo dobj ;

	base(int i)
	{
		
		cout<<"base constructor"<<endl;
	}

	~base()
	{

		cout<<"base destructor"<<endl;

	}

};

int main()
{

base bobj(11) ;// 


return 0;

}
*/
/////////////////////////////////////////////////////////////
/*
#include<stdio.h>

class hello
{
	public :
	hello(int x)
	{
		cout<<"hello para con"<<endl;

	}
	~hello()
	{

		cout<<"hello des"<<endl;
	}

};



class demo:public hello
{

public :

demo(int x):hello(x)
{

cout<<"demo con"<<endl;
}
~demo()
{

cout<<"demo des"<<endl;
}

};

class base
{
	public :

	demo dobj ;

	base(int x):dobj(x)
{
cout<<"base con"<<endl;

}
 ~base()
	{
		cout<<"base des"<<endl;

	}

};

int main()
{

base bobj(11);

printf("inside main\n");

return 0 ;

}
*/
//////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
class hello
{
	public :

	hello()
	{
		cout<<"hello defaualt con"<<endl;
	}
	hello(int x)
	{
		cout<<"hello para con"<<x<<endl;

	}
	~hello()
	{

		cout<<"hello des"<<endl;
	}

};



class demo
{

public :

demo(int x)
{

cout<<"demo para con"<<x<<endl;
}
~demo()
{

cout<<"demo des"<<endl;
}

};

class base:public demo,public hello
{
	public :
	hello hobj ;

	base(int x):hello(x),demo(x),hobj()
{
cout<<"base con"<<x<<endl;

}
 ~base()
	{
		cout<<"base des"<<endl;

	}

};

int main()
{

base bobj(11);

printf("inside main\n");

return 0 ;

}
*/

////////////////////////////////////////////////////////
/*
class base
{
	public :
	int i, j ;

	base()
{

i=10;
j=20;
//cout<<"base con"<<endl;


}
 ~base()
	{
		//cout<<"base des"<<endl;

	}

void fun()
{

cout<<"base gun"<<i<<" "<<j<<endl;
}

};


class derived:public base
{
	public :

	int i, j ;
	

	derived(int x,int y)
{

i=x ;
j=y ;
//cout<<"derived con"<<x<<endl;

}
 ~derived()
	{
		//cout<<"derived des"<<endl;

	}

void fun()
{

cout<<"derived gun"<<i<<" "<<j<<endl;
cout<<"derived gun"<<base::i<<" "<<base::j<<endl;
}

};

int main()
{


base bobj;
derived dobj(11,21);

bobj.fun();//10 20 
dobj.fun();//10 20


return 0 ;

}
*/
/////////////////////////////////////////////////////////////
/*
class base
{
	public :
	int i, j ;

void fun()
{

cout<<"base gun"<<endl;
}

};


class derived:public base
{
	public :

	int i, j ;

void fun()
{

cout<<"derived fun"<<endl;
}

};

int main()
{


base bobj;
derived dobj;

bobj.fun();//base fun
dobj.fun();//derived fun
dobj.base::fun();//base fun


return 0 ;

}
*/
//////////////////////////////////////////////////////////////////////////////

/*
class base
{
	public :
	int i, j ;

void fun(int i)
{

cout<<"base gun"<<endl;
}

};


class derived:public base
{
	public :

	int i, j ;

void fun(int i)
{

cout<<"derived fun"<<endl;
}

};

int main()
{


base bobj;
derived dobj;

bobj.fun(10);//base fun
dobj.fun(10);//derived fun
dobj.base::fun(10);//base fun


return 0 ;

}
*/
/////////////////////////////////////////////////////

/*
class base
{

};


class derived:public base
{
	public :

};

int main()
{


base bobj;
derived dobj;

cout<<sizeof(bobj)<<endl;//1 byte
cout<<sizeof(dobj)<<endl; //1 byte


return 0 ;

}
*/
////////////////////////////////////////////////////////////////////
/*
class base
{
	public:
	int i ;
	protected :
	int j;
	private :
	int k ;
public :
base()
{
i=j=k=11 ;

}
void fun()
{
cout<<i<<endl;
cout<<j<<endl;
cout<<k<<endl;

}

};


class derived:public base
{
	public :
	void fun()
{

cout<<i<<endl;
cout<<j<<endl;
//cout<<k<<endl;
}

};

int main()
{


base bobj;
derived dobj;


bobj.fun();//11 11 11 
dobj.fun();//11 11 error


cout<<bobj.i<<endl;
cout<<bobj.j<<endl;//error due to protected
cout<<bobj.k<<endl;//error due to private
return 0 ;

}
*/
/////////////////////////////////////////////////////////
/*
class base
{
	public:
	int i ;
	protected :
	int j;
	private :
	int k ;
public :
base()
{
i=j=k=11 ;

}
void fun()
{
cout<<i<<endl;
cout<<j<<endl;
cout<<k<<endl;

}

};


class derived:public base
{
	public :
	void fun()
{
cout<<"derived"<<endl;
cout<<i<<endl;
cout<<j<<endl;
cout<<k<<endl;
}

};

int main()
{


base bobj;
derived dobj;


bobj.fun();//11 11 11 
dobj.fun();//11 11 error

cout<<"inside main"<<endl;
cout<<bobj.i<<endl;
//cout<<bobj.j<<endl;//error due to protected
//cout<<bobj.k<<endl;//error due to private
return 0 ;

}
*/
//////////////////////////////////////////////////////////////////////////
/*
class base
{
	
public :
void fun()
{
cout<<"base fun"<<endl;

}
void gun()
{
cout<<"base gun"<<endl;

}

};


class derived:public base
{

private:
base::fun;


};

int main()
{


base bobj;

bobj.fun();

derived dobj;
dobj.fun();


return 0 ;

}
*/
///////////////////////////////////////
/*
class base
{
	
public :
void fun()
{
cout<<"base fun"<<endl;

}
void gun()
{
cout<<"base gun"<<endl;

}

};


class derived:private base
{

public:
base::fun;


};

int main()
{

base bobj ;
bobj.fun();

derived dobj;
dobj.fun();


return 0 ;

}
*/
////////////////////////////////////////////////////////////
/*
class base
{
	public:
	int i ;
	base()
	{
		cout<<"base constructor"<<&i<<endl;

	}

};


class derived:private base
{

public:

int i ;
derived()
{
	cout<<"derived constructor"<<&i<<endl;


}


};

int main()
{



derived dobj;

cout<<&dobj<<endl;



return 0 ;

}
*/
///////////////////////////////////////////////////////////////////
/*
class base
{
	public:
	int i ;
	base()
	{
		i = 10 ;
		
		cout<<"base constructor"<<&i<<endl;

	}

};


class derived:private base
{

public:

int i ;
derived()
{ 
	i=51;
	cout<<"derived constructor"<<&i<<endl;
	cout<<i<<endl;
	cout<<base::i<<endl;
	cout<<derived::i<<endl;


}


};

int main()
{



derived dobj;

cout<<&dobj<<endl;



return 0 ;

}
*/
/////////////////////////////////////////////////////////////////////
/*
class base
{
	public:

	void fun()
	{
		cout<<"base fun"<<endl;
		
	}
};


class derived
{

public:
	void fun()
	{
		cout<<"derived fun"<<endl;
	
	}

};

class demo:public derived, public base
{

public:
	void fun()
	{
		cout<<"demo"<<endl;
	
	}


};
int main()
{



demo dobj;

dobj.base::fun();
dobj.derived::fun();




return 0 ;

}
*/
////////////////////////////////////////////////////////////////////////
/*
class base
{
public:
int i, j ;

base()
{

cout<<"base con"<<endl;
i = 10 ;
 j = 20 ;

}


};


class base1
{
public:
int i, j ;

base1()
{

cout<<"base1 con"<<endl;
i = 10 ;
 j = 20 ;

}


};
class base2
{
public:
int i, j ;

base2()
{

cout<<"base2 con"<<endl;
i = 10 ;
 j = 20 ;

}


};
class derived : public base,  public base1,virtual public base2
{
public:
int k ;

derived()
{
cout<<"derived con"<<endl;
	k = 30 ;
}

};

int main()
{
	derived dobj ;

	
return 0 ;
}
*/
////////////////////////////////////////////////////////////////////////
/*
class base
{
public:
int i, j ;

base()
{

cout<<"base con"<<endl;


}
~base()
{

cout<<"base destructor"<<endl;
}


};


class base1 : virtual public base
{
public:
int i, j ;

base1()
{

cout<<"base1 con"<<endl;

}
~base1()
{

cout<<"base1 destructor"<<endl;
}


};
class base2
{
public:
int i, j ;

base2()
{

cout<<"base2 con"<<endl;


}

~base2()
{

cout<<"base2 destructor"<<endl;
}


};


class derived : public base1,virtual public base2
{
public:
int k ;

derived()
{
cout<<"derived con"<<endl;

}

~derived()
{

cout<<"derived destructor"<<endl;
}

};

int main()
{
	derived dobj ;// base base2 base1 derived

	
return 0 ;
}
*/
///////////////////////////////////////////////////////
/*
class base
{
public:
int i, j ;

base()
{

cout<<"base con"<<endl;


}
~base()
{

cout<<"base destructor"<<endl;
}


};


class base1 : virtual public base
{
public:
int i, j ;

base1()
{

cout<<"base1 con"<<endl;

}
~base1()
{

cout<<"base1 destructor"<<endl;
}


};
class base2
{
public:
int i, j ;

base2()
{

cout<<"base2 con"<<endl;


}

~base2()
{

cout<<"base2 destructor"<<endl;
}


};


class derived : virtual public base2,public base1
{
public:
int k ;

derived()
{
cout<<"derived con"<<endl;

}

~derived()
{

cout<<"derived destructor"<<endl;
}

};


int main()
{
	derived dobj ;//

	
return 0 ;
}
*/
///////////////////////////////////////////////////

class base
{
public:
int i, j ;

base()
{

cout<<"base con"<<endl;


}
~base()
{

cout<<"base destructor"<<endl;
}


};


class base1 : virtual public base
{
public:
int i, j ;

base1()
{

cout<<"base1 con"<<endl;

}
~base1()
{

cout<<"base1 destructor"<<endl;
}


};
class base2:virtual public base1
{
public:
int i, j ;

base2()
{

cout<<"base2 con"<<endl;


}

~base2()
{

cout<<"base2 destructor"<<endl;
}


};


class derived :virtual public base2,virtual public base1
{
public:
int k ;

derived()
{
cout<<"derived con"<<endl;

}

~derived()
{

cout<<"derived destructor"<<endl;
}


};

int main()
{
	derived dobj ;// base base2 base1 derived

	
return 0 ;
}
