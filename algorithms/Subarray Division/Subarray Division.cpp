// github.com/piotrchaber

int getSum(int j, int m, std::vector<int> s) {
    int sum = 0;
    for (int i = j; i < j + m; i++) { sum += s[i]; }
    return sum;
}

int birthday(std::vector<int> s, int d, int m) {
    int ways = 0;
    for (size_t j = 0; j < s.size() - m + 1; j++) {
        if (getSum(j, m, s) == d) ways++;
    }
    return ways;
}