#include<math.h>
// /**
//  ** In line f-je preporuka kompajleru da se na mestu poziva f-je umetne njen kod cime se vrsi usteda.
//  ** D je f-ja inline oznacavamo prefiksom inline i koristi se samo kod jako malih  f-ja
//  ** f-je koju su definisane unutar definicije klase su inline
// **/
// /*
//    Realizovati klasu Trougao koja ima tri privatna atributa a,b i c (realne vrednosti)
//    i metode: inicijalizacija(a,b,c) postavlja vrednosti atributa na vrednosti argumenata;
//    pisi - metoda koja ispisuje podatke o atributima a,b i c;
//    P() - metoda koja racuna povrsinu trougla; O() racuna i vraca obim trougla;
// */
// class Trougao{
// 	double a,b,c;         //atributi klase stranice trougla
// public:
// 	void inic(double a,double b, double c); //prototip metode za inicijalizaciju atributa
// 	void pisi();                            //prototip metode za ispis
// 	double P();                             //prototip metode za racunanje povrsine
// 	double O(){
// 	return(a+b+c);
// 	}
// };
// void Trougao::inic(double a,double b, double c){
//    this->a=a;  // koristi se pokazivac this jer atributi i argumenti imaju isto ime
//    this->b=b;
//    this->c=c;
// }
// void Trougao::pisi(){
//   cout<<"Duzine stranica su a="<<a<<endl<<"\t\t   b="<<b<<endl<<"\t\t   c="<<c<<endl;

// }
// double Trougao::P(){
//    double s=(a+b+c)/2;
//    return sqrt(s*(s-a)*(s-b)*(s-c));
// }
// void main(){
// Trougao t;
// t.inic(5,3,7);
// t.pisi();
// cout<<"O= "<<t.O()<<" P= "<<t.P()<<endl;

// }