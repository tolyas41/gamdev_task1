#pragma once
#include <string>
#include <vector>
#include "River.h"
class Sea {
    std::string name;
    float area;
    const std::string continent;
    std::vector <River> flowrivers;
    static int count;
public:
    Sea(std::string, float, std::string);
    Sea();
    ~Sea();
    void add_flowrivers(const River& r);
    void get_all();
    static int get_count();

