// Accept string from user & Count no. of Small character in string.
// With ASCII Value.

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 97)&&(*str <= 122))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}	

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string"<<endl;       
	cin.getline(Arr,20);              
	
	iRet = CountCapital(Arr);
    cout<<"Number of capital characters are :"<<iRet<<endl; 
	
	return 0;
	
}







