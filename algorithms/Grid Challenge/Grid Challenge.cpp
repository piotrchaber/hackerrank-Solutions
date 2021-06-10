// github.com/piotrchaber

std::string gridChallenge(std::vector<std::string> grid) {
    size_t n = grid[0].size();
    std::for_each(grid.begin(), grid.end(), [](std::string& s) { std::sort(s.begin(), s.end()); });
    for (size_t i = 0; i < grid.size() - 1; i++) {
        for (size_t j = 0; j < n; j++) {
            if (grid[i][j] > grid[i + 1][j]) return "NO";
        }
    }
    return "YES";
}