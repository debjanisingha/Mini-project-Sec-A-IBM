#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    double celcius;
    double fahrenheit;
    cout<<"Enter the temp in celcius"<<endl;
    cin>>celcius;

    fahrenheit=(celcius*9/5)+32;

    cout<< fixed << setprecision(2);

    cout<<"The temp in Fahrenheit is:"<<fahrenheit<<endl;

    return 0;

}