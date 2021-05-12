template<std::totally_ordered T>
void merge(std::vector<T> &b, std::vector<T> &c, std::vector<T> &v){

    unsigned int i = 0, j = 0, k = 0;

    while (i < b.size() && j < c.size()) {
        if (b.at(i) <= c.at(j)) {
            v.at(k++) = b.at(i++);
        } else {
            v.at(k++) = c.at(j++);
        }
    }

    if (i == b.size()) {
        while (j < c.size()){
            v.at(k++) = c.at(j++);
        }
    } else {
        while (i < b.size()){
            v.at(k++) = b.at(i++);
        }
    }
    
}