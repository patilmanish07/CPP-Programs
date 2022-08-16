////// Program used to demonstrate the concept of inheritence in C++.
#include<iostream>
using namespace std;

 class Base
{
    public :
         int i,j;
		 
	Base()
   {
     cout<<"Base constructor\n";
	}
   
    ~Base()
   { 
     cout<<"Base destructor\n";
	}
  };
  
  class Derived : public Base 
  {
    public :
	    int a,b,c;
		
	   Derived()
	  {
	    cout<<"derived constructor\n";
		}
		
		~Derived()
	   {
         cout<<"derived destructor\n";
         }
      };


    int main()
   {
     Derived dobj;
	 
     return 0;
   }