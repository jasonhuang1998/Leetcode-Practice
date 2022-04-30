class Solution {
public:
    int reverse(int x) {
        int negative = 0;
        double ans = 0;
        double x1 = x;
        if(x1 < 0)
        {
            negative = 1;
            x1 = x1 * -1;
        }
        while(x1/10 >=1)
        {
            ans = ans * 10 + (int)fmod(x1, 10);
            x1/=10;
        }
        ans = ans * 10 + (int)fmod(x1, 10);
        
        if(ans > pow(2, 31))
            return 0;
        else if(negative == 1)
            return -1*ans;
        else
            return ans;
        
    }
};