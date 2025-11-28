#include<iostream>
using namespace std;
int main()
{
    int a,b,r;
    cout<<"Enter the first digit ";
    cin>>a;
    cout<<"Enter the second digit ";
    cin>>b;
    
    int num1=a, num2=b;
    while (a%b!=0)
    {
        r = a%b;
        a=b;
        b=r;
    }

    cout<<"GCD is :"<<b<<endl;

    int LCM =(num1 *num2)/b;
    cout<<"LCM is :"<<LCM<<endl;
    return 0;

}

