class Solution {
public:
    bool ok(vector<int> &A, vector<int> &B) {
        for(int i=0;i<128;i++) {
            if(A[i]<B[i]) return 0;
        }
        return 1;
    }
    string minWindow(string s, string t) {
        if(t.size() > s.size()) return "";
        if(s==t) return s;
        int lo=0, hi=0, n=s.size(), ans=1e9;
        string res;
        vector<int> A(128, 0), B(128, 0);
        for(auto x: t) B[x]++;
        while(hi<n) {
            A[s[hi]]++;
            while(ok(A, B)) {
                if(ans>(hi-lo+1)) {
                    ans=hi-lo+1;
                    res=s.substr(lo, hi-lo+1);
                }
                A[s[lo++]]--;
            }
            hi++;
        }
        return res;
    }
};