// github.com/piotrchaber

std::string funnyString(std::string s) {
    for (size_t i = 0; i < s.length() - 1; i++) {
        if (std::abs(s[i] - s[i + 1]) != std::abs(s[s.length() - (i + 1)] - s[s.length() - (i + 2)])) return "Not Funny";
    }
    return "Funny";
}