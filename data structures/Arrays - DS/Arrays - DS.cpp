// github.com/piotrchaber

int* reverseArray(int a_count, int* a, int* result_count) {
    int n = 0, temp;
    while(n < a_count / 2) {
        temp = *(a + n);
        *(a + n) = *(a + a_count - (n + 1));
        *(a + a_count - (n + 1)) = temp;
        n++;
    }
    *result_count = a_count;
    return a;
}