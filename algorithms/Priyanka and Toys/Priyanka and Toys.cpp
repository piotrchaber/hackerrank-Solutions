// github.com/piotrchaber

int toys(std::vector<int> w) {
    std::sort(w.begin(), w.end());
    int result = 0;
    int min = -1;
    for (size_t i = 0; i < w.size(); i++) {
        if (w[i] > min) { min = w[i] + 4; result++; }
    }
    return result;
}