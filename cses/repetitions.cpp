#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int curr = 0;
    int maxe = 0;
    char prev = 'W';
    for (char c : s) {
        if (c == prev) {
            curr++;
            maxe = max(maxe,curr);
        }
        else {
            curr = 1;
            maxe = max(maxe, curr);
            prev = c;
        }
    }
    cout << maxe << endl;
}