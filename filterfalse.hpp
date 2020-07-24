template<typename T,typename F>
auto filterfalse(F lambda,T cont){
    std::vector<typename std::decay<decltype(*cont.begin())>::type> vec;
    for(auto i:cont){
        if(!lambda(i))
            vec.push_back(i);
    }
    return vec;
}