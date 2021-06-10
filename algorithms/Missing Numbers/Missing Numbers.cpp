// github.com/piotrchaber

std::vector<int> missingNumbers(std::vector<int> arr, std::vector<int> brr) {
    std::vector<int> result;
    std::map<int, int> m;
    for (int i : arr) m[i]++;
    for (int i : brr) m[i]--;
    for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second != 0) result.push_back(it->first);
    }
    return result;
}