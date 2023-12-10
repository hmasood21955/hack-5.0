#include "utils.h"
#include <math.h>

#define EARTH_RADIUS 6371.0 
#define SPEED_OF_LIGHT 299792458.0 

double toRadians(double degree) {
    return degree * (M_PI / 180.0);
}

double getAirDistance(double originLatitude, double originLongitude, double destinationLatitude, double destinationLongitude) {
    originLatitude = toRadians(originLatitude);
    originLongitude = toRadians(originLongitude);
    destinationLatitude = toRadians(destinationLatitude);
    destinationLongitude = toRadians(destinationLongitude);

    double latitudeDifference = destinationLatitude - originLatitude;
    double longitudeDifference = destinationLongitude - originLongitude;

    double distance = acos(sin(originLatitude) * sin(destinationLatitude) + cos(originLatitude) * cos(destinationLatitude) * cos(longitudeDifference)) * EARTH_RADIUS;

    return distance; 
}

double lorentzTimeDilation(double t, double percentC) {
    if (percentC < 0.0 || percentC >= 1.0) {
        return -1.0; 
    }

    double v = percentC * SPEED_OF_LIGHT;

