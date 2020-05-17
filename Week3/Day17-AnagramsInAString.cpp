class Solution {
public:
    bool compareMap(vector<int> &curr, vector<int> &m)
    {
        for(int i=0;i<26;i++)
            if(curr[i]!=m[i])
                return false;
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        vector<int> result;
        
        if(s.length()==0 || p.length()>s.length())
            return result;
        
        vector<int> m(26,0);
        for(int i=0;i<p.length();i++)
            m[p[i]-'a']++;
        
        vector<int> curr(26,0);
        int left=0; 
        int right=0;
        
        while(right<p.length())
            curr[s[right++]-'a']++;
        if(compareMap(curr,m))
            result.push_back(left);
        
        while(right<s.length())
        {
            curr[s[left++]-'a']--;
            curr[s[right++]-'a']++;
            if(compareMap(curr,m))
                result.push_back(left);
        }
        return result;
    }
};
