#pragma once
#include <string>

class River {
    std::string name;
    float length;
    static int count;
public:
//constructors and destructor
    River(const std::string& init_name, float init_length);
    River();
    ~River();

//setters
    void set_name(const std::string& set_name);
    void set_length(float set_length);

//getters
    std::string get_name() const;
    static int get_count();
    float get_length() const;

//print
    void print_all() const;

};

