#pragma once
#include <sstream>
using namespace std;
class ObjetoBase
{
public:
	virtual ~ObjetoBase();
	virtual string toString() const = 0;

};

