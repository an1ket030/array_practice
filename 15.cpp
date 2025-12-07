// Majority Element

//Brute Force Approach:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int i=0; i< nums.size(); i++){
            int cnt = 0;
            for(int j=0; j< nums.size(); j++){
                if(nums[j]==nums[i]){
                    cnt++;
                }
            }
            if(cnt> (nums.size()/2)) return nums[i];
        }
        return nums[0];
    }
};


//Optimal Approach:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt =0;
        int el;
        for(int i=0; i< nums.size(); i++){
            if(cnt ==0){
                cnt =1;
                el = nums[i];
            }else if(nums[i] == el){
                cnt++;
            }
            else{
                cnt--;
            }
            
        }
        int cnt1 =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==el) cnt1++;
        }
        if (cnt1 > (nums.size()/2)) return el;
        return -1;
    }
};