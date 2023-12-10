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
