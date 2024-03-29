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

    double airDistance3 = getAirDistance(51.5074, -0.1278, 48.8566, 2.3522);
    double expectedDistance3 = 343.94;
    printf("Test Case 3:\nExpected: %.2f km\nActual: %.2f km\n", expectedDistance3, airDistance3);
    printf("Result: %s\n\n", (fabs(airDistance3 - expectedDistance3) < 0.01) ? "Passed" : "Failed");

    double dilatedTime1 = lorentzTimeDilation(1.0, 0.25);
    double expectedDilatedTime1 = 1.032796;
    printf("Test Case 1:\nExpected: %.6f units\nActual: %.6f units\n", expectedDilatedTime1, dilatedTime1);
    printf("Result: %s\n\n", (fabs(dilatedTime1 - expectedDilatedTime1) < 0.000001) ? "Passed" : "Failed");

    double dilatedTime2 = lorentzTimeDilation(2.5, 0.10);
    double expectedDilatedTime2 = 2.502520; // Corrected expected value
    printf("Test Case 2:\nExpected: %.6f units\nActual: %.6f units\n", expectedDilatedTime2, dilatedTime2);
    printf("Result: %s\n\n", (fabs(dilatedTime2 - expectedDilatedTime2) < 0.000001) ? "Passed" : "Failed");

    double dilatedTime3 = lorentzTimeDilation(5.0, 0.50);
    double expectedDilatedTime3 = 7.745967;
    printf("Test Case 3:\nExpected: %.6f units\nActual: %.6f units\n", expectedDilatedTime3, dilatedTime3);
    printf("Result: %s\n\n", (fabs(dilatedTime3 - expectedDilatedTime3) < 0.000001) ? "Passed" : "Failed");

    return 0;
}
