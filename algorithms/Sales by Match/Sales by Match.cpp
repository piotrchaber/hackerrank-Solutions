// github.com/piotrchaber

int sockMerchant(int n, std::vector<int> arr) {
    int pairs = 0;
    std::vector<int> vi;
    for (int i : arr) {
        auto it = find(vi.begin(), vi.end(), i);
        if (it == vi.end()) {
            vi.push_back(i);
        }
        else { pairs++; vi.erase(it); }
    }
    return pairs;
}

int sockMerchant(int n, std::vector<int> arr)
    int pairs = 0;
    std::map<int, int> m;
    for(int i : arr) {
        m[i]++;
        if(m[i] % 2 == 0) pairs++;
    }
    return pairs;
}