/* My stack*/

#include<iostream>
#include<cstdlib>
#define MAX_SIZE 5							//defining the maximum default capacity of stack
using namespace std;

class Mystack
{
	
		int A[MAX_SIZE];					//array to store stack elements 
		int top;						//to store top of stack
	public:
		Mystack();						//constructor
		void push(int x);
		void pop();
		void topelement();
		void print();
		void isempty();
};

Mystack::Mystack()							//Constructor to initialize stack
{
	top=-1;
}
void Mystack::push(int x)						//function to push elements to stack
{
	if(top==MAX_SIZE-1)
	{
	cout<<"Stack Overflow"<<endl;					//check for overflow
	return;
	}
	else
	{
	top++;
	A[top] = x;
	}
}
void Mystack::pop()							//function to pop elements from stack
{
	if(top!=-1)
	{
	top--;
	}
	else
	{
	cout<<"Stack Underflow"<<endl;					//check for underflow
	return;
	}
}
void Mystack::isempty()							//function to check the stack is empty or not
{
	if(top==-1)
	{
	cout<<"Empty"<<endl;
	}
	else
	{
	cout<<"Not empty"<<endl;
	}
}
void Mystack::topelement()						//function to check top element
{
	cout<<"The top element is : "<<A[top];
}
void Mystack::print()							//function to print stack
{
	for(int i=0;i<=top;i++)
	{
	cout<<"ele:  "<<A[i]<<endl;
	}
}
int main()								//main pgm
{
	Mystack s1;
	int ch,num;
	while(1)							//user choices of stack operations
	{
		cout<<"\n1. PUSH"<<endl;
		cout<<"2. For getting top element" <<endl;
		cout<<"3. Check it is empty or not"<<endl;
		cout<<"4. POP"<<endl;
		cout<<"5. Print"<<endl;
		cout<<"6. EXIT"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>ch;						//getting user input
		switch(ch)
		{
			case 1:
				cout<<"Enter the number to be pushed"<<endl;
				cin>>num;
				s1.push(num);				//pusing elements to stack
				break;
			case 2:
				cout<<"Top element"<<endl;
				s1.topelement();			//top element
				break;
			case 3:
				cout<<"Check empty or not"<<endl;
				s1.isempty();				//checking empty or not
				break;
			case 4:
				cout<<"POP the element"<<endl;
				s1.pop();				//poping element from stack
				break;
			case 5: 
				s1.print();				//printing
				break;
			case 6:
				exit(0);					//exiting
		}
	}

}
