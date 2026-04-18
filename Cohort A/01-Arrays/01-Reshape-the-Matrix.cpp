  vector<vector<int>> result(r, vector<int>(c, 0));
        for (int i = 0; i < m * n; i++) {
            int originalRow = i / n;
            int originalCol = i % n;

            int newRow = i / c;
            int newCol = i % c;

            result[newRow][newCol] = mat[originalRow][originalCol];
        }
        // TC => O(m * n)
        // SC => O(1)
        return result;
    }
};
