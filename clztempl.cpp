/*class template*/

#include <iostream>  
using namespace std;  
template<class T> 					//class template 
class A   
{  
	public:  
		T num1;  
		T num2;
		void get()
		{
			cout<<"enter the values"<<endl;
			cin>>num1>>num2;
		}  
		void add()  
		{  
			cout<<"Addition of num1 and num2 : "<<num1+num2<<endl;  
		}          
};  

int main()  						//main pgm
{  	
	A<int> d;
	d.get();					//object creation  
	d.add();  
}  
