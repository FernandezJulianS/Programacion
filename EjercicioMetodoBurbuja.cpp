#include <iostream>
using namespace std;
void funcion1(v[]);
//void funcion2();
//void funcion3();
int main(){
float v[10];
int i;
for(i=0;i<10;i++){
cout<<"Ingrese los valores: "<<endl;
cin<<v[i];
funcion1(v[]);
}
}
void funcion1(float v[]){
int x;
float y;
for(x=1;x<9;x++){
    if(v[x]>v[x+1]){
        y = v[x];
        v[x] = v[x+1];
        v[x+1] = y
    cout<<v[x+1];
    }

}

}

