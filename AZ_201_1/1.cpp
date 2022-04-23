//Algozenith
//22 april
//Students and Grades


#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    short int T;
    cin >> T;
    while (T--) {
        unsigned int N, M;
        cin >> N >> M;
        unordered_set<int> lister;
        while (N--) {
            int temp;
            cin >> temp;
            if (lister.find(temp) == lister.end()) {
                lister.insert(temp);
            }
        }
        while(M--) {
            int temp;
            cin >> temp;
            if (lister.find(temp) == lister.end()) {
                cout << "NO" << endl;
                lister.insert(temp);
            }
            else {
                cout << "YES" << endl;
            }
        }
    }
    


//solved by: fLanKer42