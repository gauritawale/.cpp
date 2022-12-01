#include<iostream>
using namespace std;

class base 

{
	
int a;
public:
	int b;
	void display1()
	
	{
	cout<<"\n This is base class";
	}
	
	
};

class derived:public base

{
	
	 int c;
	 public:
	 	 void display()

      
	  {
	  cout<<"This is derived class";
	  }
		  
	
};
 int main()
 
 {
 	derived d;
 	d.display1();
 	d.display();

 	return 0;
 	
 }

	
	


