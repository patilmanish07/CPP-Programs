//// Program used to demonstrate the concept of typedef in every C & C++ languages.

using namespace std;
#include<iostream>

 #define MAX 10

 int main()
 {
   typedef int NUMBER;
   
   NUMBER no = 10;
   LETTER CH = 'M';
   
   cout<<sizeof(no)<<"\n";
   cout<<no<<"\n";
   
   
   cout<<sizeof(ch)<<"\n"
   cout<<ch<<"\n";
   
   typedef const int * CPTR;
   //const int *p = NULL;
    CPTR = &no;
    p = &no;
	
	cout<<*p<<"\n";
   
   return 0;
  }