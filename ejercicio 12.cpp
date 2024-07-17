#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void inicializarTablero(int tablero[][10], int fila, int columna)
{
    srand(time(0));
    for(int i=0; i<fila; i++) 
	{
        for(int j= 0; j<columna; j++)
		{
            tablero[i][j]=rand()%2;
        }
    }
}

void mostrarTablero(int tablero[][10], int fila, int columna) 
{
    for(int i=0; i<fila; i++) 
	{
        for(int j= 0; j<columna; j++)
		{
            cout<<tablero[i][j]<<" ";
        }
        cout<<endl;
    }
}

void siguienteGeneracion(int tableroActual[][10], int siguienteGeneracion[][10], int fila, int columna) 
{
    for(int i=0; i<fila; i++) 
	{
        for(int j=0; j<columna; j++) 
		{
            int vecinosVivos=0;
            for(int di=-1; di<=1; di++) 
			{
                for(int dj=-1; dj<=1; dj++) 
				{
                    if(!(di==0 and dj==0)) 
					{ 
                        int ni=i+di;
                        int nj=j+dj;
                        if(ni>=0 and ni<10 and nj>=0 and nj<10) 
						{
                            vecinosVivos+=tableroActual[ni][nj];
                        }
                    }
                }
            }
            if(tableroActual[i][j]==1) 
			{
                if(vecinosVivos<2 or vecinosVivos>3)
				{
                    siguienteGeneracion[i][j]=0;
			    }
				else
				{
                    siguienteGeneracion[i][j]=1; 
                }
            }
			else 
			{
            	 if(vecinosVivos==3)
				 {
                    siguienteGeneracion[i][j]=1; 
                } 
				else
				{
                    siguienteGeneracion[i][j]=0;
				}
            }
        }
    }
}

int main() 
{
    int tableroActual[10][10];
    int Generacion[10][10];

    inicializarTablero(tableroActual, 10, 10);

    cout<<"Tablero inicial:"<<endl;
    mostrarTablero(tableroActual, 10, 10);

    siguienteGeneracion(tableroActual, Generacion, 10, 10);

    cout<<"\nSegunda generacion:"<<endl;
    mostrarTablero(Generacion, 10, 10);

    return 0;
}
