// Problems on strings  in C++

#include<iostream>
using namespace std;

void Display(char str[])         //just used [] Array here
{
	while(*str != '\0')
	{
	   cout<<*str<<endl; 		
	   str++;
	}  
}

int main()
{
	char Arr[] = "Hello";
	
	Display(Arr);    //Display(100);

    	
	return 0;
}


