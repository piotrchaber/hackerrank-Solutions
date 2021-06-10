// github.com/piotrchaber

int hourglassSum(std::vector<std::vector<int>> arr) {
    int sumi = 0;
    int maxi = -63;
    for (size_t i = 0; i <= 3; i++) {
        for (size_t j = 0; j <= 3; j++) {
            sumi = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            maxi = std::max(sumi, maxi);
        }
    }
    return maxi;
}