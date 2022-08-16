// Program used to demonstrate the concept of constructor.
  #include<iostream>
  using namespace std;

  class Demo
{
   public :
   int x;                                  // characterstics
   int y;                                  // characterstics
  
   Demo()                                  // default contructor
  { 
    cout<<"Inside default contructor\n";
	x = 0;
	y = 0;
  }	
   
   Demo(int i,int j)                      //Parameterised contructor
  {
    cout<<"Inside parameterised contructor\n";
      x = i;
      y = j;
   }

   Demo(Demo &ref)                      // Copy contructor   
  {
      cout<<"Inside copy contructor\n";
	  x = ref.x;
	  y = ref.y;
   }

    ~Demo()                              //Destructor
  {	
	cout<<"Inside destructor\n";
   }
   
 }; 

   int main()
 {  
     Demo obj1(11,21);
	 
	 Demo obj2(obj1);
	 
	 return 0;
  }
  