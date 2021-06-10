// github.com/piotrchaber

int stringConstruction(std::string s) {
    int minCost = s.length();
    std::map<char,int> letters;
    for (size_t i = 0; i < s.length(); i++) {
        letters[s[i] - 'a']++;
        if(letters[s[i] - 'a'] > 1) minCost--;
    }
    return minCost;
}