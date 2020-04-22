/* friend function */

#include <iostream>  
using namespace std;  
class B;          			// forward declarartion  
class A  
{  
	int x;  
	public:  
	void setdata(int i)  
	{  
		x=i;  
	}  
	friend void min(A,B);         // friend fun declaration
};  
class B  
{  
	int y;  
	public:  
	void setdata(int i)  
	{  
		y=i;  
	}  
	friend void min(A,B);          // friend fun declaration  
};  
void min(A a,B b)		       //friend function definition
{  
	if(a.x<=b.y)  
		cout<<a.x<<endl;  
	else  
		cout<<b.y<<endl;  
}  

int main()  				//main pgm
{  
	A a;  
	B b;  
	a.setdata(10);  
	b.setdata(20);  
	min(a,b);  			//function call
}  
