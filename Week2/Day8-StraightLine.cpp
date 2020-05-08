class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        if(coordinates.size()==2)
            return true;
        
        int x1=coordinates[0][0]; int y1=coordinates[0][1];
        int x2=coordinates[1][0]; int y2=coordinates[1][1];
        double m=(double)(y2-y1)/(x2-x1);
        double c=(double)(y1)-(m*x1); 
        
        for(int i=2;i<coordinates.size();++i)
        {
            if(coordinates[i][1]-(m*coordinates[i][0])-c !=0)
                return false;
        }
        return true;
    }
};
