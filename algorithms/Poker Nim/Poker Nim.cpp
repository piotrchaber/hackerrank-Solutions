// github.com/piotrchaber

std::string pokerNim(int k, std::vector<int> c) {
    int xorSum = 0;
    for (int i : c) xorSum ^= i;
    return xorSum ? "First" : "Second";
}