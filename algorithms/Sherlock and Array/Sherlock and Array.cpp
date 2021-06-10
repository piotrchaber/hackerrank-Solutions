// github.com/piotrchaber

std::string balancedSums(std::vector<int> arr) {
    int totalSum = std::accumulate(arr.begin(), arr.end(), 0);
    int leftSum = 0;
    for (int i : arr) {
        if (2 * leftSum == totalSum - i) { return "YES"; }
        leftSum += i;
    }
    return "NO";
}