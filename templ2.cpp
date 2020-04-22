/*template of non type*/

#include <iostream>  
using namespace std;  
template<class T, int size>				//template   
class A   
{  
	public:  
		T arr[size];  
		void insert()  				//method to insert ele
		{  
			int i=1;  
			for(int j=0;j<size;j++)  
			{  
				arr[j]=i;  
				i++;  
			}  
		}  

		void display()  
		{  
			for(int i=0;i<size;i++)  	//method to display elements
			{  
				cout<<arr[i]<<" ";  
			}  
		}  
};  
int main()  
{  
	A<int,10> t1;  					//object creation
	t1.insert();  
	t1.display();  
}  
