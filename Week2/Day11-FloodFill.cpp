class Solution {
public:
    void bfs(vector<vector<int>>& image, int r, int c, int color, int newColor)
    {
        if(r<0 || r>=image.size() || c<0 || c>=image[0].size() || image[r][c]==newColor)
            return;
        if(image[r][c]==color)
        {
            image[r][c]=newColor;
            bfs(image,r+1,c,color,newColor);
            bfs(image,r-1,c,color,newColor);
            bfs(image,r,c+1,color,newColor);
            bfs(image,r,c-1,color,newColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        bfs(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
};
