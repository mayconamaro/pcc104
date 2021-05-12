template<std::totally_ordered T>
void sort(std::vector<T> &v){

    if(v.size() > 1){

        std::vector<T> b(v.begin(), v.begin() + floor(v.size() / 2.0));
        std::vector<T> c(v.begin() + floor(v.size() / 2.0), v.end());

        sort(b);
        sort(c);

        merge(b, c, v);
    }
}