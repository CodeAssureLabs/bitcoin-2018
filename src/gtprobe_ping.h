// Copyright (c) 2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_GTPROBE_PING_H
#define BITCOIN_GTPROBE_PING_H

//! Counts down `depth` by alternating with GtProbePong(); declared before the
//! mutual include so that GtProbePong() can refer to it.
inline unsigned GtProbePing(unsigned depth);

#include <gtprobe_pong.h>

inline unsigned GtProbePing(unsigned depth)
{
    if (depth == 0) return 0;
    return 1 + GtProbePong(depth - 1);
}

#endif // BITCOIN_GTPROBE_PING_H
