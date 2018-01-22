#pragma once

#include <stdexcept>

namespace vcg
{
struct assertion_failed : std::runtime_error {
    using std::runtime_error::runtime_error;
};
};

#ifndef VCG_ASSERT_DOES_NOTHING
#define vcg_assert(x) do { if (!(x)) throw assertion_failed("assertion failed: " #x); } while(0)
#else
#define vcg_assert(x) do {} while (0)
#endif
