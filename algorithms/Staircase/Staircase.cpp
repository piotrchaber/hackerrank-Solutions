// github.com/piotrchaber

void staircase(int n) {
    std::string s;
    for(int i = 0; i < n; i++) { s += '#'; std::cout << std::setw(n) << std::right << s << std::endl; }
}