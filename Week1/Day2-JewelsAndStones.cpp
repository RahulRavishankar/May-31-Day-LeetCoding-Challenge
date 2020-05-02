class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> j;
        int count=0;
        for(int i=0;i<J.length();i++)
            j.insert(J[i]);
        
        for(int i=0;i<S.length();i++)
        {
            if(j.find(S[i])!=j.end())
                count++;
        }
        return count;
        
    }
};
