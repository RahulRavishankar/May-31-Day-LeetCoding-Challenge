class Solution {
public:
    int Kadane(vector<int> &arr)
    {
        int n=arr.size();
        int sum=arr[0]; int ans=arr[0];
        for(int i=1;i<n;++i)
        {
            sum=max(arr[i],sum+arr[i]);
            ans=max(ans,sum);
        }
        return ans;
    }
    int maxSubarraySumCircular(vector<int>& arr) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int n=arr.size();
        int k=Kadane(arr);
        
        int circularSum=0; int curr=0;
        for(int i=0;i<n;++i)
        {
            circularSum+=arr[i];
            arr[i]=-arr[i];
        }
        circularSum+=Kadane(arr);
        if(circularSum>k && circularSum!=0)
            return circularSum;
        else
            return k;
    }
};
