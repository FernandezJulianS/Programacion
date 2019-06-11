#include <iostream>
using namespace std;
void Menu();
void MenuVolumen();
void MenuArea();
int main(){
	 Menu();
return 0;
}
void Menu(){
	int a;
	cout<<"Buenos Dias"<<endl;
	cout<<"Desea saber el area o el volumen de las figuras? "<<endl;
	cout<<"Si desea saber el volumen presione '1'\nSi desea saber el area presione '2'\nSi desea salir del programa presione '0'"<<endl;
	cin >> a;
switch(a){
	case 1: MenuVolumen();
	break;
	case 2: 
	break;
	case 0: cout<<"Ejecucion Finalizada";
	break;
	default:cout<<"Accion Incorrecta\nEjecucion Finalizada";
}
system("PAUSE"); // return 0;
}
void MenuVolumen(){
	int figura;
	cout<<"Cual de las dos figuras desea saber el volumen?"<<endl;
	cout<<"Presione '1', o '2', dependiendo de la figura: ";
	cin>> figura;
}
