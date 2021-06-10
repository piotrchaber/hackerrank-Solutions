// github.com/piotrchaber

std::string caesarCipher(std::string s, int k) {
    int n = 'z' - 'a' + 1;
    char aA;
    for (char& c : s) {
        if(!isalpha(c)) continue;
        aA = isupper(c) ? 'A' : 'a';
        c = char(aA + (c - aA + k) % n);
    }
    return s;
}