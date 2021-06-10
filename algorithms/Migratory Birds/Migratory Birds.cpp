// github.com/piotrchaber

int migratoryBirds(std::vector<int> arr) {
	std::vector<int> type;
	for (int i : {1, 2, 3, 4, 5}) {
		type.push_back(std::count(arr.begin(), arr.end(), i));
	}
	return std::distance(type.begin(), std::max_element(type.begin(), type.end())) + 1;
}