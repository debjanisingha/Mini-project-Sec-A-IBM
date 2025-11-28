#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    string reverseWord = "";
    
    for (int i = word.length() - 1; i >= 0; i--) {
        reverseWord += word[i];
    }

    
    if (word == reverseWord) {
        cout << "Perfect Secret Word" << endl;
    } else {
        cout << "Not a Secret Word" << endl;
    }

    return 0;
}
