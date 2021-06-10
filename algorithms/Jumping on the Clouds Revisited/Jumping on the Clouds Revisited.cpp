// github.com/piotrchaber

int jumpingOnClouds(std::vector<int> c, int k) {
    int path = 0;
    int energyLoss = 0;
    do {
        path = (path + k) % c.size();
        ++energyLoss;
        if(c[path] == 1) { ++energyLoss; ++energyLoss; }
    } while(path != 0);
    return 100 - energyLoss;
}