#include <bits/stdc++.h>
using namespace std;

void swp(int &x, int &y) { int t = x; x = y; y = t; }

int part(vector<int>& a, int l, int r) {
    int pivot = a[r];
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (a[j] <= pivot) {
            i++;
            swp(a[i], a[j]);
        }
    }
    swp(a[i + 1], a[r]);
    return i + 1;
}

void qs(vector<int>& a, int l, int r) {
    if (l >= r) return;
    int p = part(a, l, r);
    qs(a, l, p - 1);
    qs(a, p + 1, r);
}

int main() {
    vector<int> a = {4,2,6,9,2};
    qs(a, 0, (int)a.size() - 1);
    for (int x : a) cout << x << " ";
    cout << "\n";

    // output: 2 2 4 6 9
    return 0;
}