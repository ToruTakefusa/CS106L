#include <iostream>
#include <map>

using namespace std;

multimap<string, string> InvertMap(map<string, string> m1);

int main() {
    map<string, string> m1;
    m1.insert(make_pair("a", "a"));
    m1.insert(make_pair("aa", "a"));
    m1.insert(make_pair("aaa", "a"));
    m1.insert(make_pair("b", "b"));
    m1.insert(make_pair("bb", "b"));
    m1.insert(make_pair("c", "c"));

    multimap<string, string> inverted = InvertMap(m1);
    for (multimap<string, string>::iterator itr = inverted.begin(); itr != inverted.end(); ++itr) {
        cout << itr->first << ": " << itr->second << endl;
    }
    return 0;
}


multimap<string, string> InvertMap(map<string, string> m1) {
    multimap<string, string> inverted;

    for(map<string, string>::iterator itr = m1.begin(); itr != m1.end(); ++itr) {
        inverted.insert(make_pair(itr->second, itr->first));
    }

    return inverted;
}
