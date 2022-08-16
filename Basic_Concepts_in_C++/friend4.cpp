//// Program used to demonstrate the concept of Friend in C++.

#include<iostream>
using namespace std;

   class Hello
  {
     public:
	       int  fun();
		   int gun();
	};

	class Demo
	{
	    public:
	           int i;
	    protected:
               int j;
	    private:
               int k;
	
        public:
             Demo()
			 {
			   i = 10;
			   j = 20;
			   k = 30;
			  }

		// friend void Hello:: fun();
        // friend void Hello:: gun();
            friend class Hello;
      };

     int Hello::fun()
    {
	    Demo obj1;
		cout<<obj1.i<<"\n";
		cout<<obj1.j<<"\n";
		cout<<obj1.k<<"\n";
	  }

     int Hello::gun()
    {
		Demo obj1;
		cout<<obj1.i<<"\n";
		cout<<obj1.j<<"\n";
		cout<<obj1.k<<"\n";
	  }

    int main()
    {
        Hello hobj;
    
        hobj.fun();
        hobj.gun();
        
		return 0;
	  }