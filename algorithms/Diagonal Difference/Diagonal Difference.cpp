// github.com/piotrchaber

int diagonalDifference(std::vector<std::vector<int>> arr) {
    int diagonal = 0;
    int antidiagonal = 0;
    int j = arr.size() - 1;
    for(int i = 0; i < arr.size(); i++) {
        diagonal += arr[i][i];
        antidiagonal += arr[i][j--];
    }
    return std::abs(diagonal - antidiagonal);
}