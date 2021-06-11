#pragma once
#include <string>

class Star {
    std::string name;
    std::string type;
    float dist;
    static int count;
public:
    Star(std::string, std::string, float);
    Star();
    ~Star();

    std::string get_name() const;
    std::string get_type() const;
    float get_dist() const;
    void print_all() const;

    static int get_count();
};
