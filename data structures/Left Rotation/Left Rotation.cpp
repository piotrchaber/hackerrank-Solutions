// github.com/piotrchaber

std::vector<int> rotateLeft(int d, std::vector<int> arr) {
    std::vector<int> result;
    result.reserve(arr.size());
    result.insert(result.begin(), arr.begin() + d, arr.end());
    result.insert(result.end(), arr.begin(), arr.begin() + d);
    return result;
}

std::vector<int> rotateLeft(int d, std::vector<int> arr) {
    std::vector<int> result;
    result.reserve(arr.size());
    for (size_t i = 0; i < arr.size(); i++) result.push_back(arr[(i + d) % arr.size()]);
    return result;
}