#include <iostream>
#include <string.h>
#include "calculate_area.h"

using namespace std;

int Rectangle::calculate_area(){
    return width*height;
}

int Triangle::calculate_area(){
    return (width*height)/2;
}