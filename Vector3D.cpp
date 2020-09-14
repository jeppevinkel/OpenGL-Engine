//
// Created by jeppe on 14/09/2020.
//

#include "Vector3D.h"
#include <cmath>
#include <sstream>
#include <iomanip>
#include <string>

template<typename T>
Vector3D<T>::Vector3D() = default;

template<typename T>
Vector3D<T>::Vector3D(T x, T y, T z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

template<typename T>
Vector3D<T> Vector3D<T>::normalized() const {
    T length = this->magnitude();

    return Vector3D(this->x / length, this->y / length, this->z / length);
}

template<typename T>
T Vector3D<T>::magnitude() const {
    return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
}

template<typename T>
T Vector3D<T>::sqrMagnitude() const {
    return pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2);
}

template<typename T>
bool Vector3D<T>::equals(Vector3D other) const {
    return this->x == other.x && this->y == other.y && this->z == other.z;
}

template<typename T>
std::string Vector3D<T>::toString(int precision) const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(precision) << "(" << this->x << ", " << this->y << ", " << this->z << ")";
    return stream.str();
}

template<typename T>
T Vector3D<T>::angle(Vector3D from, Vector3D to) {
    return std::acos(dot(from, to) / (from.magnitude() * to.magnitude()));
}

template<typename T>
T Vector3D<T>::dot(Vector3D a, Vector3D b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;;
}

template<typename T>
[[maybe_unused]] void Vector3D<T>::set(T x, T y, T z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

template<typename T>
T Vector3D<T>::distance(Vector3D a, Vector3D b) {
    Vector3D result(a.x - b.x, a.y - b.y, a.z - b.z);
    return result.magnitude();
}

template<typename T>
Vector3D<T> Vector3D<T>::cross(Vector3D a, Vector3D b) {
    Vector3D result((a.y * b.z) - (a.z * b.y), -((a.x * b.z) - (a.z * b.x)), (a.x * b.y) - (a.y * b.x));
    return result;
}
