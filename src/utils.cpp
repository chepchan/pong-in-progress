#include "utils.hpp"
#include <cmath>

float randf(float start, float end) {
	float span = end - start;

	float zeroToSpan = fmodf((float)rand(), span);

	return start + zeroToSpan;
}
