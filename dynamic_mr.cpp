/* Dynamic memmory allocation using 'new' operator
Example- Matrix multiplication*/

#include<iostream>
using namespace std;
main()
{
	int **p,**q,**r;
	int a1,a2,b1,b2,m,s=0;
	cout<<"matrix A rows and columns"<<endl;		//user inputed values 
	cin>>a1>>a2;

	p=new int*[a1];
	for(int i=0;i<a1;i++)
		p[i]=new int[a2];

	cout<<"matrix B rows and columns"<<endl;
	cin>>b1>>b2;

	q=new int*[b1];
	for(int i=0;i<b1;i++)
		q[i]=new int[b2];

	if(a2!=b1)
	{
	cout<<"not possible";
		goto l1;
	}

	cout<<"enter matrix A"<<endl;
	for(int i=0;i<a1;i++)
	{
		for(int j=0;j<a2;j++)
			cin>>p[i][j];
	}
	cout<<"enter matrix B"<<endl;
	for(int i=0;i<b1;i++)
	{
		for(int j=0;j<b2;j++)
			cin>>q[i][j];
	}

	r=new int*[a1];
	for(int i=0;i<a1;i++)
		r[i]=new int[b2];
	
								//matrix multiplication
	for(int k=0;k<a1;k++)
	{
		for(int t=0;t<b2;t++)
		{
			for(int l=0;l<b1;l++)
			{
				m= p[k][l]*q[l][t];
				s=s+m;
			}
			r[k][t]=s;	s=0;
		}
	}


	cout<<"Resultant matrix C"<<endl;
	for(int i=0;i<a1;i++)
	{
		for(int j=0;j<b2;j++)
			cout<<r[i][j]<<" ";
		cout<<endl;
	}

l1:
	cout<<endl;
}


