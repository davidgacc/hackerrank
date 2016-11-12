#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int main() {
    queue<int> arr;
    int q, type, x;
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            arr.push(x);
        }
        else if(type == 2) {
            arr.pop();
        }
        else cout << arr.front() << endl;
    }
    return 0;
}