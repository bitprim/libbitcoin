///////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2014-2015 libbitcoin developers (see COPYING).
//
//        GENERATED SOURCE CODE, DO NOT EDIT EXCEPT EXPERIMENTALLY
//
///////////////////////////////////////////////////////////////////////////////
#ifndef LIBBITCOIN_VERSION_HPP
#define LIBBITCOIN_VERSION_HPP

/**
 * The semantic version of this repository as: [major].[minor].[patch]
 * For interpretation of the versioning scheme see: http://semver.org
 */

// #define LIBBITCOIN_VERSION "3.3.0"
#define LIBBITCOIN_MAJOR_VERSION 3
#define LIBBITCOIN_MINOR_VERSION 3
#define LIBBITCOIN_PATCH_VERSION 0

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)
#define LIBBITCOIN_VERSION STR(LIBBITCOIN_MAJOR_VERSION) "." STR(LIBBITCOIN_MINOR_VERSION) "." STR(LIBBITCOIN_PATCH_VERSION)

// #pragma message("LIBBITCOIN_VERSION")
// #pragma message(LIBBITCOIN_VERSION)

// #pragma message("BITPRIM_BUILD_NUMBER")
// #pragma message(BITPRIM_BUILD_NUMBER)

#endif
