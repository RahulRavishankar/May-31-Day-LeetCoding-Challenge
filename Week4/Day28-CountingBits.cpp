class Solution {
public:
    int highestPowerof2(int n) 
    { 
       int p = (int)log2(n); 
       return (int)pow(2, p);  
    } 
    vector<int> countBits(int num) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        vector<int> result(num+1,0);
        if(num==0)
            return result;
        
        result[0]=0;
        result[1]=1;
        for(int i=2;i<=num;i++)
        {
            result[i]=1+result[i-highestPowerof2(i)];
        }
        return result;
    }
};
