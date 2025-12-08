// Count Square sum triples

class Solution {
public:
    int countTriples(int n) {
        int cnt=0;

        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                int sum = (i*i)+(j*j);
                int x = sqrt(sum);

                if(x*x == sum && x<=n){
                    cnt += 2;
                }
            }
        }
        return cnt;
    }
};