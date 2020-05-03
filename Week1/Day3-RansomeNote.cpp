class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        vector<int> mMap(26,0);
        int m=magazine.size();
        int n=ransomNote.size();
        for(int i=0;i<m;i++)
        {
            mMap[magazine[i]-'a']++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(mMap[ransomNote[i]-'a']==0)
                return false;
            
            mMap[ransomNote[i]-'a']--;   
        }
        return true;
    }
}
