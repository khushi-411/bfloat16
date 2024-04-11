#pragma once

#include <limits>

#include "BFloat16.h"


namespace c10 {

// Constructors

inline  BFloat16::BFloat16(float value)
    : x(detail::round_to_nearest_even(value))
{}

// Implicit conversions

inline  BFloat16::operator float() const {
    return detail::f32_from_bits(x);
}

// Arithmetic operators

inline  BFloat16
operator+(const BFloat16& a, const BFloat16& b) {
    return static_cast<float>(a) + static_cast<float>(b);
}

inline  BFloat16
operator-(const BFloat16& a, const BFloat16& b) {
    return static_cast<float>(a) - static_cast<float>(b);
}

inline  BFloat16
operator*(const BFloat16& a, const BFloat16& b) {
    return static_cast<float>(a) * static_cast<float>(b);
}

inline  BFloat16
operator/(const BFloat16& a, const BFloat16& b) {
    return static_cast<float>(a) / static_cast<float>(b);
}

inline  BFloat16 operator-(const BFloat16& a) {
    return -static_cast<float>(a);
}


inline  BFloat16& operator+=(BFloat16& a, const BFloat16& b) {
    a = a + b;
    return a;
}

inline  BFloat16& operator-=(BFloat16& a, const BFloat16& b) {
    a = a - b;
    return a;
}

inline  BFloat16& operator*=(BFloat16& a, const BFloat16& b) {
    a = a * b;
    return a;
}

inline  BFloat16& operator/=(BFloat16& a, const BFloat16& b) {
    a = a / b;
    return a;
}

inline  BFloat16& operator|(BFloat16& a, const BFloat16& b) {
    a.x = a.x | b.x;
    return a;
}

inline  BFloat16& operator^(BFloat16& a, const BFloat16& b) {
    a.x = a.x ^ b.x;
    return a;
}

inline  BFloat16& operator&(BFloat16& a, const BFloat16& b) {
    a.x = a.x & b.x;
    return a;
}


inline  float operator+(BFloat16& a, float b) {
    return static_cast<float>(a) + b;
}

inline  float operator-(BFloat16& a, float b) {
    return static_cast<float>(a) - b;
}

inline  float operator*(BFloat16& a, float b) {
    return static_cast<float>(a) * b;
}

inline  float operator/(BFloat16& a, float b) {
    return static_cast<float>(a) / b;
}


inline  float operator+(float a, BFloat16& b) {
    return a + static_cast<float>(b);
}

inline  float operator-(float a, BFloat16& b) {
    return a - static_cast<float>(b);
}

inline  float operator*(float a, BFloat16& b) {
    return a * static_cast<float>(b);
}

inline  float operator/(float a, BFloat16& b) {
    return a / static_cast<float>(b);
}


inline  double operator+(BFloat16& a, double b) {
    return static_cast<double>(a) + b;
}

inline  double operator-(BFloat16& a, double b) {
    return static_cast<double>(a) - b;
}

inline  double operator*(BFloat16& a, double b) {
    return static_cast<double>(a) * b;
}

inline  double operator/(BFloat16& a, double b) {
    return static_cast<double>(a) / b;
}


inline  double operator+(double a, BFloat16& b) {
    return a + static_cast<double>(b);
}

inline  double operator-(double a, BFloat16& b) {
    return a - static_cast<double>(b);
}

inline  double operator*(double a, BFloat16& b) {
    return a * static_cast<double>(b);
}

inline  double operator/(double a, BFloat16& b) {
    return a / static_cast<double>(b);
}


inline  int operator+(BFloat16& a, int b) {
    return static_cast<int>(a) + b;
}

inline  int operator-(BFloat16& a, int b) {
    return static_cast<int>(a) - b;
}

inline  int operator*(BFloat16& a, int b) {
    return static_cast<int>(a) * b;
}

inline  int operator/(BFloat16& a, int b) {
    return static_cast<int>(a) / b;
}


inline  int operator+(int a, BFloat16& b) {
    return a + static_cast<int>(b);
}

inline  int operator-(int a, BFloat16& b) {
    return a - static_cast<int>(b);
}

inline  int operator*(int a, BFloat16& b) {
    return a * static_cast<int>(b);
}

inline  int operator/(int a, BFloat16& b) {
    return a / static_cast<int>(b);
}


inline  int64_t operator+(BFloat16& a, int64_t b) {
    return static_cast<int64_t>(a) + b;
}

inline  int64_t operator-(BFloat16& a, int64_t b) {
    return static_cast<int64_t>(a) - b;
}

inline  int64_t operator*(BFloat16& a, int64_t b) {
    return static_cast<int64_t>(a) * b;
}

inline  int64_t operator/(BFloat16& a, int64_t b) {
    return static_cast<int64_t>(a) / b;
}


inline  int64_t operator+(int64_t a, BFloat16& b) {
    return a + static_cast<int64_t>(b);
}

inline  int64_t operator-(int64_t a, BFloat16& b) {
    return a - static_cast<int64_t>(b);
}

inline  int64_t operator*(int64_t a, BFloat16& b) {
    return a * static_cast<int64_t>(b);
}

inline  int64_t operator/(int64_t a, BFloat16& b) {
    return a / static_cast<int64_t>(b);
}


inline  bool operator>(BFloat16& lhs, BFloat16& rhs) {
    return float(lhs) > float(rhs);
}

inline  bool operator<(BFloat16& lhs, BFloat16& rhs) {
    return float(lhs) < float(rhs);
}

}  // namespace c10
