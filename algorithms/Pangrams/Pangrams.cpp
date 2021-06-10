// github.com/piotrchaber

std::string pangrams(std::string s) {
    std::map<char, int> m;
    for (char c : s) {
        if (isspace(c)) continue;
        if (isupper(c)) c = tolower(c);
        m[c]++;
    }
    return m.size() == 26 ? "pangram" : "not pangram";
}