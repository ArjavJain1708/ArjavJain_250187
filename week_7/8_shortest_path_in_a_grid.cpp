class Solution {
public:
int helper(vector<vector<int>>&grid,vector<vector<int>>&visited,int i,int j){
   queue<pair<pair<int,int>,int>>q;
   q.push({{i,j},1});
   visited[i][j]=1;
   
   while(!q.empty()){
    int i=q.front().first.first;
    int j=q.front().first.second;
    int count=q.front().second;
    q.pop();
    if(i==grid.size()-1&&j==grid.size()-1){
        return count;
    }
    for(int r=-1;r<=1;r++){
    for(int c=-1;c<=1;c++){
    if(r+i>=0&&r+i<grid.size()&&c+j>=0&&c+j<grid.size()&&(visited[i+r][j+c]!=1)&&(grid[i+r][j+c]!=1)){
            visited[i+r][j+c]=1;
            q.push({{i+r,j+c},count+1});
        }
    }
   }
   }
   return -1;
}
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if (grid[0][0] == 1 || grid[grid.size()- 1][grid.size()- 1] == 1) return -1;
        vector<vector<int>>visited(grid.size(),vector<int>(grid.size(),0));
       
        int count;
        count= helper(grid,visited,0,0);
        
    
   return count; }
};s