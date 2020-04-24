/* example of function object*/

#include <iostream>  
using namespace std;  
class fun_obj 						//function object class 
{  
	public:  
		int operator()(int a, int b)		//operator fun
		{  
			return a+b;  
		}  
};  


int main()  						//main pgm
{  
	fun_obj f;                 			//object
	int result=f(5,5);  
	cout<<"Addition of a and b is :" <<result;    
}  
