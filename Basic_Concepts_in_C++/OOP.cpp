// Program used to demonstrate the Object Oriented Programm.
#include<iostream>
using namespace std;

 class Arithematic
 {
   public:
   // characteristics
   int iNo1;
   int iNo2;
   
   //Behaviours
   
   Arithematic()                            //Default contructor
    {
      cout<<"inside the contructor\n";
	  iNo1 = 0;
	  iNo2 = 0;
    }
	
	Arithematic(int A,int B)               //Parameterised contructor
	{
	  cout<<"Inside the parameterised contructor\n";
	  iNo1 = A;
	  iNo2 = B;
	}
	
	~Arithematic()                             //Destructor
	{
	   cout<<"Inside Destructor\n";
	}

     int Addition()
    {
       int iAns = 0;
	   iAns = iNo1 + iNo2;
	   return iAns;
	}
	
	int Subtraction()
    {
       int iAns = 0;
	   iAns = iNo1 - iNo2;
	   return iAns;
	}
  };
  
  int main()
  {
      int iValue1 = 0, iValue2 = 0, iRet = 0;
   
	   cout<<"Enter first number\n";
	   cin>>iValue1;                            //11
	   
	   cout<<"Enter second number\n";
	    cin>>iValue2;                            //10
	   
	   Arithematic obj1;                      // Default contructor
	   Arithematic obj2(iValue1,iValue2);     // parameterised contructor
	   
	   iRet = obj2.Addition();
	   cout<<"Addition is : "<<iRet<<"\n";
	   
	   iRet = obj2.Subtraction();
	   cout<<"Subtraction is : "<<iRet<<"\n";
	   
	   
	   return 0;
   }