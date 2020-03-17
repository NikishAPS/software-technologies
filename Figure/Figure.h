#ifndef FIGURE_H 
#define FIGURE_H

struct Points
{
    int x;
    int y;
};

class Figure
{
    private:
        Points* points = nullptr;
        int* tops = nullptr;
    public:
        Figure();

        Figure(int tops);

        void SetPoints();

        virtual void GetName();

        virtual float GetSquare();

        virtual float GetPerimeter();
        
        ~Figure();
};

class Rectangle : public Figure
{
    protected:
        int* width = nullptr;
        int* height = nullptr;
        using  Figure::SetPoints;
    public:
        Rectangle(int w, int h);

        void GetName();

        virtual float GetSquare();

        virtual float GetPerimeter();

        ~Rectangle();
};

class Square : public Rectangle
{
    public:
        Square(int side);

        void GetName();

        float GetSquare();

        float GetPerimeter();
};

class Circle : public Figure
{
    private:
        int* radius = nullptr;
        using  Figure::SetPoints;
    public:
        Circle(int radius);

        void GetName();

        float GetSquare();

        float GetPerimeter();

        ~Circle();
};

class Ellipse : public Figure
{
    private:
        int* r = nullptr;
        int* R = nullptr;
        using  Figure::SetPoints;
    public:
        Ellipse(int r, int R);

        void GetName();

        float GetSquare();

        float GetPerimeter();

        ~Ellipse();
};

#endif 

