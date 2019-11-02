#include <iostream>
#include <map>

using namespace std;
map<string, string> ComposeMaps(map<string, string> m1, map<string, string> m2);

int main() {
    map<string, string> m1, m2;
    m1["1"] = "a";
    m1["2"] = "b";
    m1["3"] = "c";
    m1["4"] = "d";
    m1["5"] = "e";
    m1["99"] = "o";

    m2["a"] = "aa";
    m2["e"] = "ee";
    m2["f"] ="gh";

    map<string, string> compose = ComposeMaps(m1, m2);

    for(map<string, string>::iterator itr = compose.begin(); itr != compose.end(); ++itr) {
        cout << itr->first << ": " << itr->second << endl;
    }

    return 0;
}

map<string, string> ComposeMaps(map<string, string> m1, map<string, string> m2) {
    map<string, string> compose;
    for(map<string, string>::iterator itr = m1.begin(); itr != m1.end(); ++itr) {
        if(m2.count(itr->second)) {
            compose.insert(make_pair(itr->first, m2.find(itr->second)->second));
        }
    }
    return compose;
}

