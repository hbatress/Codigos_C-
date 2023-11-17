#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
		//int i,j;
	string m1[2][2];
	
	
	for(int i=0;i<2;i++)//numero de filas
	
	{
	
		for(int j=0;j<2;j++)//numero de columnas
		
		{
		
		cout<<"ingrese el nombre del estudiante["<<i<<"]["<<j<<"]:";
				cin>>m1[i][j];
	cout<<"ingrese la edad del estudiante["<<i<<"]["<<j<<"]:";
				cin>>m1[i][j];
				cout<<"ingrese el numero del estudiante["<<i<<"]["<<j<<"]:";
				cin>>m1[i][j];
		}
		
		}
		

			cout<<endl<<endl;
			
		cout<<"nombre\t"<<"edad\t"<<"numero\t"<<endl;
		for(int i=0;i<2;i++)//numero de filas
		
	{
			for(int j=0;j<2;j++)//numero de columnas
		{
			cout<<m1[i][j]<<"\t";
			}
			cout<<endl;
			
			}

}
