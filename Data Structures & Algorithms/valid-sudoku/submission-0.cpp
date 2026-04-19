class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int row = 0; row < board[row].size(); ++row) {
            if (!isRowValid(board, row)) return false;
        }
        for (int column = 0; column < board[column].size(); ++column) {
            if (!isColumnValid(board, column)) return false;
        }        for (int row = 0; row < 7; row = row + 3) {
            for (int column = 0; column < 7; column = column + 3) {
                if (!isBlockValid(board, row, column)) return false;
            }
        }
        return true;
        
    }

private:
    bool isBlockValid(vector<vector<char>>& board, int x, int y) {
        unordered_map<int, int> map;
        for (int i = x; i < x + 3; ++i) {
            for (int j = y; j < y + 3; ++j) {
                if (board[i][j] == '.') continue;

                ++map[board[i][j]];

                if (map[board[i][j]] > 1) return false;
            }
        }
        return true;
    }

    bool isRowValid(vector<vector<char>>& board, int row) {
        unordered_map<int, int> map;
        for (int i = 0; i < board[row].size(); ++i) {
            if (board[row][i] == '.') continue;

            ++map[board[row][i]];

            if (map[board[row][i]] > 1) return false;
        }
        return true;
    }

    bool isColumnValid(vector<vector<char>>& board, int column) {
        unordered_map<int, int> map;
        for (int i = 0; i < board[column].size(); ++i) {
            if (board[i][column] == '.') continue;

            ++map[board[i][column]];

            if (map[board[i][column]] > 1) return false;
        }
        return true;
    }

};
