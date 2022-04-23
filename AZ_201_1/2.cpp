//Algozenith
//22 april
//Maximum in window

#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int K, N;
        cin >> N >> K;
        vector<int> A;
        while (N--) {
            int temp;
            cin >> temp;
            A.push_back(temp);
        }
        deque<int> L;
        for (int i = 0; i < K; i++) {
            while (!L.empty() && L.back() < A[i]) {
                L.pop_back();
            }
            L.push_back(A[i]);
        }
        for (int i = 0; i < N - K; i++) {
            cout << L.front();
            if (L.front() == A[i]) L.pop_front();
            while (!L.empty() && L.back() < A[i+K]) {
                L.pop_back();
            }
            L.push_back(A[i+K]);
        }
        cout << L.front();
    }
}


//solved by: fLanKer42