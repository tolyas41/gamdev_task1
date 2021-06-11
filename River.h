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

    std::string get_name() const;
    float get_length() const;
    void print_all() const;
    static int get_count();
};

