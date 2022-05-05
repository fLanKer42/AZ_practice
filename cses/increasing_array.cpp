#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int t;
    cin >> t;
    long long int cl = 0;
    for (int i = 1; i < n; i++) {
        int g;
        cin >> g;
        if (g >= t) {
            t = g;
            continue;
        }
        else {
            cl += (t-g);
        }
    }
    cout << cl << endl;
}