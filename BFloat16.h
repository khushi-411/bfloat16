#pragma once

#include <cmath>
#include <cstring>
#include <cstdint>

namespace c10 {

namespace detail {

inline  float f32_from_bits(uint16_t src) {
    float res = 0;
    uint32_t tmp = src;
    tmp <<= 16;
    std::memcpy(&res, &tmp, sizeof(tmp));
    return res;
}

inline  uint16_t bits_from_f32(float src) {
    uint32_t res = 0;
    std::memcpy(&res, &src, sizeof(res));
    return res >> 16;
}

inline  uint16_t round_to_nearest_even(float src) {
    if (std::isnan(src)) {
        return UINT16_C(0x7FC0);
    } else {
        union {
            uint32_t U32;
            float F32;
        };

        F32 = src;
        uint32_t rounding_bias = ((U32 >> 16) & 1) + UINT32_C(0x7FFF);
        return static_cast<uint16_t>((U32 + rounding_bias) >> 16);
    }
}

}  // namespace detail

struct alignas(2) BFloat16 {
    uint16_t x;

    BFloat16() = default;

    struct from_bits_t {};
    static constexpr  from_bits_t from_bits() {
        return from_bits_t();
    }

    constexpr  BFloat16(unsigned short bits, from_bits_t) : x(bits){};
    inline  BFloat16(float value);
    inline  operator float() const;
};

}  // namespace c10
