// github.com/piotrchaber

std::vector<int> jimOrders(std::vector<std::vector<int>> orders) {
    std::vector<int> result;
    std::multimap<int, int> mm;
    for(size_t i= 0; i < orders.size(); i++) { mm.insert(make_pair(orders[i][0] + orders[i][1], i+1)); }
    for(auto it = mm.begin(); it != mm.end(); it++) { result.push_back(it->second); }
    return result;
}

std::vector<int> jimOrders(std::vector<std::vector<int>> orders) {
    std::vector<int> result;
    for (size_t i = 0; i < orders.size(); i++) {
        orders[i][1] = orders[i][0] + orders[i][1];
        orders[i][0] = i + 1;
    }
    std::sort(orders.begin(), orders.end(), [](std::vector<int>& vi1, std::vector<int>& vi2)
	{ if (vi1[1] == vi2[1]) return vi1[0] < vi2[0]; return vi1[1] < vi2[1]; });
    for (auto& i : orders) result.push_back(i[0]);
    return result;
}