// github.com/piotrchaber

int maximizingXor(int l, int r) {
    int maxi = 0;
    for (int i = l; i < r; i++) {
        for (int j = l + 1; j < r + 1; j++) maxi = max(i ^ j, maxi);
    }
    return maxi;
}