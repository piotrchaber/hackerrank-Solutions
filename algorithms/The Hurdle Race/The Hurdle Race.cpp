// github.com/piotrchaber

int hurdleRace(int k, std::vector<int> height) {
    return std::max(*std::max_element(height.begin(), height.end()) - k, 0);
}