class Solution {
public:
//get index of the square 
    int coordgrid(int i,int j){
        return (i/3)*3+(j/3);
    };
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>>rows(9),cols(9),grids(9);
        pair<set<char>::iterator,bool>ret;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c=board[i][j];
                if(c=='.') continue; //pass this value
                int indexgrid=coordgrid(i,j);
                ret=rows[i].insert(c); //insert value in the set
                if(!ret.second)return false;//if the value is already inserted in the set return false
                ret=cols[j].insert(c);
                if(!ret.second)return false;
                ret=grids[indexgrid].insert(c);
                if(!ret.second)return false;
            }
        }
        return true;
    }
};