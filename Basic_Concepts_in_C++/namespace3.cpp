//// Program used to demonstrate the concept of NameSpace in C++.
#include<iostream>

    namespace Marvellous
   {
      void fun()
     {
       std::cout<<"Inside fun\n";
     }
  }
  
    namespace Infosystems
	{
	  void fun()
	  {
	    std::cout<<"Inside fun\n";  
	  }
  }

     int main()
    {
      std::cout<<"Jay Ganesh\n";
    
     using namespace Marvellous;
     using namespace Infosystems;	
	
     //fun();            //Ambiguity error
	 
	 Infosystems::fun();

	 return 0;
    }