// github.com/piotrchaber

std::vector<std::string> cavityMap(std::vector<std::string> grid) {
    for (size_t i = 1; i < grid.size() - 1; i++) {
        for (size_t j = 1; j < grid.size() - 1; j++) {
            if (grid[i][j] > std::max(grid[i][j - 1], grid[i][j + 1]) && grid[i][j] > std::max(grid[i - 1][j], grid[i + 1][j])) { grid[i][j] = 'X'; }
        }
    }
    return grid;
}