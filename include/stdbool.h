#pragma once

#if __STDC_VERSION__ >= 202311L
    // already supported guys!!
#else
    typedef _Bool bool;
    
    #define true 1
    #define false 0
#endif
