// Copyright (c) 2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_GTPROBE_PONG_H
#define BITCOIN_GTPROBE_PONG_H

//! Counts down `depth` by alternating with GtProbePing(); declared before the
//! mutual include so that GtProbePing() can refer to it.
inline unsigned GtProbePong(unsigned depth);

#include <gtprobe_ping.h>

inline unsigned GtProbePong(unsigned depth)
{
    if (depth == 0) return 0;
    return 1 + GtProbePing(depth - 1);
}

#endif // BITCOIN_GTPROBE_PONG_H
