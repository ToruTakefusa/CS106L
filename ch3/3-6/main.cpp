#include <iostream>
#include <sstream>

using namespace std;

double GetReal();
string GetLine();

int main() {
    cout << GetReal() << endl;
}

double GetReal() {
    while(true) { // Read input until user enters valid data
        stringstream converter;
        converter << GetLine();

        /* Try reading an int, continue if we suceeded. */
        double result;
        if(converter >> result) {
            char remaining;
            if(converter >> remaining) // Something's left, input is invalid
                cout << "Unexpected character: " << remaining <<endl;
            else
                return result;
        } else
            cout << "Please enter an real number." << endl;

        cout << "Retry: ";
    }
}

string GetLine() {
    string result;
    getline(cin, result);
    return result;
}
