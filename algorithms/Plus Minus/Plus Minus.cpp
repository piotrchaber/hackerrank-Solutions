// github.com/piotrchaber

void plusMinus(std::vector<int> arr) {
    int p = 0, n = 0, z = 0;
    for(int i : arr) {
        i > 0 ? p++ : i < 0 ? n++ : z++;
    }
    std::cout.precision(6);
    std::cout << (double)p/arr.size() << std::endl;
    std::cout << (double)n/arr.size() << std::endl;
    std::cout << (double)z/arr.size() << std::endl;
}