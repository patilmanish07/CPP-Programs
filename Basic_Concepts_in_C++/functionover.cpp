// Program used to demonstrate the concept of function overloading concept.
 #include<iostream>
 using namespace std;
 

class Demo
{
  public :
        int Addition(int no1,int no2)
		{
		   int ans = 0;
		   ans = no1 + no2;
		   return ans;
		 } 
		 
		 int Addition(int no1,int no2,int no3)
		  {
		     int ans = 0;
			 ans = no1 + no2 + no3;
			 return ans;
			}

         int Addition(int no1,int no2,int no3,int no4)
          {
             int ans = 0;
             ans = no1 + no2 + no3 + no4;
              return ans;
           }
		};
		

       int main()
	 {
         Addition obj.(10,11);
		 cout<<ret<<"\n";
		 
         Addition obj.(10,11,21);
		 cout<<ret<<"\n";
		 
         Addition obj.(10,11,21,51);
		 cout<<ret<<"\n";
		 
	   
 
       return 0;
     }