#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 0;
    for (int i = 1; i < n; i++) {
        s = s^i;
        int inp;
        cin >> inp;
        s = s^inp;
    }
    s = s^n;
    cout << s << endl;
}