#include <iostream>
#include <sstream>

using namespace std;

string GetLine();
bool GetBoolean();

int main() {
    cout << "Enter boolean value:" << endl;
    cout << boolalpha << GetBoolean() << endl;
}

bool GetBoolean() {
    while(true) {
        stringstream converter;

        converter <<boolalpha << GetLine();

        // Try reading a bool, continue if we succeeded. */
        bool result;
        if (converter >> result) {
            char remaining;
            if (converter >> remaining) // Something's left, input is invalid
                cout << "Unexpected character: " << remaining << endl;
            else
                return result;
        } else
            cout << "Please enter an boolean." << endl;

        cout << "Retry: ";
    }
}

string GetLine() {
    string result;
    getline(cin, result);
    return result;
}

