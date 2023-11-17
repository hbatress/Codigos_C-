#include<iostream>
#include<string.h>
#include <iomanip>// libreria para pocer realizar una matriz justificada

using namespace std;

int main()
{

		//int i,j;
	string m1[4][3]={{"Nombre","Edad","Numero"}};

	
	
	for(int i=0;i<2;i++)//numero de filas
	
	{
	

		cout<<"ingrese el nombre del estudiante["<<i<<"][0]:";
				cin>>m1[i+1][0];
		cout<<"ingrese la edad del estudiante["<<i<<"][1]:";

				cin>>m1[i+1][1];
				cout<<"ingrese el numero del estudiante["<<i<<"][2]:";

				cin>>m1[i+1][2];
		
		
		
		}
		

			cout<<endl<<endl;
			
	//	cout<<"nombre"<<"edad"<<"numero"<<endl;
			
		for(int i=0;i<3;i++)//numero de filas
		
	{
	
			for(int j=0;j<3;j++)//numero de columnas
		{
			if(i==0){
			
			}
			//sizeof sirve para agregar espacio y ordenar en una matriz los datos
			cout<< setw(sizeof(m1[i][j])) <<m1[i][j]<<"\t";
			}
			cout<<endl;
			
			}
		return 0;	
		}
