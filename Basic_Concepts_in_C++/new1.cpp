// Program used to demonstrate the concept of dynamic memory allocation in C++.

#include<iostream>
using namespace std;

  class Demo
 {
    public :
	int x;
	int y;
	
	Demo()
   {
      cout<<"Inside default constructor\n";
    }

    ~Demo()
   {
      cout<<"Inside destructor\n";
	}

   	void fun()
   {
      cout<<"Inside fun\n";
    }
 };	

    int main()
   {
       Demo obj;                             //Static object creation
	   
	   Demo *ptr = NULL;
	   
	   ptr = new Demo;              	   //Dynamic object creation
	   
	   obj.fun();                           // Direct accesing operator
	   
	   ptr->fun();                         //indirect accessing operator
	   
	   delete ptr;
	   
	                       // LOGIC 
	  return 0;
   }