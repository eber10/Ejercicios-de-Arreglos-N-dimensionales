#include <iostream>

using namespace std;

void imprimirEspiral(int matriz[5][5], int n)
{
    int filaInicio=0, filaFin=n-1;
    int columnaInicio=0, columnaFin=n-1;
    int direccion=0;
    while(filaInicio<=filaFin && columnaInicio<=columnaFin)
	{
        if(direccion==0) 
		{ 
            for(int i=columnaInicio; i<=columnaFin; i++)
			{
                cout<<matriz[filaInicio][i]<< " ";
            }
            filaInicio++;
        } 
		else
		{
			if(direccion==1)
			{
				for(int i=filaInicio; i<=filaFin; i++) 
				{
                    cout<<matriz[i][columnaFin]<< " ";
				}
				columnaFin--;
			}
			else
			{
				if (direccion==2) 
				{ 
                    for (int i=columnaFin; i>=columnaInicio; i--)
					{
                        cout<<matriz[filaFin][i]<< " ";
                    }
                    filaFin--;
                }
                else
                {
                	if (direccion==3) 
					{ 
                        for (int i=filaFin; i>=filaInicio; i--)
						{
                            cout<<matriz[i][columnaInicio]<< " ";
                        }
                        columnaInicio++;
                    }
				}
			}
	    }
	    direccion=(direccion+1)%4; 
    }
}

int main() 
{
  int matriz[5][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}
  };

  int n = 5;
  for(int i=0; i<5; i++)
  {
  	    for(int j=0; j<5; j++)
  	    {
  	    	cout<<matriz[i][j]<<" ";
	    }
	    cout<<endl;
  }
  cout<<endl;
  cout<<"recorrido en espiral: "<<endl;
  imprimirEspiral(matriz, n);
  return 0;
}
