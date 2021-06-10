// github.com/piotrchaber

int cookies(int k, std::vector<int> A) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    for (int a : A) pq.push(a);
    int operations = 0, cookie;
    while (!pq.empty() && pq.top() < k) {
        if (pq.size() == 1 && pq.top() < k) { return -1; }
        cookie = pq.top();
        pq.pop();
        cookie += 2 * pq.top();
        pq.pop();
        pq.push(cookie);
        operations++;
    }
    return operations;
}

int countZeros(int& second) {
    int sumSecond = 0;
    while (second > 1) {
        sumSecond += second;
        if (second % 2) sumSecond++;
        second /= 2;
    }
    return sumSecond;
}

int cookies(int k, std::vector<int> A) {
    std::map<int, int> m;
    for (int a : A) m[a]++;
    int sumSeconds = m.begin()->first ? 0 : countZeros(m.begin()->second);
    for (auto it = m.begin(); it->first < k && it != m.end(); it++) {
        if (std::next(it) == m.end() && it->second == 1) return -1;
        if (it->second > 1) { m[it->first + it->first * 2] += it->second / 2; }
        if (it->second % 2) { m[it->first + std::next(it)->first * 2]++; next(it)->second--; sumSeconds++; }
        sumSeconds += it->second;
    }
    return sumSeconds / 2;
}