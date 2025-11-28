#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  
    
    int present = 0, absent = 0;
    int status;//it basically stores one attendance input at a time inside the loop
    
    for (int i = 0; i < n; i++) {
        cin >> status;  
        
        if (status == 1)
            present++;
        else if (status == 0)
            absent++;
    }
    
    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;

    return 0;
}

























