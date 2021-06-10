// github.com/piotrchaber

std::vector<int> permutationEquation(std::vector<int> p) {
    std::vector<int> r;
    int f;
    for (size_t i = 0; i < p.size(); i++) {
        f = find(p.begin(), p.end(), i + 1) - p.begin() + 1;
        r.push_back(find(p.begin(), p.end(), f) - p.begin() + 1);
    }
    return r;
}