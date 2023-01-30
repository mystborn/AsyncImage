#pragma once
#include "stdafx.h"
#include <vector>

struct image {
	unsigned int width;
	unsigned int height;
	std::vector<unsigned char> data;
};