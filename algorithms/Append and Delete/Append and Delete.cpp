// github.com/piotrchaber

std::string appendAndDelete(std::string s, std::string t, int k) {
    if (k >= s.length() + t.length()) return "Yes";
    int minOperation = 0;
    while (s != t.substr(0, s.length())) { s.pop_back(); minOperation++; }
    while (s != t) { s.push_back(t[s.length()]); minOperation++; }
    if ((k - minOperation) % 2 == 0 && k - minOperation >= 0) return "Yes";
    return "No";
}