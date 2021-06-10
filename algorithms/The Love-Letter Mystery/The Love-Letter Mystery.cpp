// github.com/piotrchaber

int theLoveLetterMystery(std::string s) {
    int result = 0;
    for (size_t i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - (i + 1)]) result += std::abs(s[i] - s[s.length() - (i + 1)]);
    }
    return result;
}