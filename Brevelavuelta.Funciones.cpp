/*
#include <iostream>
using namespace std; //el main hace todo
int main(){
float base, altura, area;
cout <<"Ingrese base: ";
cin >> base;
cout <<"Ingrese altura: ";
cin >> altura;
area =(base*altura)/2;
cout <<"El area es: "<<area<<endl;
}
*/


/*
//la funcion hace todo
#include <iostream>
using namespace std;
/*Retorno*/ /* void AreaT(/*argumetos------>argumentos*//*);//Prototipo
/* int main(){
	AreaT();
	return 0;
}

void AreaT() //cuerpo funcion
{
	float B,H,A;
	cout <<"Ingrese base: ";
	cin >>B;
	cout <<"Ingrese altura: ";
	cin>>H;
	A = B*H/2;
	cout<<"El area es: "<<A<<endl;
 } 
 */
 
 //El main envia los argumetnos
 /*
 #include <iostream>
 using namespace std;
 void AreaT(float b, float h); 
 int main(){
 	float base,altura;
 	cout<<"Ingrese base: ";
 	cin>>b;
 	cout<<"Ingrese altura: ";
 	cin>>altura;
 	AreaT(base,altura);
 	
 }
 
 void AreaT(float b, float h){
 	float a;
 	a = b*h/2;
 	cout<<"El area es: "<<a<<endl;
 	b = 1000;
 	cout<<"B = "<<b<<endl;
 }
 */
 //El main envia argumentos
 //la funcion calcula y retoma un valor
 #include <iostream>
 using namespace std;
 float AreaT(float b, float h);
 int main(){
 float base,altura,area;
 cout<<"Ingrese base: ";
 cin>>base;
 cout<<"Ingrese altura: ";
 cin>>altura;
 area = AreaT(base,altura);
 cout<<"El area es: "<<area<<endl;
 return 0;
 }
 
 float AreaT(float b, float h){
 	float a;
 	a = b*h/2;
 	return a; //la funcion solo puede retornar un valor
 }
 
 
 
 
