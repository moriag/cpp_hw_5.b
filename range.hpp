#pragma once
#include <vector>
namespace itertools{

    class range
    {
        std::vector<int> vec;   
    public:
    range(int start,int end){
        for(;start<end;start++){
            vec.push_back(start);
        }
    }
    auto begin(){return vec.begin();}

    
    auto end(){return vec.end();}
    };
    
}
