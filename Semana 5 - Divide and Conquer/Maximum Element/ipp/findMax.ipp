template<std::totally_ordered T>
int findMax(std::vector<T> &v, int l, int r){

    if(r - l == 0)
        return l;
    
    int r1 = l + floor((r - l + 1) / 2.0) - 1;
    int l2 = l + floor((r - l + 1) / 2.0);
    
    int e = findMax(v, l, r1);
    int d = findMax(v, l2, r);

    return (v.at(e) < v.at(d) ? d : e);
}