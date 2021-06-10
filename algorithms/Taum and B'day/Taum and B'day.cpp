// github.com/piotrchaber

long taumBday(long b, long w, long bc, long wc, long z) {
    return std::min(bc, wc + z) * b + std::min(wc, bc + z) * w;
}