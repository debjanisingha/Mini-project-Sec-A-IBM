#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;

    if(num%2==0)
    {
        cout<<"Even number"<<endl;

    }
    else
    {
        cout<<"Odd number"<<endl;

    }
    if(num%5==0)
    {
        cout<<"Divisible by 5"<<endl;

    }
    else{
        cout<<"Not divisible by 5"<<endl;

    }
    return 0;

}