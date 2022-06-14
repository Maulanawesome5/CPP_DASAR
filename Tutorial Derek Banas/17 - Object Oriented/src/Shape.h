#ifndef __SHAPE_H
#define __SHAPE_H

class Shape{
    protected:
        double height;
        double width;

    public:
        static int numOfShapes;
        Shape(double lenght); // constructor
        Shape(double height, double width);
        Shape();

        virtual ~Shape(); // destructor
        
        // getter and setter
        void SetHeight(double height);
        double GetHeight();
        void SetWidth(double width);
        double GetWidth();
        static int GetNumOfShapes();
        virtual double Area();
};

#endif
