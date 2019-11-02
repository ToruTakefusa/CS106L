#include <iostream>
#include <set>

using namespace std;

set<int> Intersection(set<int>s1, set<int> s2);

int main() {
    set<int> s1, s2;
    s1.insert(1);
    s1.insert(3);
    s1.insert(5);
    s2.insert(2);
    s2.insert(4);
    s2.insert(6);
    s2.insert(5);
    s1.insert(100);

    set<int> s3 = Intersection(s1, s2);

    for(set<int>::iterator itr = s3.begin(); itr != s3.end(); ++itr) {
        cout << *itr << endl;
    }
}

set<int> Intersection(set<int>s1, set<int> s2) {
    set<int> s3;

    for (set<int>::iterator itr = s1.begin(); itr != s1.end(); ++itr) {
        s3.insert(*itr);
    }

    for (set<int>::iterator itr = s2.begin(); itr != s2.end(); ++itr) {
        s3.insert(*itr);
    }

    return s3;
}
