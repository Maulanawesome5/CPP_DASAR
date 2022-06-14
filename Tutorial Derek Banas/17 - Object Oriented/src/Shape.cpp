#include "Shape.h"

Shape::Shape(double lenght){
    // constructor
    this->height = lenght;
    this->width = lenght;
}

Shape::Shape(double height, double width){
    // constructor
    this->height = height;
    this->width = width;
}

Shape::~Shape() = default; // destructor

void Shape::SetHeight(double height){ this->height = height; }

double Shape::GetHeight(){ return height; }

void Shape::SetWidth(double width){ this->width = width; }

double Shape::GetWidth(){ return width; }

int Shape::GetNumOfShapes(){ return numOfShapes; }

double Shape::Area(){
    return height * width;
}

int Shape::numOfShapes = 0;
