//// Program used to demonstrate the concept of Inline Function in C++.

#include<iostream>
using namespace std;

 class Demo
{
  public:
      inline int Add(int no1,int no2)
	   {
	       int ans = 0;
		    ans = no1 + no2;
			return ans;
		}
    };
          
    int main() 
  {
     Demo obj;
	 
	 int ret = 0;
	 
	 ret = obj.Add(10,11);
	 
	 cout<<ret<<"\n";                 //21
	 
	 return 0;
	} 