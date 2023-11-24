#include <bits/stdc++.h>
using namespace std;

int main(){
    int number, hour; cin>>number>>hour;
    float amount; cin>>amount;

    cout<<"NUMBER = "<<number<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"SALARY = U$ "<<amount*hour<<endl;

    return 0;
}