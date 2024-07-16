#include<iostream>

using namespace std;

int main()
{
	int A[3][3], B[3][3], C[3][3];
	//matriz A
	for(int i=0; i<3; i++) //recorre las filas
	{
		for(int j=0; j<3; j++)// recorre las columnas 
		{
			cout<<i<<";"<<j<<":"; cin>>A[i][j];
		}
	}
	cout<<"MATRIZ A"<<endl;
	for(int i=0; i<3; i++) //recorre las filas
	{
		for(int j=0; j<3; j++)// recorre las columnas 
		{
	        cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
	//matriz B
	for(int i=0; i<3; i++) //recorre las filas
	{
		for(int j=0; j<3; j++)// recorre las columnas 
		{
			cout<<i<<";"<<j<<":"; cin>>B[i][j];
		}
	}
	cout<<"MATRIZ B"<<endl;
	for(int i=0; i<3; i++) //recorre las filas
	{
		for(int j=0; j<3; j++)// recorre las columnas 
		{
			cout<<B[i][j]<<"  ";
		}
		cout<<endl;
	}
	//multiplicación de matrices
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			C[i][j]=0;
			for(int h=0; h<3; h++)
			{
				C[i][j]+=A[i][h]*B[h][j];
			}
		}
	}
	cout<<"MATRIZ RESULTANTE"<<endl;
	for(int i=0; i<3; i++) //recorre las filas
	{
		for(int j=0; j<3; j++)// recorre las columnas 
		{
			cout<<C[i][j]<<"   ";
		}
		cout<<endl;
	}
	return 0;
}
