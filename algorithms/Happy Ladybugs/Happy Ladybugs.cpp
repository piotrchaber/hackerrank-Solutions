// github.com/piotrchaber

bool isNextTo(std::string s) {
    if (s.front() != s[1] || s.back() != s[s.size() - 2]) return false;
    for (size_t i = 1; i < s.size() - 1; i++) {
        if (s[i] != s[i - 1] && s[i] != s[i + 1]) return false;
    }
    return true;
}

std::string happyLadybugs(std::string b) {
    std::map<char, int> m;
    bool is_ = false;
    for (char c : b) { if (c == '_') { is_ = true; continue; } m[c]++; }
    std::pair<char, int> mini = *std::min_element(m.begin(), m.end(), [](std::pair<char, int> p1, std::pair<char, int> p2) { return p1.second < p2.second; });
    if ((is_ && mini.second != 1) || isNextTo(b)) return "YES";
    return "NO";
}