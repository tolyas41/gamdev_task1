#pragma once
#include <string>
#include <iostream>
#include <vector>

class Continent {
    std::string name;
    float area;
    const string hemi;
    std::vector <Country> countrs;
    static int count;                    //static counter
public:
    //constructors and destructor
    Continent(string, float a, string h) : name{ n }, area{ a }, hemi{ h } {count++; }
    Continent() : Continent{ "none", 0, "unknown" } {}
    ~Continent() { //    cout << "destruction! .. of " << name << endl; 
        count--;
    }
    //methods
    void add_countrs(const Country& c) {
        countrs.push_back(c);
    }
    void get_all() {
        cout << "\n\n           --" << name << "--\nArea (mill of kms) : " << area << "\nHemosphere : " << hemi << endl;
        cout << "Countries of " << name << " : ";
        for (auto& cn : countrs)
            cn.get_name();
    }
    static int get_count() { return count; }

};
int Continent::count = 0;

