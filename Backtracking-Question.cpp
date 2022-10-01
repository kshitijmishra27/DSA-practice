/******************************************************************************

Rat In a Maze Problem:

Given a maze(2D matrix) with obstacles, starting from (0,0) you have to reach (n-1, n-1). 
If you are currently on (x,y), you can move to (x+1,y) or (x,y+1).
You can not move to the walls. 

Idea: Try all the possible paths to see if you can reach (n-1,n-1)

Time Complexity: O(2n) 
Space Complexity: O(2n)

*******************************************************************************/
#include <iostream>

using namespace std;

bool isSafe(int **arr, int x, int y, int n) // function
{
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    else
    return false;
}

bool ratinMaze(int** arr, int x, int y, int n, int **solArr)
{
    if((x==(n-1)) && (y==n-1))
    {
        sol[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n))
    {
        solArr[x][y] = 1;
        
        if(ratinMaze(arr, x+1 , y, n, solArr))
        {
            return true;
        }
        solArr[x][y]=0;  //backtracking 
        return false;
    }
    return false;
}
