// github.com/piotrchaber

std::vector<int> countingSort(std::vector<int> arr) {
    std::vector<int> result(100);
    for (size_t i = 0; i < arr.size(); i++) {
        result[arr[i]]++;
    }
    return result;
}