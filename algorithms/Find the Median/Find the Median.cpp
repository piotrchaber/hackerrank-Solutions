// github.com/piotrchaber

int quickSelect(std::vector<int>& vi, int jth) {
    std::vector<int> left, right;
    int index;
    int pivot = vi.back();
    for (size_t i = 0; i < vi.size() - 1; i++) {
        if (vi[i] < pivot) { left.push_back(vi[i]); continue; }
        right.push_back(vi[i]);
    }
    index = left.size() + 1;
    return index == jth ? pivot : index < jth ? quickSelect(right, jth - index) : quickSelect(left, jth);
}

int findMedian(std::vector<int> arr) {
    return quickSelect(arr, arr.size() % 2 ? (arr.size() / 2) + 1 : arr.size() / 2);
}