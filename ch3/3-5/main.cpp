#include <iostream>
#include <sstream>

using namespace std;

string intToString(int value);

int main() {
    cout << intToString(1) << endl;
}

/**
 * @brief intToString
 * Convert integer to string.
 * @param value
 * integer value which will be converted to string.
 * @return
 */
string intToString(int value) {
    stringstream converter;
    string retvalue;
    if (converter << value) {
        // I dno't know this will happen, but just in case.
        char remaining;
        if ((converter >> retvalue) && (converter >> remaining)) {
            cerr << "Unexpected character";
        }
    } else {
        // I don't know this will happen, but just in case.
        cerr << "Unexpected agrument.";
    }
    return retvalue;
}

