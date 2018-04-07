#ifndef OTP_H_INCLUDED
#define OTP_H_INCLUDED

#include <bits/stdc++.h>

std::vector<int> OTPencryptdata(std::vector<int> in,std::vector<int> key){
    std::vector<int> key1;
    for(int i=0;i<(int)in.size();i++){
        key1.push_back(in.at(i) ^ key.at(i));
    }
    return key1;
}

std::vector<int> OTPdecryptdata(std::vector<int> c1,std::vector<int> key){
    std::vector<int> data;
    for(int i=0;i<(int)c1.size();i++){
        data.push_back(c1.at(i) ^ key.at(i));
    }
    return data;
}


#endif // OTP_H_INCLUDED
