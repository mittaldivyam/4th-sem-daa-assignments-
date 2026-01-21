#include <bits/stdc++.h>
using namespace std;

int bs(const vector<int>& a, int x) {
    int l = 0, r = (int)a.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == x) return m;
        if (a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    vector<int> a = {2,5,8,12,16,23,38,56,72,91};
    cout << bs(a, 23) << "\n";
    // output: 5
    return 0;
}
