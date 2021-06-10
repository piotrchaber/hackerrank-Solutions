// github.com/piotrchaber

class Pair
{
public:
    Pair(int m = 1, int n = 1) : m_(m), n_(n) {}
    int sum() { return m_ + n_; }
    bool isDividedBy(int k) { return !(sum() % k); } 
private:
    int m_;
    int n_;    
};

int divisibleSumPairs(int n, int k, std::vector<int> arr) {
    Pair p;
    int count = 0;
    for(size_t i = 0; i < n - 1; i++) {
        for(size_t j = i + 1; j < n; j++) {
            p = { arr[i], arr[j] };
            if(p.isDividedBy(k)) count++;
        }
    }
    return count;
}