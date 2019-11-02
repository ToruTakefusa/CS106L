#include <iostream>
#include <map>
#include <set>

using namespace std;

size_t NumberDuplicateEntries(map<string, string> m1);

int main() {
    map<string, string> m1;
    m1["a"] = "a";
    m1["b"] = "b";
    m1["c"] = "c";
    m1["d"] = "d";
    m1["e"] = "e";
    m1["aa"] = "a";
    m1["bb"] = "b";
    m1["aaa"] = "a";

    cout << NumberDuplicateEntries(m1) << endl;
    return 0;
}

size_t NumberDuplicateEntries(map<string, string> m1) {
    set<string> values;
    size_t numDup = 0;

    for (map<string, string>::iterator itr = m1.begin(); itr != m1.end(); ++itr ) {
        if (values.count(itr->second)) {
            ++numDup;
        } else {
         values.insert(itr->second);
        }
    }

    return numDup;
}

