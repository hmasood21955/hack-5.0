#include "utils.h"
#include <stdio.h>
#include<math.h>

int main() {
    
    double airDistance1 = getAirDistance(37.7749, -122.4194, 34.0522, -118.2437);
    double expectedDistance1 = 559.79;
    printf("Test Case 1:\nExpected: %.2f km\nActual: %.2f km\n", expectedDistance1, airDistance1);
    printf("Result: %s\n\n", (fabs(airDistance1 - expectedDistance1) < 0.01) ? "Passed" : "Failed");

    double airDistance2 = getAirDistance(40.7128, -74.0060, 34.0522, -118.2437);
    double expectedDistance2 = 3944.27;
    printf("Test Case 2:\nExpected: %.2f km\nActual: %.2f km\n", expectedDistance2, airDistance2);
    printf("Result: %s\n\n", (fabs(airDistance2 - expectedDistance2) < 0.01) ? "Passed" : "Failed");

