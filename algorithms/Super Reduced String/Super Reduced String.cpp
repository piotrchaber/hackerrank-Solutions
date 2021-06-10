// github.com/piotrchaber

std::string superReducedString(std::string s) {
    std::string ss;
    for (size_t i = 0; i < s.length(); i++) {
        if (ss.size() == 0 || s[i] != ss.back()) ss.push_back(s[i]);
        else ss.pop_back();
    }
    return ss.length() ? ss : "Empty String";
}

std::string superReducedString(std::string s) {
    for (size_t i = 1; i < s.length(); ++i) {
        if (s[i - 1] == s[i]) { s.erase(s.begin() + (i - 1), s.begin() + (i + 1)); i = 0; }
    }
    return s.length() ? s : "Empty String";
}