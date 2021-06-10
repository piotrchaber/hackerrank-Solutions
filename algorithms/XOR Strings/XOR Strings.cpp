// github.com/piotrchaber

std::string strings_xor(std::string s, std::string t) {
    std::string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == t[i]) res += '0';
        else res += '1';
    }
    return res;
}