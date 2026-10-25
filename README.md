# N-Queens Solver

Places N queens on an N x N chessboard so that no two queens attack each other, and prints all valid solutions.

## Approach
- Backtracking, placing one queen per row
- Column and both diagonals are tracked with boolean arrays, so each safety check is O(1)
- If a placement leads to a dead end, it is undone and the next column is tried

## Complexity
- Time: O(N!) in the worst case (pruning makes it much faster in practice)
- Space: O(N) for tracking arrays, plus the stored solutions

## How to run
g++ nqueens.cpp -o nqueens
nqueens

Then enter N (for example 4).

## Sample output (N = 4)
Total solutions: 2

.Q..
...Q
Q...
..Q.

..Q.
Q...
...Q
.Q..
