//Left rotate an array by d places

class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;

        reverse(arr.begin(), arr.begin() + d);  // Reverse first d
        reverse(arr.begin() + d, arr.end());    // Reverse remaining
        reverse(arr.begin(), arr.end());        // Reverse whole array
    }
};
