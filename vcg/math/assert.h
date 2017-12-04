#pragma once

#include <stdexcept>

namespace vcg
{
struct assertion_failed : std::runtime_error {
    using std::runtime_error::runtime_error;
};
};

#define vcg_assert(x) do { if (!(x)) throw assertion_failed("assertion failed: " #x); } while(0)
