// github.com/piotrchaber

int makingAnagrams(std::string s1, std::string s2) {
    std::map<char, int> m;
    int result = 0;
    for(char c : s1) m[c]++;
    for(char c : s2) m[c]--;
    for(auto it = m.begin(); it != m.end(); it++) result += abs(it->second);
    return result;
}