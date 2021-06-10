// github.com/piotrchaber

std::string nimGame(std::vector<int> pile) {
    int xorSum = 0;
    for(int p : pile) xorSum ^= p;
    return xorSum ? "First" : "Second";
}