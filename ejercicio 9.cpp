#include <iostream>
using namespace std;

void imprimirCuadradoLatino(int N) 
{
    int cuadrado[N][N];
    for(int i=0; i<N; ++i)
	{
        cuadrado[0][i]=i+1;
    }
    for(int i=1; i<N; ++i)
	{
        for(int j=0; j<N; ++j)
		{
            cuadrado[i][j]=cuadrado[i-1][(j+N-1)%N];
        }
    }

    for(int i=0; i<N; ++i)
	{
        for(int j=0; j<N; ++j)
		{
            cout<<cuadrado[i][j]<< " ";
        }
        cout<<endl;
    }
}

int main() 
{
    int N;
    cout<<"Introduce el valor de N: "; cin>>N;
    imprimirCuadradoLatino(N);
    return 0;
}
