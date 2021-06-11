#pragma once
#include <string>

class River {
    std::string name;
    float length;
    static int count;
public:
    River(std::string, float);
    River();
    ~River();

    std::string get_name();
    float get_length();
    void get_all();
    static int get_count();
};

