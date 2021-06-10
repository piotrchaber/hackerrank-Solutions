// github.com/piotrchaber

std::string nimbleGame(std::vector<int> s) {
    int xorSum = 0;
    for(size_t i = 1; i < s.size(); i++) {
        if (s[i] % 2) xorSum ^= i;
    }
    return xorSum ? "First" : "Second";
}