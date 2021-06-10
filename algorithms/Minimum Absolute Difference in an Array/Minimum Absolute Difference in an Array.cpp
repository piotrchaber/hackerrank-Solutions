// github.com/piotrchaber

int minimumAbsoluteDifference(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    int mini = std::abs(arr.back() - arr.front());
    for (size_t i = 0; i < arr.size() - 1; i++) {
        mini = std::min(std::abs(arr[i] - arr[i + 1]), mini);
    }
    return mini;
}