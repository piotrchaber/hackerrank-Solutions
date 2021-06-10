// github.com/piotrchaber

std::string gameOfThrones(std::string s) {
    std::map<char, int> m;
    for (char c : s) m[c]++;
    int mapCounter = std::count_if(m.begin(), m.end(), [](std::pair<char, int> p) { return p.second % 2; });
    return mapCounter > 1 ? "NO" : "YES";
}