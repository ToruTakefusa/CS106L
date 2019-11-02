#include <iostream>
#include <set>

using namespace std;

int GetInteger();

int main() {
    int kNumValues = 10;
    multiset<int> values;

    for (int i = 0; i< kNumValues; ++i) {
        cout <<"Enter another value: ";
        values.insert(GetInteger());
    }

    for (multiset<int>::iterator itr = values.begin(); itr != values.end(); ++itr) {
        cout << *itr << endl;
    }
}

int GetInteger() {
    int i;
    cin >> i;
    return i;
}
