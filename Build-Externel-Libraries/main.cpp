#include <Eigen/Dense>
#include <fmt/core.h>

int main() {
    Eigen::Vector3d v1(1.0, 2.0, 3.0);
    Eigen::Vector3d v2(4.0, 5.0, 6.0);

    Eigen::Vector3d v = v1.cross(v2);

    fmt::print("Cross product: [{}, {}, {}]\n", v[0], v[1], v[2]);

    return 0;
}
