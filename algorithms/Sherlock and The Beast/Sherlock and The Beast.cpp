// github.com/piotrchaber

void decentNumber(int n) {
    std::string result;
    int m = 0;
    while (n >= 3 && n % 3) { n -= 5; m++; }
    if (n < 3 && n) result = "-1";
    else result = std::string(n, '5') + std::string(m * 5, '3');
    std::cout << result << std::endl;
}