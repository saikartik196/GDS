#ifndef __GdsAbstractOperations__
#define __GdsAbstractOperations__

#include "GdsCommon.h"

class GdsOperationsBase {

public:
    virtual int search() = 0;
    virtual int sort() = 0;
};

#endif // __GdsAbstractOperations__