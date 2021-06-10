// github.com/piotrchaber

std::vector<int> maximumPerimeterTriangle(std::vector<int> sticks) {
    std::sort(sticks.begin(), sticks.end());
    size_t j = sticks.size();
    while (--j > 1) {
        if (sticks[j] < sticks[j - 1] + sticks[j - 2]) return {sticks[j-2], sticks[j-1], sticks[j]};
    }
    return {-1};
}