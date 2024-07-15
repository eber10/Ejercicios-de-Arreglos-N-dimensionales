#include<iostream>

using namespace std;

int main()
{
	int max, min, f1, c1, f2, c2;
	int matriz[4][4]={
		{3, 2, 1, 6},
		{5, 7, 0, 3},
		{2, 6, 1, 6},
		{4, 9, 6, 3}
	};
	max=matriz[0][0];
	min=matriz[0][0];
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(max<matriz[i][j])
			{
				max=matriz[i][j];
				f1=i;
				c1=j;
			}
			if(min>matriz[i][j])
			{
				min=matriz[i][j];
				f2=i;
				c2=j;
			}
			cout<<matriz[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"el maximo es: "<<max<<" \t"<<"Fila: "<<f1<<", "<<"columna: "<<c1<<endl;
	cout<<"el minimo es: "<<min<<" \t"<<"Fila: "<<f2<<", "<<"columna: "<<c2<<endl;
	return 0;
}
