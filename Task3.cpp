#include <iostream>

using namespace std;

int main() {
    string number;
    cin >> number;

    for (int i = 0; i < number.size(); i++) {
        for (int j = i + 1; j < number.size(); j++) {
            if (number[i] == number[j]) {
                cout << "true";
                return 0;
            }
        }
    }
    cout << "false";
    return 0;
}