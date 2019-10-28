#include <iostream>
#include <iomanip>

using namespace std;

void DrawTriangle(int height, char character);

int main() {
    cout << "Input height of the rectanble.";
    int height;
    cin >> height;
    cout << "Input character to display.";
    char character;
    cin >> character;
    DrawTriangle(height, character);
}

void DrawTriangle(int height, char character) {
    int MAX_WIDTH = height * 2 - 1;
    int width, repeate;

    for (int i = 1; i < height + 1; ++i) {
        repeate = i * 2 - 1;
        width = (MAX_WIDTH - repeate) / 2;
        cout << setw(width) << "";
        cout << setfill(character) << setw(i * 2 - 1) << "" << setfill(' ');
        cout << setw(width) << "" << endl;
    }
}
