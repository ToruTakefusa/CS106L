#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

string GetLine();
vector<string> LinesFromFile(string fileName);

int main() {
    cout << "Enter filename:";
    string filename = GetLine();

    vector<string> contents = LinesFromFile(filename);
    if (contents.size() == 0) cout << "Cannot read.";
    for(size_t i = 0; i < contents.size() ; i++) {
        cout << contents.at(i) << endl;
    }
}

vector<string> LinesFromFile(string fileName) {
    vector<string> contents;
    ifstream input;
    string content;

    input.open(fileName.c_str());
    if (!input.is_open()) return contents;

    while(true) {
        if (input.eof()) return contents;
        getline(input, content);
        contents.push_back(content);
    }
}

string GetLine() {
    string result;
    getline(cin, result);
    return result;
}
