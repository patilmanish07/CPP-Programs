// //// Program used to demonstrate the concept of Purevirtual function in C++.
#include<iostream>
using namespace std;

   class Base
  {
	public :
	      int x,y;
		
		//1000
	   void fun()               //concrete non virtual	
	  { 
	    cout<<"Base fun\n";
	   }
	   
	   //2000
	   virtual void gun()           //concrete virtual
	  { 
	    cout<<"Base gun\n";
		}
		
		//3000
	   virtual void sun()            //concrete virtual
	  {	
	   cout<<"Base sun\n";
	   }
	   
	   //.......
	   virtual void run() = 0;         //Abstract function
	};

     class Derived : public Base
    {
       public :
              int i,j;

        //4000
        void fun()                     //Redefination(concrete)function
      {
	    cout<<"Derived fun\n";
	   }

        //5000
       virtual void gun()             //Overloading
      {	
		cout<<"Derived gun\n";
		}
		
		//6000
		void run()                      //Concrete function
	   {
          cout<<"Derived run\n";
        }
     };
	 
	 int main()
    {	
		//Base bobj;                  //Not Allowed
		Derived dobj;                  //Allowed
		
		Base *bp = NULL;
		bp = &dobj;                     //Upcasting
		
		cout<<sizeof(Base)<<"\n";         //12 or 16
		cout<<sizeof(Derived)<<"\n";       //20 or 24
		
		bp->fun();                           //Base fun
		bp->gun();                           //Derived gun
		bp->sun();                           //Base sun  
		bp->run();                          //Derived run
 
        return 0;
     }