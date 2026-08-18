#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(9);
    q.push(19);
    q.push(8);
    q.push(7);
    q.push(6);

    cout << q.top();
}