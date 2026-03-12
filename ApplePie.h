#include "Pie.h"
#ifndef APPLEPIE_H
#define APPLEPIE_H

class ApplePie: public Pie {
public:
	std::string description() override;
	void tastiness() override;
};
#endif