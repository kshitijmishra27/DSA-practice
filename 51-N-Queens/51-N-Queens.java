class Solution {
    public boolean isSafe(int row, int col, char[][] board) {
        for (int i = 0; i < board.length; i++) {
            if (board[row][i] == 'Q' || board[i][col] == 'Q') {
                return false;
            }
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        for (int i = row + 1, j = col + 1; i < board.length && j < board.length; i++, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        for (int i = row - 1, j = col + 1; i >= 0 && j < board.length; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        for (int i = row + 1, j = col - 1; i < board.length && j >= 0; i++, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }
    public void help(char[][] board, List < List < String >> ans, int col) {
        if (col == board.length) {
            List < String > temp = new ArrayList < > ();
            for (int i = 0; i < board.length; i++) {
                StringBuilder sb = new StringBuilder();
                for (int j = 0; j < board.length; j++) {
                    if (board[i][j] == 'Q') {
                        sb.append('Q');
                    } else {
                        sb.append('.');
                    }
                }
                temp.add(sb.toString());
            }
            ans.add(temp);
            return;
        }
        for (int i = 0; i < board.length; i++) {
            if (isSafe(i, col, board)) {
                board[i][col] = 'Q';
                help(board, ans, col + 1);
                board[i][col] = '.';
            }
        }
    }

    public List < List < String >> solveNQueens(int n) {
        List < List < String >> ans = new ArrayList < > ();
        char[][] board = new char[n][n];
        help(board, ans, 0);
        return ans;
    }
}
