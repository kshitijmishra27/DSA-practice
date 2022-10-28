#include <bits/stdc++.h>
using namespace std;
 
long long int gcd(long long int a, long long int b) {
    return (a%b?gcd(b,a%b):b);
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        long long int ans = 2, found = 0;
        long long int pre[n], suf[n];
        pre[0] = a[0];
        for(int i = 1; i < n; i++) pre[i] = gcd(pre[i - 1], a[i]);
        suf[n - 1] = a[n - 1];
        for(int i = n - 2; i > -1; i--) suf[i] = gcd(suf[i + 1], a[i]);
        vector<int> op;
        int first = 0;
        if(suf[1] != 1) ans--, found++, first++;
        if(pre[n - 2] != 1) ans--, found++;
        for(int i = 1; found < 2 && i < n - 1; i++)
            if(gcd(pre[i - 1], suf[i + 1]) != 1) op.push_back(i + 1), found++;
        if(found == 2) {
            cout << ans << "\n";
            if(ans == 1) {
                if(first) cout << op[0] << " " << n << "\n";
                else cout << 1 << " " << op[0] << "\n";
            } else if(ans == 2) {
                cout << 1 << " " << op[0] << "\n";
                cout << op[1] << " " << n << "\n";
            }
        }
        else cout << "-1\n";
    }
}