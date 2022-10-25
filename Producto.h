#include <iostream>
using namespace std;
 class Producto
 {
 private:
     string pro;
     int precio_p1;

 public:
    Producto();
    Producto(string pro,int precio_p1);
    ~Producto();
    void mostrar();
    string getp1();
    int getprecio_p1();
    
 };
 Producto::Producto(){
     pro="Vacio";
     precio_p1=0;

 }
Producto::Producto(string p1,int precio_p1){
    this->pro=p1;
    this->precio_p1=precio_p1;
 }
string Producto::getp1(){
    return pro;
}
int Producto::getprecio_p1(){
    return precio_p1;
}

void Producto::mostrar(){
    cout<<pro<< "         "<<"$ "<<precio_p1<<endl;
 }

 Producto::~Producto(){
 }
