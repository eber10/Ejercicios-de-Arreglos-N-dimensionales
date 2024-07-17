#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void inicializarBosque(int bosque[][10], int fila, int columna) 
{
    srand(time(0));
    for(int i=0; i<fila; i++)
	{
        for(int j=0; j<columna; j++) 
		{
          bosque[i][j]=rand()%2; 
        }
    }
}

void mostrarBosque(int bosque[][10], int fila, int columna)
{
    for(int i=0; i<fila; i++) 
	{
        for(int j=0; j<columna; j++)
		{
            cout<<bosque[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void propagarFuego(int bosque[][10], int fila, int columna) 
{
    int nuevoBosque[10][10];

    for(int i=0; i<fila; i++) 
	{
        for(int j=0; j<columna; j++) 
		{
            if(bosque[i][j]==0) 
			{ 
                bool vecinoQuemandose=false;
                for (int di=-1; di<=1; di++) 
				{
                    for(int dj=-1; dj<=1; dj++) 
					{
                        int ni=i+di;
                        int nj=j+dj;
                        if(ni>=0 and ni<10 and nj>=0 and nj<10) 
						{
                            if(bosque[ni][nj]==1) 
							{
                                vecinoQuemandose=true;
                                break;
                            }
                        }
                    }
                    if(vecinoQuemandose)break;
                }
                if(vecinoQuemandose) 
				{
                   nuevoBosque[i][j]=1;
                } 
				else
				{
                    nuevoBosque[i][j]=0; 
                }
            } 
			else if(bosque[i][j]==1) 
			{
                nuevoBosque[i][j]=2; 
            } 
			else 
			{
			    nuevoBosque[i][j]=2; 
            }
        }
    }

    for(int i=0; i<fila; i++) 
	{
        for(int j=0; j<columna; j++) 
		{
            bosque[i][j]=nuevoBosque[i][j];
        }
    }
}

int main() 
{
    int bosque[10][10];
    
    inicializarBosque(bosque, 10, 10);

    cout<<"Bosque:"<<endl;
    mostrarBosque(bosque, 10, 10);
    propagarFuego(bosque, 10, 10);
	
    cout<<"Bosque despues de Propagacion:"<<endl;
    mostrarBosque(bosque, 10, 10);

    return 0;
}
