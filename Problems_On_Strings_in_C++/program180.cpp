// Accept string from user & Count no. of white spaces in string.

#include<iostream>
using namespace std;

int WhiteSpaces(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str == ' '))
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
	
	iRet = WhiteSpaces(Arr);
    cout<<"Number of white spaces are :"<<iRet<<endl; 
	
	return 0;
	
}







