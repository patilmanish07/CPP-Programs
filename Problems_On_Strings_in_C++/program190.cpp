// Accept two strings from user & compare both strings they are case sensitive.

#include<iostream>
using namespace std;

bool strcmpX(char *src, char *dest)      //Src=Source & dest=Destination.
{
    while((*src != '\0') && (*dest != '\0'))
   { 
      if(*src != *dest)
     {
	     break;
     }   
      src++;
      dest++;	
   }
	
	if(*src == '\0' && *dest == '\0')
	{
		return true;
	}
	else
	{
		return false;
	}
}	

int main()
{
	char Arr[20];       //Full book
	char Brr[20];       //empty book
	bool bRet;
	
	cout<<"Enter first string"<<endl;       
	cin.getline(Arr,20); 

	cout<<"Enter second string"<<endl;       
	cin.getline(Brr,20);	
	
	bRet = strcmpX(Arr,Brr);
	
    if(bRet == true)
	{
		cout<<"String are equal"<<endl;
	}
    else
    {
		cout<<"Strings are not equal"<<endl;
	}		
	
	return 0;
}







