#include <iostream>
#include <deque>

using namespace std;

void CursorClockwise(deque<int>& ringBuffer);
void CursorCounterClockwise(deque<int>& ringBuffer);
int CursorRead(deque<int>& ringBuffer);
void CursorWrite(deque<int>& ringBuffer, int value);

int main() {
    deque<int> ringBuffer;
    ringBuffer.push_back(3);
    ringBuffer.push_back(4);
    ringBuffer.push_back(5);
    ringBuffer.push_back(6);
    ringBuffer.push_back(7);
    ringBuffer.push_back(8);
    ringBuffer.push_back(9);
    ringBuffer.push_back(10);
    ringBuffer.push_back(11);
    ringBuffer.push_back(0);
    ringBuffer.push_back(1);
    ringBuffer.push_back(2);
    CursorClockwise(ringBuffer);
    cout << CursorRead(ringBuffer) << endl;
    CursorCounterClockwise(ringBuffer);
    cout << CursorRead(ringBuffer) << endl;
    CursorWrite(ringBuffer, 5);
    cout << CursorRead(ringBuffer) << endl;
}

void CursorClockwise(deque<int>& ringBuffer) {
    int value = ringBuffer.back();
    ringBuffer.pop_back();
    ringBuffer.push_front(value);
    return;
}

void CursorCounterClockwise(deque<int>& ringBuffer) {
    int content = ringBuffer.front();
    ringBuffer.pop_front();
    ringBuffer.push_back(content);
    return;
}

int CursorRead(deque<int>& ringBuffer) {
    return ringBuffer.front();
}

void CursorWrite(deque<int>& ringBuffer, int value) {
    ringBuffer.front() = value;
}
