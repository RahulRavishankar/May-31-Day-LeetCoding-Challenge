class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int n1=A.size();
        int n2=B.size();
        
        vector<vector<int> > result;
        
        int i=0; int j=0;
        while(i<n1 && j<n2)
        {
            
            if(B[j][0]>A[i][1])    i++;
            else if(A[i][0]>B[j][1])   j++;
            else if(B[j][0]>=A[i][0])
            {
                if(A[i][1]<=B[j][1])
                    result.push_back({B[j][0],A[i][1]}), i++;
                else
                    result.push_back(B[j]), j++;
            }
            else
            {
                if(A[i][1]<=B[j][1])
                    result.push_back(A[i]), i++;
                else
                    result.push_back({A[i][0],B[j][1]}), j++;
            }
        }
        return result;
    }
};
