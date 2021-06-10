// github.com/piotrchaber

int flatlandSpaceStations(int n, std::vector<int> vi) {
    std::sort(vi.begin(), vi.end());
    int maxi = std::max(vi[0] - 0, (n - 1) - vi.back());
    int maxDiff = 0;
    for (size_t i = 0; i < vi.size() - 1; i++) {
        maxDiff = std::max(vi[i + 1] - vi[i], maxDiff);
    }
   return std::max(maxDiff / 2, maxi);
}