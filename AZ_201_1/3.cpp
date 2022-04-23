//Algozenith
//23 april
//Collisions



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N,M;
        cin >> N >> M;
        vector<pair<int,int>> X, Y;
        for (int i = 0; i < N; i++) {
            int t1,t2;
            cin >> t1 >> t2;
            X.push_back(make_pair(t1,t1*t2));
        }
        sort(X.begin(), X.end());
        for (int i = 0; i < M; i++) {
            int t1,t2;
            cin >> t1 >> t2;
            Y.push_back(make_pair(t1,t1*t2));
        }
        sort(Y.begin(), Y.end());
        int count = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (X[i].second == Y[j].second) {
                    count++;
                    Y[j].second = 0;
                    break;
                }
            }
        }
        cout << count;
    }
}


//solved by: fLanKer42