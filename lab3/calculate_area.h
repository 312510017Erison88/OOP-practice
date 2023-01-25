#include <iostream>
#include <string.h>

using namespace std;

class Rectangle {
    private:
        int width;
        int height;

    public:
        Rectangle(int w, int h){
            width = w;
            height = h;
        }
        ~Rectangle();
        
        int calculate_area();
};

class Triangle {
    private:
        int width;
        int height;

    public:
        Triangle(int w, int h){
            width = w;
            height = h;
        }
        ~Triangle();

        int calculate_area();

};