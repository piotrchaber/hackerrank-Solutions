// github.com/piotrchaber

void kaprekarNumbers(long long p, long long q) {
    std::vector<long long> result;
    int sum = 0;
    long long n = 10;
    long long temp;
    for(long long i = p; i <= q; i++) {
        temp = i * i;
        if(temp >= n * n) n *= 10;
        while(temp != 0) {
            sum += temp % n;
            temp /= n;
        }
        if(i == sum) result.push_back(i);
        sum = 0;
    }
    if(!result.size()) std::cout << "INVALID RANGE";
    else for(long long i : result) std::cout << i << " ";
    std::cout << std::endl;
}