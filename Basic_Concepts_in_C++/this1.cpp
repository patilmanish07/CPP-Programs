// Program used to demonstrate the concept of this pointer concept in C++.
#include<iostream>
using namespace std;

class Demo
{
  public :
         int x;
		 int y;
		 
	Demo(int a = 10, int b = 20)
   {
     x = a;                              //characteristics
     y = b;                              //characteristics
    }	
  
  //void fun(Demo *this ,int no)
  
   void fun(int no)                     //1000
  {
    cout<<"Inside fun\n";
	
	}
 }; 
  
  int main()
  {
	Demo obj1;
	
	Demo obj2(11);
	
	Demo obj3(11,21);
	
	return 0;
   }