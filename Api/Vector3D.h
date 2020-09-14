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

    void set(T t, T y, T z);

    Vector3D<T> operator-(const Vector3D<T>& rhs);
    Vector3D<T> operator+(const Vector3D<T>& rhs);
    Vector3D<T> operator*(const T& rhs);
    Vector3D<T> operator/(const T& rhs);
    bool operator==(const Vector3D<T>& rhs);
    bool operator!=(const Vector3D<T>& rhs);

    [[nodiscard]] bool equals(Vector3D other) const;

    static T angle(Vector3D from, Vector3D to);
    static T dot(Vector3D a, Vector3D b);
    static Vector3D<T> cross(Vector3D a, Vector3D b);
    static T distance(Vector3D a, Vector3D b);
    static Vector3D<T> max(Vector3D a, Vector3D b);
    static Vector3D<T> min(Vector3D a, Vector3D b);
    static Vector3D<T> lerp(Vector3D a, Vector3D b, float t);

    Vector3D();
    Vector3D(T x, T y, T z);
};

template class Vector3D<int>;
template class Vector3D<float>;
template class Vector3D<double>;

#endif //OPENGL_ENGINE_VECTOR3D_H
