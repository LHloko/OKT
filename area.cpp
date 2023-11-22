#include <bits/stdc++.h>
using namespace std;

int main(){
    float A,B,C;
    cin >> A>>B>>C;

    float pi = 3.14159;

    float triangulo, retangulo, trapezio, quadrado, circulo;

    quadrado = B*B;
    retangulo = A*B;
    trapezio = C*((A+B)/2);
    circulo = C*C*pi;
    triangulo = A*C/2;

    cout<< fixed << setprecision(3);
    cout<< "TRIANGULO: "<<triangulo<<endl;
    cout<< "CIRCULO: "<<circulo<<endl;
    cout<< "TRAPEZIO: "<<trapezio<<endl;
    cout<< "QUADRADO: "<<quadrado<<endl;
    cout<< "RETANGULO: "<<retangulo<<endl;

    return 0;
}