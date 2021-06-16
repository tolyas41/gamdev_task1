#pragma once
#include <string>
#include <vector>
#include "River.h"
#include "Continent.h"

class Sea {
    std::string name;
    float area;
    const Continent& continent;
    std::vector <River> flowrivers;
    static int count;
public:
//contructors and destructor
    Sea(const std::string& init_name, float init_area, const Continent& init_continent);
    Sea(const Continent& init_continent);
    ~Sea();

//setters
    void set_name(const std::string& set_name);
    void set_area(float set_area);
    void add_flowrivers(const River& river);

//getters
    std::string get_name() const;
    float get_area() const;
    std::string get_continent() const;
    static int get_count();

//print
    void print_all();
};