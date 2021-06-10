// github.com/piotrchaber

std::vector<int> quickSort(std::vector<int> arr) {
    std::vector<int> result, left, right;
    int equal = arr[0];
    for(size_t i = 1; i < arr.size(); i++) {
        if(arr[i] < equal) { left.push_back(arr[i]); continue; }
        right.push_back(arr[i]);
    }
    result.insert(result.end(), left.begin(), left.end());
    result.push_back(equal);
    result.insert(result.end(), right.begin(), right.end());
    return result;
}

std::vector<int> quickSort(std::vector<int> arr) {
    int pivot = arr[0];
    int j = arr.size() - 1;
    for(size_t i = arr.size() - 1; i > 0; i--) {
        if(arr[i] > pivot) { std::swap(arr[i], arr[j]); j--; }
    }
    std::swap(arr[0], arr[j]);
    return arr;
}