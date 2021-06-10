// github.com/piotrchaber

int checkOneCombination(const std::string& s, const std::string& t) {
    int howMany1 = 0;
    for(size_t i = 0; i < s.length(); i++) {
        if (char(s[i] | t[i]) == '1') howMany1++;
    }
    return howMany1;
}

std::vector<int> checkAllCombinations(const std::vector<string>& vs) {
    std::vector<int> vi;
    for(size_t i = 0; i < vs.size(); i++) {
        for(size_t j = i+1; j < vs.size(); j++) {
            vi.push_back(checkOneCombination(vs[i], vs[j]));
        }
    }
    return vi;
}

std::vector<int> acmTeam(std::vector<string> topic) {
    std::vector<int> vi = checkAllCombinations(topic);
    int max = *std::max_element(vi.begin(), vi.end());
    return { max, (int)count(vi.begin(), vi.end(), max) };
}