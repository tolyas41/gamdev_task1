#pragma once
#include <string>

class Star {
    std::string name;
    std::string type;
    float distance;
    static int count;
public:
//constructors and destructor
    Star(const std::string& init_name, const std::string& init_type, float init_distance);
    Star();
    ~Star();

//setters
    void set_name(const std::string& set_name);
    void set_type(const std::string& set_type);
    void set_distance(float set_distance);

//getters
    std::string get_name() const;
    std::string get_type() const;
    float get_distance() const;
    static int get_count();

//print
    void print_all() const;


};
