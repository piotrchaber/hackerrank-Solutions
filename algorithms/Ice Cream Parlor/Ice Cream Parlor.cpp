// github.com/piotrchaber

std::vector<int> icecreamParlor(int m, std::vector<int> arr) {
    std::vector<int> result(2);
    for (size_t i = 0; i < arr.size() - 1; i++) {
        auto f = std::find(arr.begin() + (i + 1), arr.end(), m - arr[i]);
        if (f != arr.end()) { result[0] = i + 1; result[1] = std::distance(arr.begin(), f) + 1; break; }
    }
    return result;
}

std::vector<int> icecreamParlor(int m, std::vector<int> arr) {
    int i = 0, j = 1;
    while (i < arr.size() - 1) {
        if (arr[i] + arr[j] == m) { break; }
        j++;
        if (j == arr.size()) { i++; j = i + 1; }
    }
    return {i+1, j+1};
}