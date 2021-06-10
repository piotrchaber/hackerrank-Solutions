// github.com/piotrchaber

std::vector<int> circularArrayRotation(std::vector<int> vi, int k, std::vector<int> queries) {
    std::vector<int> vii(vi.size()), result;
    if(k % vi.size()) {
        for(size_t i = 0; i < vi.size(); i++) { vii[(i + k) % vi.size()] = vi[i]; }
    } else vii = vi;
    for(int i : queries) result.push_back(vii[i]);
    return result;
}