//
// Created by jeppe on 14/09/2020.
//

#ifndef OPENGL_ENGINE_VECTOR3D_H
#define OPENGL_ENGINE_VECTOR3D_H

#include <string>

template<typename T = float>
class Vector3D {
private:
public:
    T x = 0, y = 0, z = 0;

    [[nodiscard]] Vector3D normalized() const;
    [[nodiscard]] T magnitude() const;
    [[nodiscard]] T sqrMagnitude() const;

    [[nodiscard]] std::string toString(int precision = 0) const;

    [[maybe_unused]] void set(T x, T y, T z);

    [[nodiscard]] bool equals(Vector3D other) const;

    static T angle(Vector3D from, Vector3D to);
    static T dot(Vector3D a, Vector3D b);
    static Vector3D<T> cross(Vector3D a, Vector3D b);
    static T distance(Vector3D a, Vector3D b);

    Vector3D();
    Vector3D(T x, T y, T z);
};

template class Vector3D<int>;
template class Vector3D<float>;
template class Vector3D<double>;

#endif //OPENGL_ENGINE_VECTOR3D_H
