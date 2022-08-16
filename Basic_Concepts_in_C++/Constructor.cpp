// Program used to Demonstrate the constructor & its types.
#include<iostream>
using namespace std;

class Demo
{
    public :
	    int x;             //charactristics
		int y;             //characteristics
		
		Demo()
		{
		    cout<<"Inside Default constructor\n";
			 x = 0;
			 y = 0;
		}
   
         Demo(int i, int j)        //parameterised contructor
        {
		     cout<<"Inside parameterised constructor\n";
			 x = i;
			 y = j;
		}

         Demo(Demo  &ref)           // copy constructor
        {
              cout<<"Inside copy constructor\n";
        }

        ~Demo()                      // Destructor
        {
               cout<<"Inside Destructor\n";                   		
        }
		
	};	


        int main()
		{
		    Demo obj1(11,21);
			Demo obj2(51,101);
			
			cout<<sizeof(obj1)<<"\n";
			cout<<sizeof(obj2)<<"\n";
			
			cout<<"Value of x in obj 1 : "<<obj1.x<<"\n";  			//11
			cout<<"Value of y in obj 2 : "<<obj2.x<<"\n";           //51
			
			obj1.x++;
			
			cout<<"Value of x in obj 1 : "<<obj1.x<<"\n";            //12
			cout<<"Value of y in obj 2 : "<<obj2.x<<"\n";  			 //51
			
			
			return 0;
			
		}