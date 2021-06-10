// github.com/piotrchaber

int minimumDistances(std::vector<int> arr) {
    size_t minimum = arr.size();
    for (size_t i = 0; i < arr.size() - 1; i++) {
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j]) { minimum = std::min(j - i, minimum); break; }
        }
    }
    return minimum == arr.size() ? -1 : minimum;
}

int minimumDistances(std::vector<int> arr) {
    long m = arr.size();
    for(size_t i = 0; i < arr.size() - 1; i++) {
        auto f = find(arr.begin() + (i + 1), arr.end(), arr[i]);
        if(f != arr.end()) m = std::min(std::distance(arr.begin() + i, f), m);
    }
    return m == arr.size() ? -1 : m;
}