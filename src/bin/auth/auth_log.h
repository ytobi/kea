// Copyright (C) 2011  Internet Systems Consortium, Inc. ("ISC")
//
// Permission to use, copy, modify, and/or distribute this software for any
// purpose with or without fee is hereby granted, provided that the above
// copyright notice and this permission notice appear in all copies.
//
// THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
// REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
// AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
// INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
// LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
// OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
// PERFORMANCE OF THIS SOFTWARE.

#ifndef __AUTH_LOG__H
#define __AUTH_LOG__H

#include <log/macros.h>
#include "auth_messages.h"

namespace isc {
namespace auth {

/// \brief Auth Logging
///
/// Defines the levels used to output debug messages in the "auth" part of
/// the b10-auth program.  Higher numbers equate to more verbose (and detailed)
/// output.

// The first level traces normal operations - asking the AUTH for an address,
// and cancelling a lookup.  It also records when the AUTH calls back to the
// resolver to resolve something.
const int DBG_AUTH_START = 10;

/// define the logger for the "auth" module part of b10-auth.  We could define
/// a logger in each file, but we would want to define a common name to avoid
/// spelling mistakes, so it is just one small step from there to define a
/// module-common logger.
extern isc::log::Logger auth_logger;

} // namespace nsas
} // namespace isc

#endif // __AUTH_LOG__H
