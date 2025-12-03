//Missing number in array

//Brute-force Approach:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();

        for(int i=0;i<=n;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(nums[j]== i){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return i;
            }
        }
        return -1;
    }
};

//Optimal Approach:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();

        int xr=0;
        for(int i=0; i<=n;++i) xr^=i;
        for(int x:nums) xr^=x; 
        
        return xr;
    }
};