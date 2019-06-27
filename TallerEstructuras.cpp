#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int main()
{
 struct bike
 {
 	char categoria[20];
 	char nombre[30];
 	int edad;
 	float kilometraje;
 	float tiempo;
 	
  }ciclistas[10];
  

for(int i=1;i<2;i++)
{

cout<<"Ingrese su nombre (CICLISTA "<<i<<") : ";

gets(ciclistas[i].nombre);
cout<<"Ingrese su edad (CICLISTA "<<i<<") : ";
//cin.ignore();
cin>>ciclistas[i].edad;
cout<<"Ingrese la categoria de la bicicleta (CICLISTA "<<i<<") : ";
cin.ignore();
gets(ciclistas[i].categoria);
cout<<"Ingrese el tiempo acumulado en minutos (CICLISTA "<<i<<") : ";
cin>>ciclistas[i].tiempo;
}



for(int i=1;i<2;i++)
{
	cout<<"el nombre del ciclista "<<i<<" es: "<<ciclistas[i].nombre<<endl;
	cout<<"la edad del ciclista "<<i<<" es: "<<ciclistas[i].edad<<endl;
	cout<<"la categoria de la bicicleta "<<i<<" es: "<<ciclistas[i].categoria<<endl;
	cout<<"el tiempo del ciclista "<<i<<" es: "<<ciclistas[i].tiempo<<endl;
	}
}

/*
int pos = 0;
int mayor;
mayor = curso[0].nota;

for(int i=0;i<5;i++){
	        if(curso[i].nota>mayor){
			
	        	mayor = curso[i].nota;
	        	pos = i;
			}
}
cout<<"El nombre del estudiante con la mayor nota es: "<<curso[pos].nombre<<endl;


	return 0;
}

*/
