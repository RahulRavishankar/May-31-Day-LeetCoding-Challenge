class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        vector<int> v(N,0); vector<int> t(N,0);
        for(int i=0;i<trust.size();++i)
            ++v[trust[i][0]-1] , ++t[trust[i][1]-1];
        
        for(int i=0;i<N;++i)
            if(v[i]==0 && t[i]==N-1)
                return i+1;
        
        return -1;
    }
};
