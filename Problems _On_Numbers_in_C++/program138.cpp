// Accept no. & return the factorial in C++ lang.
// Input : 4
// Output: 4*3*2*1    24
//         1*2*3*4    24
#include<iostream>
using namespace std;

class Number
{
	private:
	      int iNo;      // Characteristics
	
    public:
     // Behaviours
    void Accept()        // Setter Method
    {
	    cout<<"Enter the value :"<<endl;
	    cin>>this->iNo;
    }
   
    void Display()       // Getter Method
   {
	   cout<<"value is :"<<this->iNo<<endl;
   }   
  
     int Factorial()
    {
       int iFact = 1;
       int iCnt = 0;
   
       for(iCnt = 1;iCnt<= iNo; iCnt++)
      {
	      iFact = iFact * iCnt;
      } 
      return iFact;
     }	 
};  

int main()
{
	Number nobj;
	int iRet = 0;
	
	//cout<<nobj.iNo
	
	nobj.Accept();
	nobj.Display();
	
	iRet = nobj.Factorial();
	
	cout<<"Factorial is :"<<iRet<<endl;
	
	return 0;
}