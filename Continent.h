#pragma once
#include <string>
#include <vector>
#include "Country.h"

class Continent {
    std::string name;
    float area;
    const std::string hemi;
    std::vector <Country> countrs;
    static int count;                    
public:

    Continent(std::string, float, std::string);
    Continent();
    ~Continent();
   
    std::string get_name() const;
    float get_area() const;
    std::string get_hemi() const;
    void add_countrs(const Country&);
    void print_all() ;
    static int get_count();

};

