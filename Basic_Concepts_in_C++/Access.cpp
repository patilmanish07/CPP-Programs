// Program used to demonstrate the concept of Access Specifier's concept in C++.

#include<iostream>
using namespace std;

//public private
class Demo
{
     int i;
   public :
     int x;
   
   private :
     int y;
   
   public :
     Demo()
    {
      x = 10;
	  y = 20;
	  i = 30;
	}

    void fun()
   {
     cout<<"Inside public fun\n";
	 cout<<y;
    }

     private :
        void gun()
      {
       cout<<"Inside private gun\n";
	   cout<<y;
      }
    };	  
	
	int main()
	{
	   Demo obj;
	   
	   cout<<obj.x<<"\n";
   //  cout<<obj.y<<"\n";
   //	cout<<obj.i<<"\n";
	   
	   obj.fun();
   //  obj.gun();
	   
	   return 0;
	  }
      