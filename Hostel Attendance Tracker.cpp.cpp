#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    const int m = 7;
    int A[n][m];

    // Input attendance
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    int studentTotal[n] = {0};
    int dayTotal[m] = {0};

    // Calculate totals
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            studentTotal[i] += A[i][j];
            dayTotal[j] += A[i][j];
        }
    }

    cout << "Weekly Attendance Summary\n";
    cout << "-------------------------\n\n";
    cout << "Total Present Days:\n";

    for(int i = 0; i < n; i++) {
        cout << "Student " << i+1 << ": " << studentTotal[i] << "\n";
    }

    // Find highest attendance student (lower student number wins tie automatically)
    int maxStudent = 0;
    int maxAttendance = studentTotal[0];

    for(int i = 1; i < n; i++) {
        if(studentTotal[i] > maxAttendance) {
            maxAttendance = studentTotal[i];
            maxStudent = i;
        }
    }

    cout << "\nStudent with Highest Attendance: Student " 
         << maxStudent+1 << " (" << maxAttendance << " Days)\n";

    // Find day with lowest overall attendance
    int minDay = 0;
    int minAttendance = dayTotal[0];

    for(int j = 1; j < m; j++) {
        if(dayTotal[j] < minAttendance) {
            minAttendance = dayTotal[j];
            minDay = j;
        }
    }

    cout << "Day with Lowest Overall Attendance: Day " << minDay+1 << "\n";

    return 0;
}
