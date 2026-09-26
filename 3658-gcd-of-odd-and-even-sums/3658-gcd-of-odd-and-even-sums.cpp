class Solution {
public:
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
    int gcdOfOddEvenSums(int n) {
        int odd = 0;
        int even = 0;
        int countod = 0;
        int countevn = 0;
        for (int i = 0; i < INT_MAX; i++) {
            if(i%2==1)
            {
                odd+=i;countod++;
            }
            if(countod==n){
                break;
            }
        }
        for (int i = 0; i < INT_MAX; i++) {
            if(i%2==0)
            {
                even+=i;countevn++;
            }
            if(countevn==n){
                break;
            }
        }
        return gcd(odd,even);
    }
};