// github.com/piotrchaber

int equalizeArray(std::vector<int> arr) {
    int maxi = 0;
    std::map<int, int> m;
    for(int i : arr) {
        maxi = std::max(++m[i], maxi);
    }
    return arr.size() - maxi;
}