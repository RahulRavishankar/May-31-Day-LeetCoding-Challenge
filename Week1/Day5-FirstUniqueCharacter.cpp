class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        if(s=="")
            return -1;
        
        vector<int> m(26,0);
        for(int i=0;i<s.length();i++)
        {   
            m[s[i]-'a']++;   
        }

        for(int i=0;i<s.length();i++)
        {
            if(m[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};
