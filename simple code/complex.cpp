#include <iostream>
using namespace std;

class complex

{
    private:
    int real,imaginary;
			
    public:
				
	complex();
	complex operator+(complex c2);
	complex operator*(complex c2);
			   
	friend ostream & operator<<(ostream &out,complex &c);
	friend istream & operator>>(istream &in,complex &c);	  	
};

complex::complex()

{
	real=0;
	imaginary=0;
	
}

complex complex::operator+(complex c2)
 {
 	complex temp;
 	temp.real=real+c2.real;
 	temp.imaginary=imaginary+c2.imaginary;
 	return temp;
 }
 
 complex complex::operator*(complex c2)
 {
 	complex temp;
 	temp.real=real*c2.real;
 	temp.imaginary=imaginary*c2.imaginary;
 	return temp;
 }
 
 ostream & operator<<(ostream &out,complex &c)
 
 {
 	out<<c.real;
 	out<<"+i"<<c.imaginary;
 	return out;
 }
 
 
 
  istream & operator>>(istream &in,complex &c)
 
 {
 	cout<<"\n Enter real value";
 	in>>c.real;
 	cout<<"\n Enter imaginary part";
 	in>>c.imaginary;
 	return in;
 }
 
 
 
 int main()
 
 {
 
    int choice;
 	complex c1,c2,c3;
 	
 	do{
 	   cout<<"\n 1.Accept two number \n 2.Display\n 3.Addition\n 4.Multiplication\n 5.Exit";
	   cout	<<"\n Enter your choice:";
	   cin>>choice;
	   switch(choice)
	    {
	
	   case 1:
	   	cout<<"\n Enter first number";
		cin>>c1; //operator
		cout<<"\n Enter second number";
		cin>>c2;
		break;
		
		case 2:
	     cout<<"\n Your first number";
	     cout<<c1; 
		 cout<<"\n Your second number";
		 cout<<c2;
		 break;
			   
		case 3:
	    cout<<"\n Addition of complex number:";
	    c3=c1+c2;
	    cout<<"\n Addition is:"<<c3;
		
		break;
		
		 case 4:
	    cout<<"\n Multiplication of complex number:";
	    c3=c1*c2;
	    cout<<"\n Multiplication is:";
		cout<<c3;
		break;	    
        
        
         case 5:
         	cout<<"\n Entervalid choice";
	   
        }
    
	} while(choice!=5);   
	 
	   return 0;
 }
	   
		   
		     
		   
		   
		    
 
 
 
 

