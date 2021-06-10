// github.com/piotrchaber

bool isPalindrome(const std::string& s) {
    std::string t = std::string(s.rbegin(), s.rend());
    return s == t;
}

int palindromeIndex(std::string s) {
    std::string t;
    for (size_t i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i]) {
            t = s;
            t.erase(t.end() - 1 - i);
            s.erase(s.begin() + i);
            if (isPalindrome(t)) return s.length() - i;
            if (isPalindrome(s)) return i;
            break;
        }
    }
    return -1;
}