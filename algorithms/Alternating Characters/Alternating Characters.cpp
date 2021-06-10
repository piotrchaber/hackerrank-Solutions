// github.com/piotrchaber

int alternatingCharacters(std::string s) {
    int result = 0;
    char top = s[0];
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == top) { result++; continue; }
        top = s[i];
    }
    return result;
}