class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
        
        int n=nums.size();
        int majority; int count=0;
        for(int i=0;i<n;++i)
        {
            if(count==0)
            {
                majority=nums[i];
                count++;
            }
            else if(nums[i]!=majority)
                --count;
            else
                ++count;
        }
        return majority;
    }
};
