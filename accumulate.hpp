
template<typename T,typename F>
auto accumulate(T cont,F lambda){
  
    std::vector<typename std::decay<decltype(*cont.begin())>::type> vec;

    
    vec.push_back(*cont.begin());
    for(auto i=++cont.begin();i!=cont.end();i++){
        vec.push_back(lambda(*(vec.end()-1),*i));
    }
    return vec;
}
template<typename T>
auto accumulate(T cont){
    
    return accumulate(cont,[](auto x,auto y){return x+y;});
}
