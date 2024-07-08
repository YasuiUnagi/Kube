#ifndef KUBE_SCALAR_HH
#define KUBE_SCALAR_HH

#include <kube.hh>

namespace kube {

template < typename T >
constexpr auto min() noexcept
    -> T = delete;

template < typename T >
constexpr auto max() noexcept
    -> T = delete;

template < typename T >
constexpr auto min(T, T) noexcept
    -> T = delete;

template < typename T >
constexpr auto max(T, T) noexcept
    -> T = delete;
}

#include <limits>
#include <kube/scalar_f64.hh>
#include <kube/scalar_f32.hh>
#include <kube/scalar_i64.hh>
#include <kube/scalar_i32.hh>
#include <kube/scalar_i16.hh>
#include <kube/scalar_i8.hh>
#include <kube/scalar_u64.hh>
#include <kube/scalar_u32.hh>
#include <kube/scalar_u16.hh>
#include <kube/scalar_u8.hh>

namespace kube {

template < typename T >
constexpr auto narrow_cast(T) noexcept
    -> u8 = delete;

template <>
constexpr auto narrow_cast(u16 value) noexcept
    -> u8 { return {static_cast<typename u8::native_type>(value.native & static_cast<u16>(max<u8>()))}; }

template <>
constexpr auto narrow_cast(u32 value) noexcept
    -> u8 { return {static_cast<typename u8::native_type>(value.native & static_cast<u32>(max<u8>()))}; }

template <>
constexpr auto narrow_cast(u64 value) noexcept
    -> u8 { return {static_cast<typename u8::native_type>(value.native & static_cast<u64>(max<u8>()))}; }


template < typename T >
constexpr auto narrow_cast(T) noexcept
    -> u16 = delete;

template <>
constexpr auto narrow_cast(u32 value) noexcept
    -> u16 { return {static_cast<typename u16::native_type>(value.native & static_cast<u32>(max<u16>()))}; }

template <>
constexpr auto narrow_cast(u64 value) noexcept
    -> u16 { return {static_cast<typename u16::native_type>(value.native & static_cast<u64>(max<u16>()))}; }


template < typename T >
constexpr auto narrow_cast(T) noexcept
    -> u32 = delete;

template < typename T >
constexpr auto narrow_cast(u64 value) noexcept
    -> u32 { return {static_cast<typename u32::native_type>(value.native & static_cast<u64>(max<u32>()))}; }

}

#endif