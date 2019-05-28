#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    srand(time(nullptr));

    vector<int> lottonum;
    while (lottonum.size() < 5) {
        int next = (rand() % 90) + 1; // 91 nincs benne
        if ( find(lottonum.begin(), lottonum.end(), next) == lottonum.end() ) {
            lottonum.push_back(next);
        }
    }

    sort(lottonum.begin(), lottonum.end());
    for (auto i: lottonum) {
        cout << i << ' ';
    }
    cout << endl;
}
