// github.com/piotrchaber

int simpleArraySum(std::vector<int> arr) {
    int sum = 0;
    for (int i : arr) { sum += i; }
    return sum;
}