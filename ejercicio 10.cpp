#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>

using namespace std;

void generarTablero(int tablero[][10], int fila, int columna) 
{
  srand(time(0)); 
  for(int i=0; i<fila; i++) 
  {
    for(int j=0; j<columna; j++) 
	{
      
      int numeroAleatorio=rand() % 5; 

      if(numeroAleatorio==0) 
	  {
        tablero[i][j] = 1;
      } 
	  else 
	  {
        tablero[i][j] = 0;
      }
    }
  }
}

int contarMinasAdyacentes(int tablero[][10], int fila, int columna) 
{
  int minasAdyacentes = 0;

  for(int i=fila-1; i<=fila+1; i++) 
  {
    for(int j=columna-1; j<=columna+1; j++)
	{
      if(0<= i and i<10 and 0<=j and j<10 and !(i==fila and j==columna)) 
	  {
        if(tablero[i][j]==1)
		{
        	minasAdyacentes++;
        }
      }
    }
  }

  return minasAdyacentes;
}

void mostrarTablero(int tablero[][10], int fila, int columna)
{
  for(int i=0; i<fila; i++) 
  {
    for(int j=0; j<columna; j++)
	{
      cout<<tablero[i][j]<< " ";
    }
    cout<<endl;
  }
}

int main() 
{
  int tablero[10][10];

  generarTablero(tablero, 10, 10);

  cout<<"Tablero:"<<endl;
  mostrarTablero(tablero, 10, 10);

  int tableroConNumeros[10][10];

  for(int i=0; i<10; i++) 
  {
    for(int j=0; j<10; j++)
	{
      tableroConNumeros[i][j]=contarMinasAdyacentes(tablero, i, j);
    }
  }

  cout<<"Tablero con numeros de minas :"<<endl;
  mostrarTablero(tableroConNumeros, 10, 10);

  return 0;
}
