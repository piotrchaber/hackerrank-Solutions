// github.com/piotrchaber

int pickingNumbers(std::vector<int> vi) {
    long int c = 1;
    for (int i : vi) {
        c = std::max(std::count_if(vi.begin(), vi.end(), [=](int k) { return i == k || i == k - 1; }), c);
    }
    return c;
}