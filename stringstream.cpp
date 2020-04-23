/*string stream class
  converting integer to string*/

#include <iostream>  
#include<sstream>  				//sstream class inclusion
using namespace std;  
int main() 
{  
	int k;  
	cout<<"Enter an integer value";  
	cin>>k;  
	stringstream ss;  			//object creation
	ss<<k;  				//value taking
	string s;  
	ss>>s;  				//converting
	cout<<"\n"<<"An integer value is : "<<k<<"\n";  
	cout<<"String representation of an integer value is : "<<s;   
}  
