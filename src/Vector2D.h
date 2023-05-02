#ifndef VECTOR2D_H
#define VECTOR2D_H

namespace godot {

class Vector2D : public Sprite2D {
    GDCLASS(GDExample, Sprite2D)

private:
    double time_passed;

protected:
    static void _bind_methods();

public:
    GDExample();
    ~GDExample();

    void _process(double delta);
};

}

#endif