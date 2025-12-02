//Move Zeroes to end of array

//Brute-force Approach:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int> temp;
       int n=nums.size();

       for(int i=0;i<n;i++){
            if(nums[i]!=0)
                temp.push_back(nums[i]);
       }

        int nz = temp.size();
        for(int i=0;i<nz;i++){
            nums[i]=temp[i];
        }

        for(int i=nz;i<n;i++){
            nums[i]=0;
        }

        return nums;

    }
};


//Optimal Approach:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int j=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
      }
    }
};