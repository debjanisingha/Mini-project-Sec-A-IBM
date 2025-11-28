#include <iostream>
using namespace std;
int main(){
    int length;
    int width;
    cout<<"Enter length"<<endl;
    cin>>length;
    cout<<"Enter width"<<endl;
    cin>>width;


    int area;
    area=length*width;
    int perimeter;
    perimeter=2*(length+width);

    cout<<"Area="<<area<<endl;
    cout<<"perimeter="<<perimeter<<endl;

    return 0;



}
