// github.com/piotrchaber

void miniMaxSum(std::vector<int> arr) {
    int64_t sum = 0;
    for (int i : arr) { sum += i; }
    std::cout << sum - *max_element(arr.begin(), arr.end()) << " ";
    std::cout << sum - *min_element(arr.begin(), arr.end()) << std::endl;
}