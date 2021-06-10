// github.com/piotrchaber

std::string misereNim(std::vector<int> s) {
    int xorSum = 0;
    int Sum = 0;
    for (int i : s) { xorSum ^= i; Sum += i; }
    if (Sum == s.size()) xorSum = !xorSum;
    return xorSum ? "First" : "Second";
}