class Solution {
public:
    static bool compare(vector<int> &p1, vector<int> &p2)
    {
        int dist1=p1[0]*p1[0] + p1[1]*p1[1];
        int dist2=p2[0]*p2[0] + p2[1]*p2[1];
        return dist1<dist2;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        sort(points.begin(),points.end(),compare);
        
        vector<vector<int> > result(K,vector<int>());
        for(int i=0;i<K;++i)
            result[i]=points[i];
        
        return result;
        
    }
};
