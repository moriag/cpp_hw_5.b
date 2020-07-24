template<typename T,typename B>
auto compress(T cont,B b){
    std::vector<typename std::decay<decltype(*cont.begin())>::type> vec;
    auto v=cont.begin();
    for(auto boolean:b){
        if(boolean)
            vec.push_back(*v);
        v++;
    }
    return vec;
}
