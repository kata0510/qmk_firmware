#pragma once

#include "quantum.h"

#define LAYOUT_ortho_1x4( \
	L00, L01, R00, R01\
	) \
	{ \
		{ L00, L01 }, \
		{ R00, R01 } \
	}
