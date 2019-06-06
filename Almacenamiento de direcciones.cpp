#include <iostream>
using namespace std;
int main ()
{
    float x;
    x=39.8;
    cout<<"x = "<<x<<endl;
    float*xptr; // apuntador(tipo de variable) // ' * ' <-------  apuntador por este signo
    xptr = &x; //operador direccion // Esta accion para almacenar la direccion de x
    cout<<"xprt = "<<xptr<<endl;
    float y, *yptr;
    y = 25.3;
    cout<<"y = "<<y<<endl;
    yptr = &y;
    cout<<"yptr = "<<yptr<<endl;
    int Numeros[12];
    Numeros[0] = 3;
    cout<<"Numeroa[0] = "<<Numeros[0]<<endl;
    cout<<Numeros<<endl;
    cout<<&Numeros[0]<<endl;
    Numeros[11] = 5;
    cout<<"Numeros [1] = "<<Numeros[11]<<endl;
    cout<<&Numeros[11]<<endl;
    cout<<Numeros+11<<endl;//Guarda la direccion de esa variable sumando el numero de bits que guarde la computadora
    cout<<*(Numeros+11)<<endl;//Muestra el contenido que hay guardado en esa dirreccion ' * ' <------- Por esta variable
    *(Numeros+7) = 15;
    cout<<"Numeros [7] = "<<*(Numeros+7)<<endl;
    *(Numeros+500) = 12;
    cout<<"Numeros [500] = "<<*(Numeros+500)<<endl;
}
