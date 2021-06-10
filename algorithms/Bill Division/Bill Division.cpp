// github.com/piotrchaber

void bonAppetit(std::vector<int> bill, int k, int b) {
    int sum = 0;
    for(size_t i = 0; i < bill.size(); i++) {
        if (i == k) continue;
        sum += bill[i];
    }
    std::cout << (sum/2 == b ? "Bon Appetit" : to_string(b - sum/2)) << std::endl;
}
