// github.com/piotrchaber

std::string hackerrankInString(std::string s) {
    std::string ss = "hackerrank";
    size_t j = 0;
    for(size_t i = 0; i < s.length(); i++) {
        if(s[i] == ss[j]) j++;
    }
    return j == ss.length() ? "YES" : "NO";
}