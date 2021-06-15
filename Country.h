#pragma once

#include <string>
#include <iostream>

class Country {
    std::string name;
    float area;
    std::string state_lang;
    float population;
    static int count;                     //static counter
public:
//constructors and destructor
    Country(const std::string& init_name, float init_area, const std::string& init_st_lang, float init_popul);
    Country();
    ~Country();

//setters
    void set_name(const std::string& set_name);
    void set_area(float set_area);
    void set_state_lang(const std::string& set_state_lang);
    void set_population(float set_population);

//getters
    std::string get_name() const;
    float get_area() const;
    std::string get_state_lang() const;
    float get_population() const;
    static int get_count();

//print
    void print_all() const;
}; 