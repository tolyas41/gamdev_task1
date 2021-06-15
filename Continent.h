#pragma once
#include <string>
#include <vector>
#include "Country.h"

class Continent {
    std::string name;
    float area;
    const std::string hemisphere;
    std::vector <Country> countries;
    static int count;      
public:
//constructors and destructor
    Continent(const std::string& init_name, float init_area, const std::string& init_hemisphere);
    Continent(const std::string& init_hemisphere);
    Continent();
    ~Continent();
   
//getters
    std::string get_name() const;
    float get_area() const;
    std::string get_hemisphere() const;
    static int get_count();
    
//setters
    void set_name(const std::string& set_name);
    void set_area(float set_area);
    void add_countries(const Country& country);

//print
    void print_all() ;


};

