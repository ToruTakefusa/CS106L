#include <iostream>
#include <set>

using namespace std;

int DieRoll();
size_t RunProcess();

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    cout << RunProcess() << endl;
    return 1;
}

/* Rolls a six-sided die and returns the number that came up. */
int DieRoll() {
    return (rand() % 6) + 1;
}

size_t RunProcess(){
    multiset<int> generated;

    while (true) {
        int nextValue = DieRoll();

        /* Check if this value has been rolled before. */
        if (generated.count(nextValue) == 2) return generated.size() + 1;

        /* Otherwise, add this value to the set. */
        generated.insert(nextValue);
    }
}

