// github.com/piotrchaber

std::vector<int> serviceLane(std::vector<int> width, std::vector<std::vector<int>> cases) {
    std::vector<int> result;
    for(std::vector<int> vi : cases) {
        result.push_back(*std::min_element(width.begin() + vi[0], width.begin() + vi[1] + 1));
    }
    return result;
}