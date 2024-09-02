#include <cmath>


class Vector2D {
    public:
        Vector2D(double x, double y);
        ~Vector2D();

        double getX();
        double getY();
        void setX(double x);
        void setY(double y);

        Vector2D operator+(Vector2D &vec);
        Vector2D operator-(Vector2D &vec);

        double distance(Vector2D &vec);

    protected:
        double x;
        double y;
};