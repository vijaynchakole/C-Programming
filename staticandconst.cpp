#include<iostream>
using namespace std;
/*
class hello
{
	public :

	int i ;
	const int j ;

hello():i(11),j(i)
{
	i = 51 ;
}


}; 

int main()
{
	hello obj ;
	cout<<obj.i<<endl;
	cout<<obj.j<<endl;

	const int no ;
	cout<<no<<endl;

return 0;
}
*/
////////////////////////////////////////////////////////
/*
class hello
{
	public :

	int i ;
	const int j ;
	const static int k = 21 ;


hello():i(11),j(i)
{
	i = 51 ;
//	k = 101 ;
}


}; 

//int hello::k=70;

int main()
{
	hello obj ;
	cout<<obj.i<<endl;
	cout<<obj.j<<endl;
	cout<<obj.k<<endl;

	cout<<hello::k<<endl;



return 0;
}
*/
/////////////////////////////////////////////////////

/*
class hello
{
	public :

	int i ;
	static int k ;



hello():i(0)
{
	i = 10 ;

}

static int fun()
{
	cout<<"inside fun"<<++k<<endl;//21
	k = 31 ;

}

}; 

int hello :: k = 20 ;

int main()
{
	cout<<hello::k<<endl;

	hello obj ;
	obj.fun();
	// hello::fun();

	cout<<hello::k<<endl;
	



return 0;
}
*/

///////////////////////////////////////
/*
class base
{
public:
int i,j;
static int k,l;



};

class derived:public base
{
public:
int a,b;
static int x,y ;


};

int main()
{

	cout<<"base size =  "<<sizeof(base)<<endl;
	cout<<"derived size =  "<<sizeof(derived)<<endl;


return 0 ;}
*/

/////////////////////////////////////////////////////////////////////
/*
class base
{
public:
static void fun()
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
public:

static void fun()
{
cout<<"derived fun"<<endl;

}

void gun()
{
cout<<"derived gun"<<endl;

}

};

int main()
{
base bobj ;
derived dobj ;

bobj.fun();//base fun
bobj.gun();//base gun

dobj.fun();//derived fun
dobj.gun();//derived gun

base::fun();//base fun
derived::fun();//derived fun

derived::base::fun();//base fun



return 0 ;
}
*/

/////////////////////////////////////////////////////////////
/*
class base
{
public:

static int i ;
int j ;


static base()
{
	i = 11 ;
j = 21 ;

}

base(base&ref)
{

	i = base::i ;


	this->j = j ;

}

};

int base::i = 21;

int main()
{

base bobj ;
bobj.j = 51 ;
bobj.i++;

cout<<bobj.i<<" "<<bobj.j<<endl;//12 51

base bobj2(bobj);

cout<<bobj2.i<<" "<<bobj2.j<<endl;//12 garbage


return 0 ;
}
*/
//////////////////////////////////////////////////////////
/*
class base
{
public:

 int x ;
static int cnt ;


 base()
{
	x = ++cnt ;

}

void showdata()
{
	cout<<x<<endl;
	
}
static void showcnt(void)
{
	cout<<cnt<<endl;

} 
};
int base::cnt ;

int main()
{

base::showcnt();//0
base b1 ;

base::showcnt();//1
b1.showdata();//1

base b2 ;
base::showcnt();//2
b2.showdata();//2

base b3;

base::showcnt();//3
b3.showdata();//3


return 0 ;
}
*/

////////////////////////////////////////////////////////

/*
class base
{
public:
static int i ;

};

int base :: i ;

int i = 51 ;

int main()
{
	base obj ;
	cout<<obj.i<<endl;
	cout<<i<<endl;
return 0 ;
}
*/
//////////////////////////////////////////////////////////////
/*
static int i = 0 ;

class outer
{
public:

static int i ;

static void fun()
{
	++i;

	++::i;
	//++inner::i;
}

class inner
{
	public:

	static int i ;

	static void fun()
	{

		++i;

	++::i;
	//++outer::i;
		

	}

}obj;

}obj;

int outer::i=10;
int outer::inner::i=20;


int main()
{
	outer::fun();//
	outer::fun();//

outer::inner::fun();
outer::inner::fun();

	cout<<outer::i<<endl;//
cout<<outer::inner::i<<endl;//
cout<<i<<endl;
cout<<obj.i<<endl;
cout<<obj.obj.i<<endl;



return 0 ;
}
*/

///////////////////////////////////

class base
{
	public:

const static int k = 10 ;


};

int main()
{

base obj ;

cout<<obj.k<<endl;
obj.k++;//error
cout<<obj.k<<endl;
cout<<sizeof(obj)<<endl;



return 0 ;

}
