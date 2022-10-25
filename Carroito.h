#include <iostream>
#include "Producto.h" 

using namespace std;
class Carrito{
    private: 
    Producto p1;
    Producto p2;
    Producto p3;
    Producto p4;
    Producto p5;
        
    
    public:
        Carrito();
        Carrito(Producto p1,Producto p2,Producto p3,Producto p4,Producto p5);
        ~Carrito();
        void subtotal();


};


Carrito::Carrito(){
    p1= Producto (" ",0);
    p2= Producto (" ",0);
    p3= Producto (" ",0);
    p4= Producto (" ",0);
    p5= Producto (" ",0);
}

Carrito::Carrito(Producto p1,Producto p2,Producto p3,Producto p4,Producto p5){
    this->p1=p1;
    this->p2=p2;
    this->p3=p3;
    this->p4=p4;
    this->p5=p5;

}

void Carrito::subtotal(){
    int precio_tot;
    precio_tot= p1.getprecio_p1()+p2.getprecio_p1()+p3.getprecio_p1()+p4.getprecio_p1()+p5.getprecio_p1();
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Los prouctos en el carrito son : 1."<<p1.getp1()<<"    2."<<p2.getp1()<<"    3."<<p3.getp1()<<"    4."<<p4.getp1()<<"    5."<<p5.getp1();
    cout<<endl;

    cout<<"El total de la cuenta seria de:  $"<<precio_tot<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Tarjeta de credito: xxxx xxxx xxxx 8102"<<endl;
    cout<<"Procesando pago..."<<endl;
    cout<<"Pago realizado"<<endl;
    cout<<"Gracias por su compra"<<endl;
    cout<<"Super 'Don carlos'"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
}
Carrito::~Carrito(){
}
