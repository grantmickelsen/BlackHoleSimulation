#include <iostream>
#include "GRMHDModule.h"
#include "PhysicsSolver.h"

int main() {
    GRMHDModule grmhd;
    grmhd.performCalculation();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}