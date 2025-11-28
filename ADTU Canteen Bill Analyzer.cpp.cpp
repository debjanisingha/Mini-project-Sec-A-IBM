#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int bill[n][m];

    // Input bills
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> bill[i][j];
        }
    }

    int studentTotal[n] = {0};
    int dayTotal[m] = {0};

    // Calculate totals
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];
        }
    }

    // Print student totals
    for(int i = 0; i < n; i++) {
        cout << "Student " << i+1 << " total: ₹" << studentTotal[i] << endl;
    }

    // Find highest collection day
    int maxDay = 0;
    for(int j = 1; j < m; j++) {
        if(dayTotal[j] > dayTotal[maxDay]) {
            maxDay = j;
        }
    }
    cout << "\nHighest collection on Day " << maxDay+1 << endl;

    // Find highest spender
    int maxSpend = studentTotal[0];
    for(int i = 1; i < n; i++) {
        if(studentTotal[i] > maxSpend) {
            maxSpend = studentTotal[i];
        }
    }

    cout << "Highest spender: ";
    bool first = true;
    for(int i = 0; i < n; i++) {
        if(studentTotal[i] == maxSpend) {
            if(!first) cout << " and ";
            cout << "Student " << i+1;
            first = false;
        }
    }

    cout << endl;
    return 0;
}
