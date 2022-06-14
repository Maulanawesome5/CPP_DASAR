#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "Shape.h"

class Circle: public Shape {
public:
    Circle();
    Circle(const Circle& orig);
    Circle(double width);
    virtual ~Circle();
    double Area();
};


#endif
