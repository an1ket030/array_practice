//Rearrange Array Elements by Sign:


//Optimal Approach:

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int pos = 0; // next even index for positives
        int neg = 1; // next odd index for negatives

        for (int x : nums) {
            if (x > 0) {
                res[pos] = x;
                pos += 2;
            } else {
                res[neg] = x;
                neg += 2;
            }
        }
        return res;
    }
};
