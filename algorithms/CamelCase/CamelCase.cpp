// github.com/piotrchaber

int camelcase(std::string s) {
    return std::count_if(s.begin(), s.end(), [](char c){ return isupper(c); }) + 1;
}