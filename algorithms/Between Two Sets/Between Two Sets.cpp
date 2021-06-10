// github.com/piotrchaber

std::vector<int> divisors(int n, int m) {
    std::vector<int> result;
    for (int i = 1; i <= sqrt(n); i++) {
        if (!(n % i)) {
            result.push_back(i);
            if (!(i*i == n)) result.push_back(n / i);
        }
    }
    std::sort(result.begin(), result.end());
    result.erase(std::remove_if(result.begin(), result.end(), [=](int i) { return i < m; }), result.end());
    return result;
}