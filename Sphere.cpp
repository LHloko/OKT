#include <bits/stdc++.h>
using namespace std;

int main(){
    double pi = 3.14159;
    int r; cin>>r;

    double volume = pow(r,3)*pi*(4/3.0);

    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<volume<<endl;

    return 0;
}