#include <iostream> 
using namespace std; 
void wavePrint(int **input, int row, int col)
 {
  if (row == 0)
   {
    return; 
	}
	 int numRows = row;
	  int numCols = col;
	   for (int j = 0; j < numCols; j++) 
	   {
	    if (j % 2 == 0) 
		{
		 for (int i = 0; i < numRows; i++) 
		 {
		  cout << input[i][j] << " "; 
		  }
		   
		}
		else
		{
		  for (int i = row - 1; i >= 0; i--)
		   {
		   cout << input[i][j] << " "; 
			}
		}
	}
}
