#include<iostream>

using namespace std;

int main()
{
	 int matriz[6][6]={
	 	{1, 2, 3, 4, 5, 6},
	 	{7, 8, 9, 1, 2, 3},
	 	{4, 5, 6, 7, 8, 9},
	 	{1, 2, 3, 4, 5, 6},
	 	{7, 8, 9, 1, 2, 3},
	 	{4, 5, 6, 7, 8, 9}
	 };
	 for(int i=0; i<6; i++)
	 {
	 	for(int j=0; j<6; j++)
	 	{
	 		cout<<matriz[i][j]<<"  ";
		}
		cout<<" \t \t";
		for(int h=5; h>=0; h--)
		{
			cout<<matriz[i][h]<<"  ";
		}
		cout<<endl;
	 }
	 
	 return 0;
}



