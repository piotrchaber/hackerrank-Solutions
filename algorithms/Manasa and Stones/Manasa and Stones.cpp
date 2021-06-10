// github.com/piotrchaber

std::vector<int> stones(int n, int a, int b) {
    std::vector<int> solution;
    if (a == b) return { (n - 1) * a };
    for (int i = (n - 1) * std::min(a, b); i <= (n - 1) * std::max(a, b); i += std::abs(a - b)) {
        solution.push_back(i);
    }
    return solution;
}