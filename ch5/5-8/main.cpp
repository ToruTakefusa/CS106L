#include <iostream>
#include <deque>
#include <vector>
#include <ctime>

using namespace std;

clock_t ExperimentDec();
clock_t ExperimentVectorWithReserve();
clock_t ExperimentVector();

const int SIZE = 5012;

int main() {
    cout << "dec: " << ExperimentDec() << endl;
    cout << "vectorWithReserve: " << ExperimentVectorWithReserve() << endl;
    cout << "vector: " << ExperimentVector() << endl;
}

clock_t ExperimentDec() {
    clock_t startTime = clock();
    deque<string> dec;
    for(int i = 0; i < SIZE; ++i) {
        dec.push_back("s");
    }
    return clock() - startTime;
}

clock_t ExperimentVectorWithReserve() {
    clock_t startTime = clock();
    vector<string> vec;
    vec.reserve(SIZE);
    for(int i = 0; i < SIZE; ++i) {
        vec.push_back("s");
    }
    return clock() - startTime;
}

clock_t ExperimentVector() {
    clock_t startTime = clock();
    vector<string> vec;
    for(int i = 0; i < SIZE; ++i ) {
        vec.push_back("s");
    }
    return clock() - startTime;
}
