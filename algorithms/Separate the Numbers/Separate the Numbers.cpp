// github.com/piotrchaber

void separateTheNumbers(std::string s) {
    long long number;
    std::string ss;
    for (size_t i = 0; i < s.size() / 2; i++) {
        number = std::stoll(s.substr(0, i + 1));
        while (ss.size() < s.size()) { ss += std::to_string(number++); }
        if (ss == s) { std::cout << "YES" << " " << s.substr(0, i + 1) << std::endl; return; }
        ss.clear();
    }
    std::cout << "NO" << std::endl;
}