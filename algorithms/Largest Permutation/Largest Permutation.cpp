// github.com/piotrchaber

std::vector<int> largestPermutation(int k, std::vector<int> arr) {
    std::map<int, int> m;
    for (size_t i = 0; i < arr.size(); i++) m[arr[i]] = i;
    size_t index = 0;
    while (k && index < arr.size()) {
        if (m[arr.size() - index] == index) { index++; continue; }
        std::swap(m[arr[index]], m[arr.size() - index]);
        std::swap(arr[index], arr[m[arr[index]]]);
        k--; index++;
    }
    return arr;
}