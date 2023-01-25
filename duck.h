#pragma once
#include "Iflying.h"
#include "Iquack.h"
#include <iostream>
class duck : public Iflying, public Iquack
{
public:
	duck();
};
