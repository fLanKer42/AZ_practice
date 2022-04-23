//Algozenith
//23 april
//Buy Maximum Objects - I

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N;
        vector<int> A;
        while (N--) {
            int t1;
            cin >> t1;
            A.push_back(t1);
        }
        sort(A.begin(), A.end());
        int sum = 0;
        int count = 0;
        cin >> M;
        for (int i = 0; i < A.size(); i++) {
            sum += A[i];
            if (sum > M) {
                break;
            }
            else {
                count++;
            }
        }
        cout << count;
    }
}

//solved by: fLAnKer42
