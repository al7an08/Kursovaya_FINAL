#include <chrono>
#include <cmath>
#include "GetDegrees.h"
#include "Header.h"

float get_degrees(float i_degrees)
{
	return static_cast<float>(std::fmod(360 + std::fmod(i_degrees, 360), 360));
}