#include <iostream>
#include "Super.h"
using namespace std;

int main(){
    int res_menu=0;
    cout<<"Bienvenido usuario"<<endl;
    Super S1("'La tiendita de la esquina'");
    cout<<"Ha ingreso al super "<<S1.getNombre_Super()<<endl;
    S1.menu();
    return 0;
}
