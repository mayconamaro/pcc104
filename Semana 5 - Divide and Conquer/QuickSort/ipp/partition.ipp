template<std::totally_ordered T>
int partition(std::vector<T> &v, int l, int r){

    T p = v.at(l);
    int i = l; int j = r + 1;

    do {

        do { i++; } while (i < r && v.at(i) < p);
        do { j--; } while (j > l && v.at(j) > p);
        std::swap(v.at(i), v.at(j));

    } while (i < j);

    std::swap(v.at(i), v.at(j));
    std::swap(v.at(l), v.at(j));

    return j;
}