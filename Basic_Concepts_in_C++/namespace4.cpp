//// Program used to demonstrate the concept of Annonyms namespace in C++.

#include<iostream>
 
 namespace                      //Annonyms namespace
{
   void fun()
  {
     std::cout<<"Inside fun\n";
   }
 }

   int main()
  {
     std::cout<<"Jay ganesh\n";

      fun();

      return 0;
   }