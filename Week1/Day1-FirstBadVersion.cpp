// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int l=0;
        int u=n;
        unsigned int mid;
        while(l<=u)
        {
            mid=(unsigned int)l+u;
            mid/=2;
            if(mid+1<=n && isBadVersion(mid)==false)
            {
                if(isBadVersion(mid+1))
                    return mid+1;
                else
                    l=mid+1;
            }
            else if(isBadVersion(mid)==true)
                u=mid;
            
        }
        return mid;
    }
};
