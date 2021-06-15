#include "Sea.h"
#include "River.h"
#include <string>
#include <vector>
#include <iostream>

int Sea::count = 0;

//constructors and destructor
Sea::Sea(const std::string& init_name, float init_area, const std::string& init_continent) 
    : name{ init_name }, area{ init_area }, continent{ init_continent } {
    count++; 
}
Sea::Sea(const std::string& init_continent) 
    : name{ "none" }, area{ 0 }, continent{ init_continent } {
    count++;
}
Sea::Sea() 
    : Sea{ "none", 0, "unknown" } {}
Sea::~Sea() {
    count--;
}

//setters
void Sea::set_name(const std::string& set_name) {
    name = set_name;
}
void Sea::set_area(float set_area) {
    area = set_area;
}
void Sea::add_flowrivers(const River& river) {
    flowrivers.push_back(river);
}

//getters
int Sea::get_count() { 
    return count; 
}
std::string Sea::get_name() const { 
    return name; 
}
float Sea::get_area() const { 
    return area; 
}
std::string Sea::get_continent() const { 
    return continent; 
}

//print all with getters
void Sea::print_all() {
    std::cout << "\n\n           --" << get_name() << "--\nArea (mill of kms) : " 
    << get_area() << "\nContinent : " << get_continent() << std::endl;
    std::cout << "Flowing rivers to " << get_name() << " : ";
    for (auto& river : flowrivers)
        std::cout << river.get_name() << ", ";
}



