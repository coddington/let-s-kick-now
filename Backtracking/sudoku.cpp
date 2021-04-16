bool isvalid(int val,int grid[N][N],int x,int y)
  {
      for(int i=0;i<9;++i)
      {
          if(grid[x][i]==val)
          {
              return false;
          }
      }
      for(int j=0;j<9;++j)
      {
          if(grid[j][y]==val)
          {
              return false;
          }
      }
      int corx=(x/3)*3;
      int cory=(y/3)*3;
      for(int i=0;i<3;++i)
      {
          for(int j=0;j<3;++j)
          {
              if(grid[corx+i][cory+j]==val)
              {
                  return false;
              }
          }
      }
      return true;
  }
  bool backtrack(int grid[N][N], int i, int j)
  {
      if(i==9)
      {
          return true;
      }
      
      int ni=i;
      int nj=j;
      
      if(j==8)
      {
          ni=i+1;
          nj=0;
          
      }
      else
      {
          ni=i;
          nj=j+1;
          
      }
      if(grid[i][j]!=0)
      {
          backtrack(grid,ni,nj);
      }
      else
      {
          for(int po=1;po<=9;++i)
          {
              if(isvalid(po,grid,i,j)==true)
              {
                  grid[i][j]=po;
                  backtrack(grid,ni,nj);
                  grid[i][j]=0;
                  
              }
              
          }
      }
      return true;
      
  }
    bool SolveSudoku(int grid[N][N])  
    { 
        if(backtrack(grid,0,0))
        {
            printGrid(grid);
        }
        
        
        
    }
    
    void printGrid (int grid[N][N]) 
    {
        for(int i=0;i<9;++i)
        {
            for(int j=0;j<9;++j)
            {
                cout<<grid[i][j];
            }
        }
    }
