class Solution {
public:
    string frequencySort(string s) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int n=s.length();
        vector<int> m(256,0);
        vector<int> ix(256);
        for(int i=0;i<256;++i)
            ix[i]=i;
        
        for(int i=0;i<n;++i)
            ++m[s[i]];

        sort(ix.begin(), ix.end(),[&](const int a, const int b){
            return m[a]>m[b];
        });
        
        string result="";
        int i=0;
        
        for(;i<256;i++)
            result+=string(m[ix[i]],ix[i]);
            
        
        return result;
    }
};
