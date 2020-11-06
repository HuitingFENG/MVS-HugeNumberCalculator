#include <stdlib.h>
#include <stdio.h>
#include "IHMHugeNumber/ScanHugeNumber.h"
#include "IHMHugeNumber/ShowHugeNumber.h"
#include "UseHugeNumber/Operator/HugeFloatOperator.h"
#include "UseHugeNumber/Operator/HugeIntOperator.h"
#include "UseHugeNumber/Operator/HugeUnsignedIntOperator.h"



int main(void) {
    HugeUnsignedInt* hugeNumber = createHugeUnsignedIntFromString("123456789012345678901234567890");
    printHugeUnsignedInt(hugeNumber);
    hugeNumber = createHugeUnsignedIntFromString ("0000000123456789012345678901234567890");
    printHugeUnsignedInt(hugeNumber);
}
