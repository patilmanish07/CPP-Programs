// Program used to demonstrate the concept of Singlelevel inheritence in C++.

#include<iostream>
using namespace std;

class Base
{

  public :
        int x,y;
		
		Base()
		{
		   cout<<"Inside Base constructor\n";
		  }

        ~Base()
        {
           cout<<"Inside Base destructor\n";
          }

         void fun()
        {
		   cout<<"Inside base fun\n";
		  }
       };

 class Derived : public Base
{
    public :
         int i,j;
		 
        Derived()
      {
         cout<<"Inside derived constructor\n";
        }
		
		~Derived()
	  {
		  cout<<"Inside derived destructor\n";
		 }
		   
	    void gun()
      {		 
          cout<<"Inside derived gun\n";
         }
      };

     
        int main()
     {
         Derived dobj;

        cout<<sizeof(Base)<<"\n";                    //8
        cout<<sizeof(Derived)<<"\n";		         //16

		dobj.fun();
		dobj.gun();
		
		return 0;
		
	  }