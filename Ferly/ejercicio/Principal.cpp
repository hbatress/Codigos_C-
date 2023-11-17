#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int n1,n2;
	cout<<"Ingrese el Primer Numero: \n";
	cin>>n1;
	cout<<"Ingrese el Segundo Numero: \n";
	cin>>n2;
	
	if(n1<n2){
		cout<<"El numero "<<n2<<" es mayor que "<<n1;
	}else{
		if(n1==n2){
				cout<<"Los dos numeros son iguales";
		}else{
				cout<<"El numero "<<n1<<" es mayor que "<<n2;
		}
	}
	return 0;
}
