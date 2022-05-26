class Solution {
public:
    
    void DFS(vector<vector<int>>& image, int sr, int sc, int newColor,int color, vector<vector<int>>& visited)
    {
        //boundary condition
        if( sr>=image.size()||sc>=image[0].size()||sr<0||sc<0) return;
        //you reach pixel which is different or visited before
        if( image[sr][sc]!=color || visited[sr][sc]== 1) return;
        //recolor the pixel
        image[sr][sc]=newColor;
        visited[sr][sc] = 1;
       //recusion calls for 4 direction in matrix
        DFS(image,sr,sc+1,newColor,color, visited);
        DFS(image,sr,sc-1,newColor,color, visited);
        DFS(image,sr+1,sc,newColor,color, visited);
        DFS(image,sr-1,sc,newColor,color, visited);
        }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> visited( image.size() , vector<int> (image[0].size(), 0)); 
        DFS(image,sr,sc,newColor, image[sr][sc], visited);
        return image;   
    }
};