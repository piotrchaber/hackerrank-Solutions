// github.com/piotrchaber

std::string twoStrings(std::string s1, std::string s2) {
    auto existS1 = [&](char c) { return s1.find(c); };
    auto existS2 = [&](char c) { return s2.find(c); };
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (char c : alphabet) {
        if (existS1(c) != std::string::npos && existS2(c) != std::string::npos) return "YES";
    }
    return "NO";
}

std::string twoStrings(std::string s1, std::string s2) {
    std::string ss;
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(ss));
    return ss.length() ? "YES" : "NO";
}