/* queue of size 10*/

#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 10	
									//definng thw default capacity of the queue

class queue								//Class queue
{	
	int *arr;							//array to store queue elements
	int capacity;							//maximum capacity of the queue
	int front;							//front element in the queue
	int rear;							//rear points to last element in the queue
	int count;							//current size of the queue

	public:
	queue(int size = SIZE); 					//constructor
	~queue();   							//destructor
	void dequeue();
	void enqueue(int x);
	int peek();
	int size();
	bool isempty();
	bool isfull();
};

queue::queue(int size)							//constructor to initialize queue
{
	arr=new int[size];
	capacity=size;
	front=0;
	rear= -1;
	count=0;
}	
queue::~queue()								//Destructor to free memory
{
	delete arr;
}

void queue::dequeue()							//function to remove front element from the queue
{									//check for queue underflow
	if(isempty())
	{
		cout<<"UnderFlow\nProgram Terminated"<<endl;
		return;
	}
	cout<<"Removing "<<arr[front]<<endl ;
	front=front +1;
	count--;
}

void queue::enqueue(int item)						//function to add an element to the queue
{									// check for queue overflow
	if(isfull())
	{
		cout<<"OverFlow\nProgram Terminated"<<endl;
		return;
	}
	cout<<"Inserting "<<item <<endl;
	rear=rear+1;
	arr[rear]=item;
	count++;
}

int queue::peek()							//function to find the peek element of queue
{
	if(isempty())
	{
		cout<<"UnderFlow\nProgram Terminated"<<endl;
		exit;
	}
	return arr[front];
}

int queue::size()							//function to get the size of queue
{
	return count;
}

bool queue::isempty()							//function check the queue is empty or not
{
	return (count==0);
}

bool queue::isfull()							//function to check the queue is full or not
{
	return (count==capacity);
}

int main()								//main pgm
{

	int capacity,ele;
	char ins;
	cout<<"Enter the size of queue (less than 10)"<<endl;							
	cin>>capacity;							// user inputed capacity of queue
	queue q(capacity);

	do{
		cout<<"Do you want to insert elements?(y/Y and element)"<<endl;		
		cin>>ins;							//inserting elements to queue
		if(ins=='y'||ins=='Y')
		{
			cin>>ele;
			q.enqueue(ele);
		}
	}while(ins=='y'||ins=='Y');

	cout<<"Front element is: "<<q.peek()<<endl;

	do{
		cout<<"Do you want to remove elements?(y/Y)"<<endl;
		cin>>ins;							//removing elements from queue
		if(ins=='y'||ins=='Y')
		{
			q.dequeue();
		}
	}while(ins=='y'||ins=='Y');

	if (q.isempty())						//checking queue is empty or not
		cout<<"Queue is empty"<<endl;
	else
		cout<<"Queue is Not empty"<<endl;
}
