#include <stdio.h>
#include "func1.h"
#include "func2.h"

int main()
{
    printf("%s:  Starting ...\n", __func__);
    function1();
    function2();
    printf("%s:  Finished ...\n", __func__);
    return 0;
}
