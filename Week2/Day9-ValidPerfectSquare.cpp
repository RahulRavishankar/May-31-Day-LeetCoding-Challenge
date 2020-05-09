class Solution {
public:
    bool isPerfectSquare(int num) {
        long long temp;
        for(int i=1;(long long)i*i<=num;i++)
        {
            temp=(long long)(i*i);
            if(temp == num )
                return true;
        }
        return false;
    }
};
