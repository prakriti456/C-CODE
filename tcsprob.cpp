#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    // Read the input
    int S, P;
    std::cin >> S >> P;
    
    // Calculate the discriminant
    int discriminant = S * S - 4 * P;
    
    // Calculate the two possible values for the numbers
    double sqrt_discriminant = std::sqrt(discriminant);
    double x = (S + sqrt_discriminant) / 2;
    double y = (S - sqrt_discriminant) / 2;
    
    // Ensure x is the smaller number
    if (x > y) {
        std::swap(x, y);
    }
    
    // Print the result
    std::cout << static_cast<int>(x) << " " << static_cast<int>(y) << std::endl;
    
    return 0;
}
