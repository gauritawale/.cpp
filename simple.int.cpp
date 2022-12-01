#include<iostream>
using namespace std;
  class base
 
 
{
 	
 	int a;
 	public:
 	int b;
    void display()
    {
	
 	cout<<"This is base class";
    }  
 	
};
 
 
 class derived:public base
 
 {
 	int c;
 	public:
    void display() 
    {
    cout<<"\n This is derived class";
    }
};




int main()

{
	derived d;
	d.display();
	return 0;
}

