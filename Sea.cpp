#include "Sea.h"
#include "River.h"
#include <string>
#include <vector>
#include <iostream>

int Sea::count = 0;

Sea::Sea(std::string n, float a, std::string c) : name{ n }, area{ a }, continent{ c } {count++; }
Sea::Sea() : Sea{ "none", 0, "unknown" } {}
Sea::~Sea() {count--;}
void Sea::add_flowrivers(const River& r) {
    flowrivers.push_back(r);
}
void Sea::print_all() {
    std::cout << "\n\n           --" << get_name() << "--\nArea (mill of kms) : " << get_area() << "\nContinent : "
        << get_continent() << std::endl;
    std::cout << "Flowing rivers to " << get_name() << " : ";
    for (auto& fr : flowrivers)
        std::cout << fr.get_name() << ", ";
}
int Sea::get_count() { return count; }
std::string Sea::get_name() const { return name; }
float Sea::get_area() const { return area; }
std::string Sea::get_continent() const { return continent; }

