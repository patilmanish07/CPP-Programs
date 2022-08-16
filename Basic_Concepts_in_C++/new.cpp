// Program used to demonstrate the concept of dynamic memory allocation in C++.
#include<iostream>
using namespace std;

int main()
{
  int Arr[5];
  
  int *p = NULL;
  
  // p =(int*)malloc(sizeof(int)*10);........in C language
  
  p = new int[5];
  
  if(p == NULL)
  {
    cout<<"Unable to allocate the number\n";
  }
  else 
  {
     cout<<"memory gets allocated successfully at address :"<<p<<"\n"; 
  }	 
  
  // free(p);........in C language
  
  delete []p;
  
  return 0;
 }