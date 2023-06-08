bool searchMatrix(vector<vector<int>>& mat, int target) {
    int low = 0;

    if(!mat.size())
        return false;

    int high = (mat.size() * mat[0].size()) - 1;

    while(low <= high) {
        int mid = (low + (high - low) / 2);

        if(mat[mid/mat[0].size()][mid % mat[0].size()] == target) {
            return true;
        }

        if(mat[mid/mat[0].size()][mid % mat[0].size()] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false;
}
