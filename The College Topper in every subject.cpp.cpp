#include <iostream>
using namespace std;

int main() {
    const int students = 5;
    const int subjects = 3;
    int marks[students][subjects];

    cout << "Enter marks of 5 students in 3 subjects:\n\n";

    // Input marks
    for(int i = 0; i < students; i++) {
        cout << "Student " << i+1 << ": ";
        for(int j = 0; j < subjects; j++) {
            cin >> marks[i][j];
        }
    }

    int maxMath = marks[0][0];
    int maxPhysics = marks[0][1];
    int maxCS = marks[0][2];

    // Find highest in each subject (each column)
    for(int i = 1; i < students; i++) {
        if(marks[i][0] > maxMath)
            maxMath = marks[i][0];
        if(marks[i][1] > maxPhysics)
            maxPhysics = marks[i][1];
        if(marks[i][2] > maxCS)
            maxCS = marks[i][2];
    }

    cout << "\nHighest marks in Mathematics: " << maxMath << endl;
    cout << "Highest marks in Physics: " << maxPhysics << endl;
    cout << "Highest marks in Computer Science: " << maxCS << endl;

    return 0;
}
