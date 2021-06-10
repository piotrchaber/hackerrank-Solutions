// github.com/piotrchaber

void insertionSort2(int n, std::vector<int>& arr) {
    for (size_t i = 1; i < n; i++) {
        for (size_t j = 0; j < i; j++) {
            if (arr[j] > arr[i]) {
                arr.insert(arr.begin() + j, arr[i]);
                arr.erase(arr.begin() + (i + 1));
            }
        }
        for (int k : arr) std::cout << k << " ";
	std::cout << std::endl;
    }
}

void insertionSort1(int n, std::vector<int>& arr) {
    int temp = arr[n - 1];
    int i = n - 2;
    while (i + 1 && temp < arr[i]) { arr[i + 1] = arr[i]; i--; }
    arr[i + 1] = temp;
    for (int i : arr) std::cout << i << " ";
    std::cout << endl;
}

void insertionSort2(int n, std::vector<int>& arr) {
    for (size_t i = 2; i < n + 1; i++) {
        insertionSort1(i, arr);
    }
}