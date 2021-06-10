// github.com/piotrchaber

std::string gameOfStones(int n) {
    return (n % 7 == 0 || n % 7 == 1) ? "Second" : "First";
}