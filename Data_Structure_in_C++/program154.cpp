// Singly Circular LinkedList with C++ lang.
// Prototype.
#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyCLL
{
	private:              // Characteristics
	       PNODE Head;
		   PNODE Tail;
		   
	 public:
                         // Behaviours
            SinglyCLL()
		   {
				Head = NULL;
				Tail = NULL;
			}
			
			void InsertFirst(int no)
			{
				
			}
			void InsertLast(int no)
			{
				
			}
			void InsertAtPos(int no, int ipos)
			{
				
			}
			void DeleteFirst(int no)
			{
				
			}
			void DeleteLast(int no)
			{
				
			}
			void DeleteAtPos(int no, int ipos)
			{
				
			}
			void Display()
			{
				
			}
			void Count()
			{
				return 0;
			}
};

int main()
{
	SinglyCLL obj;
	
	return 0;
}