template<std::totally_ordered T>
std::pair<int, int> findMinMax(std::vector<T> &v, int l, int r){

    if(r - l == 0)
        return std::make_pair(l, l);
    
    int r1 = l + floor((r - l + 1) / 2.0) - 1;
    int l2 = l + floor((r - l + 1) / 2.0);
    
    std::pair<int, int> e = findMinMax(v, l, r1);
    std::pair<int, int> d = findMinMax(v, l2, r);

    return std::make_pair(
            v.at(e.first)  > v.at(d.first)  ? d.first  : e.first, 
            v.at(e.second) < v.at(d.second) ? d.second : e.second
                    );
}