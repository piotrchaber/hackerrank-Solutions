// github.com/piotrchaber

std::vector<int> countingSort(std::vector<int> arr) {
    std::vector<int> countIndex(100);
    std::vector<int> result;
    for (size_t i = 0; i < arr.size(); i++) countIndex[arr[i]]++;
    for (size_t i = 0; i < countIndex.size(); i++) result.insert(result.end(), countIndex[i], i);
    return result;
}