template <typename T>
std::set<std::set<T>> all_subsets(std::set<T> v){
    
    std::set<std::set<T>> resp;
    
    unsigned int count = pow(2, v.size());

    for(unsigned int i = 0; i < count; i++){
        std::set<T> aux;
        for(unsigned int j = 0; j < v.size(); j++){
            if((i & (1 << j)) != 0){
                auto it = v.begin(); for (unsigned int k = 0; k < j; k++) it++;
                aux.insert(*it);
            }
        }
        resp.insert(aux);
    }

    return resp;
}