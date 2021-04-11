template<std::totally_ordered T>
void sort(std::vector<T>& v) {

    for(auto i = v.begin() + 1; i != v.end(); i++){

        T v1 = *i;
        auto j = i - 1;

        while(j >= v.begin() && *j > v1){
            *(j + 1) = *j;
            j--;
        }

        *(j + 1) = v1;
    }
}