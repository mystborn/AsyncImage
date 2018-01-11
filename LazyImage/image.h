#pragma once
#include "stdafx.h"
#include <vector>

struct image {
	size_t width;
	size_t height;
	std::vector<unsigned char> data;
};