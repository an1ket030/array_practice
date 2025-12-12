//Set matrix Zero
//Refer notes for this

class Solution {
public:
    void setZeroes(vector<vector<int>>& A) {
         if (A.empty()) return;
        int m = A.size(), n = A[0].size();
        bool r0 = false, c0 = false;
        for (int j=0;j<n;++j) if (A[0][j]==0) { r0=true; break; }
        for (int i=0;i<m;++i) if (A[i][0]==0) { c0=true; break; }
        for (int i=1;i<m;++i) for (int j=1;j<n;++j) if (A[i][j]==0) A[i][0]=A[0][j]=0;
        for (int i=1;i<m;++i) for (int j=1;j<n;++j) if (A[i][0]==0 || A[0][j]==0) A[i][j]=0;
        if (r0) for (int j=0;j<n;++j) A[0][j]=0;
        if (c0) for (int i=0;i<m;++i) A[i][0]=0;
    }
};