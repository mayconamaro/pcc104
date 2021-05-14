template<std::totally_ordered T>
void quicksort(std::vector<T> &v, int l, int r){

    if (l < r){

        int s = partition(v, l, r);
        quicksort(v, l, s-1);
        quicksort(v, s+1, r);
    }
}