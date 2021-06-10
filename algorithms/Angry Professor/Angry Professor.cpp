// github.com/piotrchaber

std::string angryProfessor(int k, std::vector<int> a) {
    std::sort(a.begin(), a .end());
    return a[k-1] > 0 ? "YES" : "NO";
}

std::string angryProfessor(int k, std::vector<int> a) {
    int c = count_if(a.begin(), a.end(), [](int n) { return n <= 0; });
    return c < k ? "YES" : "NO";
}