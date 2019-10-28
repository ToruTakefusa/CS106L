#include <iostream>
#include <sstream>

using namespace  std;

bool HasHexLetters(int value);
string GetLine();

int main() {
    cout << hex << 9 << endl;
    cout << boolalpha << HasHexLetters(9) << endl;
    cout << hex << 15 << endl;
    cout << boolalpha << HasHexLetters(15) << endl;
}

bool HasHexLetters(int value) {
    stringstream converter;
    converter << hex << value;

    int tmpval;
    if (!(converter >> dec >> tmpval))
        return true;

    char remaining;
    if (converter >> remaining)
        return true;
    return false;
}

string GetLine() {
    string result;
    getline(cin, result);
    return result;
}
