// github.com/piotrchaber

int beautifulTriplets(int d, vector<int> arr) {
    std::map<int, int> m;
    int result = 0;
    for(int i : arr) {
        m[i]++;
        result += m[i - d] * m[i - d - d];
    }
    return result;
}

int beautifulTriplets(int d, std::vector<int> arr) {
    auto exist = [=](int k){ return binary_search(arr.begin(), arr.end(), k); };
    int result = std::count_if(arr.begin(), arr.end(), [=](int k) { return exist(k + d) && exist(k + d + d); });
    return result;
}