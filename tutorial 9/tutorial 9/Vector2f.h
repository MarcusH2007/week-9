#ifndef _VECTOR2F_H
#define _VECTOR2F_H


class Vector2f {
private:
    float x;
    float y;

public:
    Vector2f()
    {
        x = 0.0f;
        y = 0.0f;
    }
    Vector2f(float xnum, float ynum)
    {
        x = xnum;
        y = ynum;
    }
    ~Vector2f() {};

    float getX() {
        return x;
    }
    void setX(float value) {
        x = value;
    }

    float getY() {
        return y;
    }
    void setY(float value) {
        y = value;
    }
};



#endif
