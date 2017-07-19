int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    int result=0,i,j;
    for(i=0; i<gridRowSize; i++){
        for(j=0; j<gridColSize; j++){
            //上下边界
            if(!i){
                if(grid[i][j] ^ 0)result++;
            }
            if(i==gridRowSize-1){
                if(grid[i][j] ^ 0)result++;
            }
            //左右边界
            if(!j){
                if(grid[i][j] ^ 0)result++;
            }
            if(j==gridColSize-1){
                if(grid[i][j] ^ 0)result++;
            } 
            //内部
            if(i>0 && i<gridRowSize){
                if(grid[i][j] ^ grid[i-1][j])result++;
            }
            if(j>0 && j<gridColSize){
                if(grid[i][j] ^ grid[i][j-1])result++;
            }            
        }
    }
    return result;
}
