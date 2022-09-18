#pragma once

#include "FilterGeneric.h"

class FilterNonPositive : public FilterGeneric{

private:
    virtual bool g(int);

};