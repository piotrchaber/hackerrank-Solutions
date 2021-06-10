// github.com/piotrchaber

std::string fairRations(std::vector<int> B) {
    int countOdd = std::count_if(B.begin(), B.end(), [](int k) { return k % 2; });
    if (countOdd % 2) return "NO";
    int solution = 0;
    for (size_t i = 0; i < B.size() - 1; i++) {
        if (B[i] % 2) { B[i]++; B[i + 1]++; solution++; }
    }
    return std::to_string(solution * 2);
}