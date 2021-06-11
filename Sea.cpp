#include "Sea.h"
#include "River.h"
#include <string>
#include <vector>

int Sea::count = 0;

Sea::Sea(std::string n, float a, std::string c) : name{ n }, area{ a }, continent{ c } {count++; }
Sea::Sea() : Sea{ "none", 0, "unknown" } {}
Sea::~Sea() {count--;}
void Sea::add_flowrivers(const River& r) {
    flowrivers.push_back(r);
}
void Sea::get_all() {
    cout << "\n\n           --" << name << "--\nArea (mill of kms) : " << area << "\nContinent : " << cont << endl;
    cout << "Flowing rivers to " << name << " : ";
    for (auto& fr : flowrivers)
        std::count << fr.get_name() << " ,";
}
int Sea::get_count() { return count; }

