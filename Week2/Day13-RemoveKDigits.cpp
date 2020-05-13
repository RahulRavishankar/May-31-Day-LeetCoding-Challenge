class Solution {
public:
    string removeKdigits(string num, int k) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        if(num.size()==k)
            return "0";
        
        int n=num.size();
        vector<char> stack;     stack.push_back(num[0]);
        int i=1; int count=0;
        while(i<n)
        {
            while(!stack.empty() && num[i]<stack.back() && count<k)
                stack.pop_back(), ++count;
            
            stack.push_back(num[i]);
            ++i;
        }
        while(count<k)
            stack.pop_back(), ++count;
        
        string s(stack.begin(),stack.end());
        s.erase(0,s.find_first_not_of('0'));
        return s.size()==0?"0":s;
    }
};
