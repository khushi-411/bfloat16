#pragma once

#include <limits>

#include "BFloat16.h"


namespace c10 {

// Constructors

inline __host__ __device__ BFloat16::BFloat16(float value)
    : x(detail::round_to_nearest_even(value))
{}

// Implicit conversions

inline __host__ __device__ BFloat16::operator float(() const {
    return detail::f32_from_bits(x);
}

// Arithmetic operators

inline __host__ __device__ BFloat16
operator+(const BFloat16& a, const BFloat16& b) {
    return static_cast<float>(a) + static_cast<float>(b);
}

inline __host__ __device__ BFloat16
operator-(const BFloat16& a, const BFloat16& b) {
    return static_cast<float>(a) - static_cast<float>(b);
}

inline __host__ __device__ BFloat16
operator*(const BFloat16& a, const BFloat16& b) {
    return static_cast<float>(a) * static_cast<float>(b);
}

inline __host__ __device__ BFloat16
operator/(const BFloat16& a, const BFloat16& b) {
    return static_cast<float>(a) / static_cast<float>(b);
}

inline __host__ __device__ BFloat16 operator-(const BFloat16& a) {
    return -static_cast<float>(a);
}


inline __host__ __device__ float operator+(BFloat16& a, float b) {
    return static_cast<float>(a) + b;
}

inline __host__ __device__ float operator-(BFloat16& a, float b) {
    return static_cast<float>(a) - b;
}

inline __host__ __device__ float operator*(BFloat16& a, float b) {
    return static_cast<float>(a) * b;
}

inline __host__ __device__ float operator/(BFloat16& a, float b) {
    return static_cast<float>(a) / b;
}


inline __host__ __device__ float operator+(float a, BFloat16& b) {
    return a + static_cast<float>(b);
}

inline __host__ __device__ float operator-(float a, BFloat16& b) {
    return a - static_cast<float>(b);
}

inline __host__ __device__ float operator*(float a, BFloat16& b) {
    return a * static_cast<float>(b);
}

inline __host__ __device__ float operator/(float a, BFloat16& b) {
    return a / static_cast<float>(b);
}


// TODO: Add similar overloads for double, int, int64_t etc...


}  // namespace c10
