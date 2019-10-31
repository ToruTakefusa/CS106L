#include <iostream>
#include <vector>

using namespace std;

size_t InsertionIndex(vector<int>& v, int toInsert);
int GetInteger();

int main() {
    int kNumValues = 10;
    vector<int> values;

    /* Read the values. */
    for (int i= 0; i < kNumValues; ++i) {
        cout << "Enter another value:";
        int val = GetInteger();
        values.insert(values.begin() + InsertionIndex(values, val), val);
    }

    /* Print out the sorted list. */
    for (size_t i = 0; i < values.size(); ++i)
        cout << values[i] << endl;
}

size_t InsertionIndex(vector<int>& v, int toInsert) {
    for(size_t i = 0; i < v.size(); ++i) {
        if (toInsert > v[i])
            return i;
    }
    return v.size();
}

int GetInteger() {
    int i;
    cin >> i;
    return i;
}
