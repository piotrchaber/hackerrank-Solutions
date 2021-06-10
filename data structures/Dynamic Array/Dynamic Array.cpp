// github.com/piotrchaber

std::vector<int> dynamicArray(int n, std::vector<vector<int>> queries) {
    std::vector<int> result;
    int lastAnswer = 0;
    size_t idx1, idx2;
    std::vector<std::vector<int>> vvi(n);
    for (auto vi : queries) {
        idx1 = (vi[1] ^ lastAnswer) % n;
        if (vi[0] == 1) vvi[idx1].push_back(vi[2]);
        if (vi[0] == 2) {
            idx2 = vi[2] % vvi[idx1].size();
            lastAnswer = vvi[idx1][idx2];
            result.push_back(lastAnswer);
        }
    }
    return result;
}