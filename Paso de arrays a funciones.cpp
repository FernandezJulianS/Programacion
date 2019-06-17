//Paso de arrays a funciones.

#include <iostream>
using namespace std;
void funcion1(float b[][3]);
int main(){
	float a[2][3];
	funcion1(a);
	cout<<"A[1][1]= "<<a[1][1]<<endl;
	return 0;
	
}
void funcion1(float b[][3]){    //void retorna es la direccion del arreglo
	b[0][0]=3.4; b[0][1]=-8.4;b[0][2]=99.8;
	b[1][0]=11.25;b[1][1]=47.6;b[1][2]=-0.4;
	
}
