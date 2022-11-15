#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream file("text.txt");
    string s;
    int x = 0;

    while (getline(file, s, '\n')) {
        x++;
    }
    cout << x;

    return 0;
}