#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    string s;
    cin >> s;
    long long n = s.size();

    vector<long long> v;
    multiset<long long> ms;

    for (auto i : s) {
        v.pb(i - '0');
    }

    // Prefix array which is storing the min element in the right
    vector<long long> pref(n);
    long long mn = v[n - 1];

    for (int i = n - 1; i >= 0; i--) {
        mn = min(mn, v[i]);
        pref[i] = mn;
    }

    for(int i =0; i<n; i++) {
        if (v[i] == pref[i]) {
            ms.insert(v[i]);
        } else {
            ms.insert(min((v[i] + 1), 9ll));
        }
    }
    
    for (auto i : ms) {
        cout << i;
    } cout << endl;
}


int main() {

    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
