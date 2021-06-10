// github.com/piotrchaber

std::vector<std::string> weightedUniformStrings(std::string s, std::vector<int> queries) {
    std::vector<std::string> result;
    std::map<int, bool> m;
    int n = 0;
    for (size_t i = 0; i < s.size(); i++) {
        n += s[i] - 'a' + 1;
	m[n] = true;
        if (s[i] != s[i + 1]) n = 0;
    }
    for (int i : queries) { result.push_back(m[i] ? "Yes" : "No"); }
    return result;
}