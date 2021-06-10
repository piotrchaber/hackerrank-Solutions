// github.com/piotrchaber

int gemstones(std::vector<string> vs) {
    int letters[26] = { 0 };
    int result = 0;
    for (size_t i = 0; i < vs.size(); i++) {
        for (size_t j = 0; j < vs[i].size(); j++) {
            char c = vs[i][j];
            if (letters[c - 'a'] == i) {
                letters[c - 'a']++;
                if (letters[c - 'a'] == vs.size()) result++;
            }
        }
    }
    return result;
}

int gemstones(std::vector<string> vs) {
    auto it = std::min_element(vs.begin(), vs.end(), [](const std::string& s, const std::string& t) { return s.length() < t.length(); });
    std::string s = *it;
    vs.erase(it);
    std::map<char, int> m;
    for (char c : s) m[c];
    int result = m.size();
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        for (const std::string& s : vs) {
            if (find(s.begin(), s.end(), itr->first) == s.end()) { result--; break; }
        }
    }
    return result;
}