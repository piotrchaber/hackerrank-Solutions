// github.com/piotrchaber

int runningTime(std::vector<int> arr) {
    int result = 0;
    for (size_t i = 1; i < arr.size(); i++) {
        for (size_t j = 0; j < i; j++) {
            if (arr[j] > arr[i]) { result++; }
        }
    }
    return result;
}