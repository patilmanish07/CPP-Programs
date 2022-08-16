// Accept string from user & Copy data to other string.

#include<iostream>
using namespace std;

void strcpyX(char *src, char *dest)      //Src=Source & dest=Destination.
{
   while(*src != '\0')
   {
	   *dest = *src;
	   src++;
	   dest++;
   }
   *dest ='\0';
}	

int main()
{
	char Arr[20];       //Full book
	char Brr[20];       //empty book
	
	cout<<"Enter string"<<endl;       
	cin.getline(Arr,20);              
	
	strcpyX(Arr,Brr);        
	
    cout<<"String after copy :"<<Brr<<endl; 
	
	return 0;
	
}















