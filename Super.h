#include <iostream>
#include "Carrito.h"

using namespace std;
class Super{
    private:
        string Nombre_Super;


    public:
        Super();
        ~Super();
        Super(string Nombre_Super);
        string getNombre_Super();
        void setNombre_Super();
        void menu();   
};
Super::Super(){
    Nombre_Super="Super generico";

}
Super::Super(string Nombre_Super){
    this->Nombre_Super=Nombre_Super;
}

void Super::setNombre_Super(){
    this->Nombre_Super=Nombre_Super;
}

string Super::getNombre_Super(){
    return Nombre_Super;
}
void Super::menu(){
    cout<<"Lista de productos por categoria:"<<endl;
    

    Producto ArregloPro[21];
    Producto p1("Cafe",30);
    Producto p2("Galletas",50);
    Producto p3("Cereal",15);
    Producto p4("Pasta",20);
    Producto p5("Salsa",25);
    Producto p6("Manzana",15);
    Producto p7("Naranja",15);
    Producto p8("Sandia",30);
    Producto p9("Limon",5);
    Producto p10("Piña",25);
    Producto p11("Bolillo",10);
    Producto p12("Chocolatin",25);
    Producto p13("Cuernito",10);
    Producto p14("Ojaldre",10);
    Producto p15("Dona",15);
    Producto p16("Tostador",600);
    Producto p17("Horno",1500);
    Producto p18("Refrigerador",1200);
    Producto p19("Estufa",550);
    Producto p20("Lavadora",800);
    Producto p21;
        

    ArregloPro[0]=p1;
    ArregloPro[1]=p2;
    ArregloPro[2]=p3;
    ArregloPro[3]=p4;
    ArregloPro[4]=p5;
    ArregloPro[5]=p6;
    ArregloPro[6]=p7;
    ArregloPro[7]=p8;
    ArregloPro[8]=p9;
    ArregloPro[9]=p10;
    ArregloPro[10]=p11;
    ArregloPro[11]=p12;
    ArregloPro[12]=p13;
    ArregloPro[13]=p14;
    ArregloPro[14]=p15;
    ArregloPro[15]=p16;
    ArregloPro[16]=p17;
    ArregloPro[17]=p18;
    ArregloPro[18]=p19;
    ArregloPro[19]=p20;
    ArregloPro[20]=p21;


    cout<<"///////////////////////////////////////"<<endl;
    cout<<"Productos en abarrotes:"<<endl;

    for(int i=0;i<5;i++){
        cout<<i<<": ";
        ArregloPro[i].mostrar();
    }
    cout<<"///////////////////////////////////////"<<endl;
    cout<<"Productos en frutas y verduras:"<<endl;

    for(int j=5;j<10;j++){
        cout<<j<<": ";
        ArregloPro[j].mostrar();
    }
    cout<<"///////////////////////////////////////"<<endl;
    cout<<"Productos en Panaderia:"<<endl;

    for(int h=10;h<15;h++){
        cout<<h<<": ";
        ArregloPro[h].mostrar();
    }
    cout<<"///////////////////////////////////////"<<endl;
    cout<<"Productos en electronicos"<<endl;
    for(int p=15;p<20;p++){
        cout<<p<<": ";
        ArregloPro[p].mostrar();
    }

    


    int op1,op2,op3,op4,op5;
    cout<<"Ingrese solo el numero de la opcion para guardarlo en el carrito"<<endl;
    cout<<"(Maximo de articulos en el carrito 5)"<<endl;
    cout<<"Si quiere dejar espacios vacios en el carrito ingrese 20"<<endl;
    cin>>op1;
    cout<<"Producto agregado: ";
    ArregloPro[op1].mostrar();
    cin>>op2;
    cout<<"Producto agregado: ";
    ArregloPro[op2].mostrar();
    cin>>op3;
    cout<<"Producto agregado: ";
    ArregloPro[op3].mostrar();
    cin>>op4;
    cout<<"Producto agregado: ";
    ArregloPro[op4].mostrar();
    cin>>op5;
    cout<<"Producto agregado: ";
    ArregloPro[op5].mostrar();

    Carrito Carro(ArregloPro[op1],ArregloPro[op2],ArregloPro[op3],ArregloPro[op4],ArregloPro[op5]);
    Carro.subtotal();

}
Super::~Super(){  
}
