#include<iostream>

using namespace std;

int main()
{
	int f1, f2, fila1[4], fila2[4];
	int A[4][4]={
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	cout<<"MATRIZ"<<endl;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Filas a intercambiar: "<<endl;
	cin>>f1>>f2;
	cout<<endl;
	for(int i=0; i<4; i++)
	{
		fila1[i]=A[f1][i];
		fila2[i]=A[f2][i];
		A[f1][i]=fila2[i];
		A[f2][i]=fila1[i];
	}
	
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
	
}
