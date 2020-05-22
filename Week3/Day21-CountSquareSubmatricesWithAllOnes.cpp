class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        int n=matrix.size();
        if(n==0)
            return 0;
        int m=matrix[0].size();
        vector<vector<int> > dp(n,vector<int>(m,0));
        int res=0;
        
        for(int i=1;i<m;++i)
        {
            if(matrix[0][i]==1)
                dp[0][i]=1;
            res+=dp[0][i];
        }
        for(int i=0;i<n;++i)
        {
            if(matrix[i][0]==1)
                dp[i][0]=1;
            res+=dp[i][0];
        }
        for(int i=1;i<n;++i)
        {
            for(int j=1;j<m;++j)
            {
                if(matrix[i][j]==1)
                    dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]) +1;

                res+=dp[i][j];
            }
        }
        return res;
    }
};
