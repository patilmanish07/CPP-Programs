// Accept string from user & Count no. of Vowels in string.
// With capital letters

#include<iostream>
using namespace std;

int CountVowel(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str == 'A') ||(*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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
	
	iRet = CountVowel(Arr);
    cout<<"Number of vowels are :"<<iRet<<endl; 
	
	return 0;
	
}







