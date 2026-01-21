#include <bits/stdc++.h>
using namespace std;

int kadane(const vector<int>& a) {
    int best = a[0], cur = a[0];
    for (int i = 1; i < (int)a.size(); i++) {
        cur = max(a[i], cur + a[i]);
        best = max(best, cur);
    }
    return best;
}

int main() {
    vector<int> a = {-2,-5,6,-2,-3,1,5,-6};
    cout << kadane(a) << "\n";

    // output: 7
    return 0;
}