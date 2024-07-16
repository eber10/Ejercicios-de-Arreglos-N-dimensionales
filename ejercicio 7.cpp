#include<iostream>

using namespace std;

int main()
{
	 int matriz[4][4]={
	 	{1, 2, 3, 4},
	 	{5, 6, 7, 8},
	 	{9, 1, 2, 3},
	 	{4, 5, 6, 7}
	 };
	 for(int i=0; i<4; i++)
	 {
	 	for(int j=0; j<4; j++)
	 	{
	 		cout<<matriz[i][j]<<"  ";
		}
		cout<<" \t \t";
		for(int h=3; h>=0; h--)
		{
			cout<<matriz[h][i]<<"  ";
		}
		cout<<endl;
	 }
	 
	 return 0;
}
