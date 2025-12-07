//Median of two sorted arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);
        int m = nums1.size(), n = nums2.size(), half = (m + n + 1) / 2;
        int l = 0, r = m;
        while (l <= r) {
            int i = (l + r) / 2;
            int j = half - i;
            int Aleft  = i ? nums1[i - 1] : INT_MIN;
            int Aright = (i < m) ? nums1[i] : INT_MAX;
            int Bleft  = j ? nums2[j - 1] : INT_MIN;
            int Bright = (j < n) ? nums2[j] : INT_MAX;
            if (Aleft <= Bright && Bleft <= Aright) {
                if ((m + n) % 2) return (double)max(Aleft, Bleft);
                return ((double)max(Aleft, Bleft) + (double)min(Aright, Bright)) / 2.0;
            }
            if (Aleft > Bright) r = i - 1;
            else l = i + 1;
        }
        return 0.0;
    }
};