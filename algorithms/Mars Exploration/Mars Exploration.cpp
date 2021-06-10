// github.com/piotrchaber

int marsExploration(std::string s) {
    std::string ss = "SOS";
    int solution = 0;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] != ss[i % 3]) solution++;
    }
    return solution;
}

int marsExploration(std::string s) {
    int solution = 0;
    for(int i = 0; i < s.length(); i++) {
        if(i % 3 == 1) {
            if(s[i] != 'O') solution++;
            continue;
        }
        if(s[i] != 'S') solution++;
    }
    return solution;
}