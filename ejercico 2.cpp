#include<iostream>

using namespace std;

int main()
{
	int A[3][3], n;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<i<<";"<<j<<":"; cin>>A[i][j];
		}
	}
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"ingrese el elemento a buscar:"; cin>>n;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(A[i][j]==n)
			{
				cout<<"fila: " <<i<<", ";
				cout<<"columna: " <<j<<endl; 
			}
		}
	}
	return 0;
}
