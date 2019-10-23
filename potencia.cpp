#include <iostream>

//Programa que calcula la potencia de un número natural

using namespace std;
//Calculo de la potencia, recibe como entrada a la base y el exponente
double Potencia(int n, int e) {

	double a=n,b=n;
	
	if (e==0) {
		return 1;
	} if (e < 0) {
		return 0;
	} else {
		while(e>1) {
			a=a*b;
			--e;
		}
	}	
	return a;
}

int main() {
int n,e;

cout<<"Introduzca el número al cual quiere calcular la potencia"<<endl;
cin>>n;
cout<<"Introduzca el valor de la potencia"<<endl;
cin>>e;
cout<<"La potencia "<< e <<" de "<< n <<" es "<<Potencia(n,e)<<endl;

};
