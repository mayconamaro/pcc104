template<std::totally_ordered T>
int search(std::vector<T> v, T key){

    int middle = ceil(v.size() / 2.0) - 1;

    if (v[middle] == key)
        return middle;

    if (v.size() == 1)
        return -1;

    if (key < v[middle]){
        std::vector<T> v1(v.begin(), v.begin() + middle);
        return search(v1, key);
    } else {
        std::vector<T> v2(v.begin() + middle + 1, v.end());
        int resp = search(v2, key);
        return resp == -1 ? -1 : middle + 1 + resp;
    }
}