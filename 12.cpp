//Longest Subarray with Sum K(only for non-negative numbers)

//Optimized Approach (Sliding Window Technique):

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int left=0; 
        int right=0;
        int n= nums.size();
        long long sum= nums[0];
        int maxlen=0;

        while(right<n){
            while(left<=right && sum>k){
                sum -= nums[left];
                left++;
            }
            if(sum==k) maxlen= max(maxlen, right-left+1);

            right++;
            if(right<k) sum += nums[right];
        }
        return maxlen;
    }
};