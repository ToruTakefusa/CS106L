#include <set>
#include <iostream>

using namespace std;

set<int> Union(set<int>& s1, set<int>& s2);

int main() {
    set<int> s1;
    set<int> s2;

    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);

    s2.insert(3);
    s2.insert(5);
    s2.insert(10);
    s2.insert(99);
    s2.insert(100);
    s2.insert(1000);

    set<int> s3 = Union(s1, s2);
    for (set<int>::iterator itr = s3.begin(); itr != s3.end(); ++itr) {
        cout << *itr << endl;
    }

    return 0;
}

set<int> Union(set<int>& s1, set<int>& s2) {
    set<int> values;

    for (set<int>::iterator itr = s1.begin(); itr != s1.end(); ++itr) {
        if (s2.count(*itr)) {
            values.insert(*itr);
        }
    }

    return values;
}
