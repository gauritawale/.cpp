#include<iostream>
using namespace std;
class friend2  //forword declaration

class friend1

{

private:
int a,b;
   
    public:
	void  accept()
	
		{
		cout<<"\n enter the value of a";
		cin>>a;
		cout<<"\n enter value of b";
		cin>>b;
	    }
	    
	void display()
    
    {
    	cout<<"\n value of a is :"<<a;
    	cout<<"\n value of b is :"<<b;	
	}
      
	
	friend void swap (friend1 &f1,friend2 &f2);
};

 
class friend2 

{

		private:
		int a,b;
		public:
     	void accept()
	{
		cout<<"\n enter the value of a";
		cin>>a;
		cout<<"\n enter the value of b";
		cin>>b;
	}

    void display()

    {
    	cout<<"\n value of a is :"<<a;
    	cout<<"\n value of b is :"<<b;	
	}
	
	friend void swap (friend1 &f1,friend2 &f2);
};


 void swap (friend1 &f1,friend2 &f2)
 {
  int temp;
  temp=f1.a;
  f1.a=f2.a;
  f2.a=temp;
  temp=f1.b;
  f1.b=f2.b;
  f2.b=temp;
}
 

	int main() 
	
	{
	  
	   friend1 f1;
	   friend2 f2;
	   cout<<"\n Enter first number";
	   f1.accept();
	   cout<<"\n Enter second number";
	   f2.accept();
	   f1.display();
	   f2.display();
	   cout<<"\n After Swapping :";
	   swap(f1,f2);
	   cout<<"\n  first number";
	   f1.display();
	   cout<<"\n  second number";
	   f2.display();
	   return 0;
	};
 
			
		


