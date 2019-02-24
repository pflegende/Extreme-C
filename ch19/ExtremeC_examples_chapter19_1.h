// File name: ExtremeC_examples_chapter19_1.h
// Description: Declarations of the example 19.1

#ifndef _EXTREME_C_EXAMPLE_19_1_
#define _EXTREME_C_EXAMPLE_19_1_

#include <stdint.h>
#include <unistd.h>

#if __cplusplus
extern "C" {
#endif

typedef int64_t (*int64_feed_t)();

int64_t next_even_number();

int64_t calc_factorial(int64_feed_t feed);

#if __cplusplus
}
#endif

#endif
