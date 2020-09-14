#include <iostream>
#include "Api/Vector3D.h"

int main(int argc, char** argv) {
    Vector3D myVec = Vector3D(4.65429874f, 3.2f, 3.4f);
    Vector3D myOtherVec(myVec);

    std::cout << "myVec: " << "X: " << myVec.x << " Y: " << myVec.y << " Z: " << myVec.z << " Length: " << myVec.magnitude() << std::endl;

    Vector3D myVecNorm = myVec.normalized();

    std::cout << "myVecNorm: " << "X: " << myVecNorm.x << " Y: " << myVecNorm.y << " Z: " << myVecNorm.z << " Length: " << myVecNorm.magnitude() << std::endl;

    std::cout << "myVec.equals(myOtherVec): " << myVec.equals(myOtherVec) << std::endl;
    std::cout << "myVec.equals(myVecNorm): " << myVec.equals(myVecNorm) << std::endl;

    std::cout << "myVec.toString(1): " << myVec.toString(1) << std::endl;
    std::cout << "myOtherVec.toString(4): " << myOtherVec.toString(4) << std::endl;
    std::cout << "myVecNorm.toString(): " << myVecNorm.toString() << std::endl;

    std::cout << "Vector3D.angle(myVec, myVecNorm): " << Vector3D<>::angle(myVec, myVecNorm) << std::endl;

    Vector3D<float> pointA(3, 3, 3);
    Vector3D<float> pointB(3, 3, 5);

    std::cout << "Vector3D.distance(pointA, pointB): " << Vector3D<>::distance(pointA, pointB) << std::endl;

    Vector3D<float> crossA(3, -5, 4);
    Vector3D<float> crossB(2, 6, 5);

    std::cout << "Vector3D.cross(crossA, crossB): " << Vector3D<>::cross(crossA, crossB).toString() << std::endl;
    std::cout << "Vector3D.dot(crossA, crossB): " << Vector3D<>::dot(crossA, crossB) << std::endl;

    return 0;
}
