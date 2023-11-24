#include <bits/stdc++.h>
using namespace std;

int main(){
    int code, units;
    float price;
    float pay = 0; 

    cin>> code>> units>> price;
    pay += units*price;

    cin>> code>> units>> price;
    pay += units*price;

    cout<<fixed<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<pay<<endl;

    return 0;
}