/*Aggregation*/

#include <iostream>  
using namespace std;  
class Address { 						//base class 
	public:  
		string addressLine, city, state;    
		Address(string addressLine, string city, string state)    
		{    
			this->addressLine=addressLine;    	//constructor
			this->city=city;    
			this->state=state;    
		}    
};  

class Employee    
{    
	private:  
		Address* address;  				//Aggregation   
	public:  
		int id;    
		string name;   
		Employee(int id, string name, Address* address)    
		{    
			this->id=id;    
			this->name=name;    
			this->address=address;    
		}    
		void display()    
		{    
			cout<<id <<" "<<name<< " "<<     
				address->addressLine<< " "<< address->city<< " "<<address->state<<endl;    
		}    
};   
int main(void)						//main pgm 
{  
	Address a1=Address("402-Thevalakkara"," Chavara","Kollam","Kerala");    
	Employee e1=Employee(101,"Rinsi",&a1);  
	e1.display();     
}  
