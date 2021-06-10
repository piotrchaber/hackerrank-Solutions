// github.com/piotrchaber

std::vector<int> cutTheSticks(std::vector<int> arr) {
    std::vector<int> result;
    std::sort(arr.begin(), arr.end());
    result.push_back(arr.size());
    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i] != arr[i + 1]) result.push_back(arr.size() - (i + 1));
    }
    return result;
}