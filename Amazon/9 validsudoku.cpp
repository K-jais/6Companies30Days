int isValid(vector<vector<int>> grid){
        return valid_board(grid);
    }
    int valid_row(int row, vector<vector<int>>& grid){
  set<int> s;
  for(int i = 0; i < 9; i++){
      if(grid[row][i] != 0){
        if(s.insert(grid[row][i]).second == false){
          return 0;
        }
      }

  }
  return 1;
}

int valid_col(int col, vector<vector<int>>& grid){
  set<int> s;
  for(int i = 0; i < 9; i++){
      if(grid[i][col] != 0){
        if(s.insert(grid[i][col]).second == false){
          return 0;
        }
      }
  }
  return 1;
}
// Function to check if all the subsquares are valid. It will return:
// -1 if a subsquare contains an invalid value
// 0 if a subsquare contains repeated values
// 1 if the subsquares are valid.
int valid_subsquares(vector<vector<int>>& grid){
  for(int row = 0; row < 9; row = row + 3){
    for(int col = 0; col < 9; col = col + 3){
        set<int> s;
        for(int r = row; r < row + 3; r++){
          for(int c = col; c < col + 3; c++){
           
            
              if(grid[r][c] !=0){
                if(s.insert(grid[r][c]).second == false){
                  return 0;
                }
              } 
            
          }
        }    
    }
  }
  return 1;
}
//Function to check if the board invalid.
bool valid_board(vector<vector<int>>& grid){
  for(int i = 0; i < 9; i++){
    int res1 = valid_row(i, grid);
    int res2 = valid_col(i, grid);
    // If a row or a column is invalid, then the board is invalid.
    if(res1 < 1 || res2 < 1){
      return 0;
    }
  }
  // if any one the subsquares is invalid, then the board is invalid.
  int res3 = valid_subsquares(grid);
  if(res3 < 1){
    return 0;
  }
  else{
    return 1;
  }
}
