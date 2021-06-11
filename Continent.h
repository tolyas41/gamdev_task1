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
   
    std::string get_name();
    float get_area();
    std::string get_hemi();
    //std::vector get_countrs();
    void add_countrs(const Country&);
    void get_all_continent();
    static int get_count();

};

