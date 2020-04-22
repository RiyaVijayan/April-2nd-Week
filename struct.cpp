/*structure in cpp*/
	
#include <iostream>    
using namespace std;    
struct Rectangle  			//structure declaration 
{      
int width, height;      
Rectangle(int w, int h)      
{      
width=w;      
height=h;      
}      
void areaofRectangle()			//structure method
{       
cout<<"Area of Rectangle is: "<<(width*height);
}      
};      
int main(void)
{    
struct Rectangle rec=Rectangle(4,6);    //structure variable created
rec.areaofRectangle();        		//method callling
}    
