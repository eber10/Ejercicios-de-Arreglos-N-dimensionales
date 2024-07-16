#include<iostream>

using namespace std;

int main()
{
	int A[4][4], n=0, m=3, suma=0;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<i<<";"<<j<<":"; cin>>A[i][j];
		}
	}
	cout<<"MATRIZ 4X4"<<endl;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
	for(int i=0; i<4; i++)
	{
	
		for(int j=0; j<4; j++)
		{
			if(n==j or m==j)
			{
				suma=suma+A[i][j];
			}
		}
		n++;
		m--;
	}
	cout<<"la suma de las dos diagonales es: " <<suma;
	return 0;
}
