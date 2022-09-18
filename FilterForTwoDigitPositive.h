#pragma once

#include "FilterGeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric{

private:
    virtual bool g(int);

};