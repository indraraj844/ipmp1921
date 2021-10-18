class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
       
        int n=board.size();
        int m=board[0].size();
        
        int count=0;
        for(int i=0;i<n;i++)
        {
         for(int j=0;j<m;j++)
         {
             if(board[i][j]=='X')
             {
                 count++;
                 if(i && board[i-1][j]=='X')count--;
                 if(j && board[i][j-1]=='X')count--;
             }
         }
        }
        return count;
    }
};
o(n^2) memory(1)
  
