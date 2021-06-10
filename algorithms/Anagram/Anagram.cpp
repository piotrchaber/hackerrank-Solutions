// github.com/piotrchaber

int anagram(std::string s) {
    if(s.length() % 2) return -1;
    int l = s.length() / 2;
    std::string r = s.substr(l, l);
    for(size_t i = 0; i < l; i++) {
        auto f = r.find(s[i]);
        if(f != std::string::npos) r.erase(r.begin() + f);
    }
    return r.length();
}