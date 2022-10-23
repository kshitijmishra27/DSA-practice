class Solution {
public:
  vector<int> findErrorNums(vector<int>& nums) {
        // support variables
        int len = nums.size(), tot = 0;
        bool seen[len + 1];
        vector<int> res(2);
        // preparing seen
        for (int i = 1; i <= len; i++) seen[i] = false;
        // parsing nums and finding the first part of res and to compute tot
        for (int i: nums) {
            tot += i;
            seen[i] = (!seen[i] || bool(1 + (res[0] = i)));
        }
        // computing the second part of res
        res[1] = len * (len + 1) / 2 - tot + res[0];
        return res;
    }
};