#pragma once

#include <stdexcept>

namespace vcg
{
struct assertion_failed : std::runtime_error {
    using std::runtime_error::runtime_error;
};
};

#ifndef VCG_ASSERT_DOES_NOTHING
#define VCG_STR_(x) #x
#define VCG_STR(x) VCG_STR_(x)
#define VCG_STR_LINE VCG_STR(__LINE__)
#define vcg_assert(x) do { if (!(x)) throw assertion_failed("assertion failed: " #x " (file " __FILE__ " line " VCG_STR_LINE ")"); } while(0)
#else
#define vcg_assert(x) do {} while (0)
#endif
