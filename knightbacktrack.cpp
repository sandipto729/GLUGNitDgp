#include<iostream>
#include<vector>
using namespace std;
bool
canGo (vector < vector < char > >&grid, int row, int col)
{
  if (row - 2 >= 0 && col - 1 >= 0 && grid[row - 2][col - 1] == 'Q')
    return false;
  if (row - 2 >= 0 && col + 1 < grid[0].size ()
      && grid[row - 2][col + 1] == 'Q')
    return false;
  if (row + 2 < grid.size () && col + 1 < grid[0].size ()
      && grid[row + 2][col + 1] == 'Q')
    return false;
  if (row + 2 < grid.size () && col - 1 >= 0 && grid[row + 2][col - 1] == 'Q')
    return false;


  if (row - 1 >= 0 && col - 2 >= 0 && grid[row - 1][col - 2] == 'Q')
    return false;
  if (row - 1 >= 0 && col + 2 < grid[0].size ()
      && grid[row - 1][col + 2] == 'Q')
    return false;
  if (row + 1 < grid.size () && col + 2 < grid[0].size ()
      && grid[row + 1][col + 2] == 'Q')
    return false;
  if (row + 1 < grid.size () && col - 2 >= 0 && grid[row + 1][col - 2] == 'Q')
    return false;


  return true;
}

void
knightPlace (vector < vector < char > >&grid, int row, int col, int k)
{
  if (k == 0)
    {
      for (int i = 0; i < grid.size (); i++)
	{
	  for (int j = 0; j < grid[0].size (); j++)
	    {
	      cout << grid[i][j] << " ";
	    }
	  cout << endl;
	}
      cout << "\n*****\n";
      return;
    }
  if (row == grid.size () || col == grid[0].size ())
    return knightPlace (grid, row + 1, 0, k);

  for (int i = row; i < grid.size (); i++)
    {
      for (int j = (row == i) ? col : 0; j < grid[0].size (); j++)
	{
	  if (canGo (grid, i, j))
	    {
	      grid[i][j] = 'Q';
	      knightPlace (grid, i, j + 1, k - 1);
	      grid[i][j] = '.';
	    }
	}
    }

}

int
main ()
{
  int n, m, k;
  n = 3, m = 3, k = 5;
  vector < vector < char >>v (n, vector < char >(m, '.'));
  knightPlace (v, 0, 0, k);
}
