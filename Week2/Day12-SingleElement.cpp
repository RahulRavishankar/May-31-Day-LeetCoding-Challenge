class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int n=nums.size();
        int i=0;
        while(i<n-1 && nums[i]==nums[i+1])
            i+=2;
        
        return nums[i];
    }
};
