#include "Continent.h"
int Continent::count = 0;
//constructors and destructor
Continent::Continent(string n, float a, string h) : name{ n }, area{ a }, hemi{ h } {count++; }
Continent::Continent() : Continent{ "none", 0, "unknown" } {}
Continent::~Continent() { //    cout << "destruction! .. of " << name << endl; 
    count--;
}
//methods
void Continent::add_countrs(const Country& c) {
    countrs.push_back(c);
}

void Continent::get_all_continent() {
    cout << "\n\n           --" << name << "--\nArea (mill of kms) : " << area << "\nHemosphere : " << hemi << endl;
    cout << "Countries of " << name << " : ";
    for (auto& cn : countrs)
        cn.get_name();
}
static int get_count() { return count; }

};
