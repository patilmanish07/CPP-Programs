// Accept n number & Display  Max no.in a specific way in C++.
 
#include<iostream>
using namespace std;

int Maximum(int Arr[], int size)
{
	int Max = Arr[0];
	int i = 0;
	
	for(i = 0; i < size; i++)
	{
		if(Arr[i] > Max)
		{
			Max = Arr[i];
		}
	}
	return Max;
}

int main()
{
	int Brr[] = {10,20,30,40,50};
	int iRet = Maximum(Brr,5);
	cout<<"Maximum number is : "<<iRet<<endl;  
    
	return 0;
}

