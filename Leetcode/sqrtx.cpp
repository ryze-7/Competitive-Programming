class Solution {
public:
    int mySqrt(int x) {
        long long l=0, h=x;
        long long mid;

        while(h-l>1) {
            mid = (h+l)/2;
            if(mid*mid < x) {
                l=mid;
            }
            else {
                h=mid;
            }
        }
        if (h*h == x) {
            return h;
        }
        return l;
    }
};