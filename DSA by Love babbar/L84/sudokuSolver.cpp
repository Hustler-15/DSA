#include <bits/stdc++.h>
using namespace std;
bool isSafe(int row, int col, vector<vector<int>> &board, int value)
{
    for (int i = 0; i < board.size(); i++)
    {
        // row check
        if (board[row][i] == value)
            return false;

        // col check
        if (board[i][col] == value)
            return false;

        // 3*3 matrix check
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == value)
            return false;
    }
    return true;
}
bool solve(vector<vector<int>> &board)
{
    int n = board[0].size();

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (board[row][col] == 0)
            {
                for (int val = 1; val <= 9; val++)
                {
                    if (isSafe(row, col, board, val))
                    {
                        board[row][col] = val;
                        // recursive call
                        bool aageSolutionPossible = solve(board);
                        if (aageSolutionPossible)
                            return true;
                        else
                        {
                            // backtrack
                            board[row][col] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void solveSudoku(vector<vector<int>> &sudoku)
{
    solve(sudoku);
}
// https://www.codingninjas.com/studio/problems/sudoku-solver_699919?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar