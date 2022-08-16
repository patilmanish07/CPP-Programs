// Accept string from user & toggel the case of that string.
// HElLo->heLlO

#include<iostream>
using namespace std;

void strtoggelX(char str[])
{
	
	while(*str != '\0')
	{
		if((*str >= 'A')&&(*str <= 'Z'))
		{
			*str = *str + 32;
		}
		else if((*str >= 'a')&&(*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}	

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;       
	cin.getline(Arr,20);              
	
	strtoggelX(Arr);        
	
    cout<<"String after toggel :"<<Arr<<endl; 
	
	return 0;
	
}







