class Solution {
public:
    bool compareMap(vector<int> &curr, vector<int> &m)
    {
        for(int i=0;i<26;i++)
            if(curr[i]!=m[i])
                return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        vector<int> result;
        
        if(s2.length()==0 || s1.length()>s2.length())
            return false;
        
        vector<int> m(26,0);
        for(int i=0;i<s1.length();i++)
            m[s1[i]-'a']++;
        
        vector<int> curr(26,0);
        int left=0; 
        int right=0;
        
        while(right<s1.length())
            curr[s2[right++]-'a']++;
        if(compareMap(curr,m))
            return true;
        
        while(right<s2.length())
        {
            curr[s2[left++]-'a']--;
            curr[s2[right++]-'a']++;
            if(compareMap(curr,m))
                return true;
        }
        return false;
    }
};
