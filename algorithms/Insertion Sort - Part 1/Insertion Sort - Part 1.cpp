// github.com/piotrchaber

void insertionSort1(int n, std::vector<int> arr) {
    int temp = arr.back();
    int i = arr.size() - 2;
    while (i + 1 && temp < arr[i]) {
        arr[i + 1] = arr[i]; i--;
        for (int j : arr) std::cout << j << " ";
	std::cout << std::endl;
    }
    arr[i + 1] = temp;
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;
}