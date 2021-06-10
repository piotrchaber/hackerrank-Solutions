// github.com/piotrchaber

std::vector<int> gradingStudents(std::vector<int> grades) {
    int j;
    for(int& i : grades) {
        j = 5 * (i/5 + 1);
        i = (i > 37) && (j - i < 3) ? j : i;
    }
    return grades;
}