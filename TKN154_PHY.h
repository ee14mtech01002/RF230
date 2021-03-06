
// PHY constants for the RF230
#ifndef __TKN154_PHY_H
#define __TKN154_PHY_H
#include "TKN154_MAC.h"
enum {
IEEE154_SUPPORTED_CHANNELS = 0x07FFF800,
IEEE154_SYMBOLS_PER_OCTET = 2,
IEEE154_TXPOWER_TOLERANCE = 0x80,
IEEE154_SHR_DURATION = (5 * IEEE154_SYMBOLS_PER_OCTET),
IEEE154_MAX_FRAME_DURATION = (IEEE154_SHR_DURATION + ((IEEE154_aMaxPHYPacketSize + 1) * IEEE154_SYMBOLS_PER_OCTET)),
IEEE154_PREAMBLE_LENGTH = (4*IEEE154_SYMBOLS_PER_OCTET),
IEEE154_SYNC_SYMBOL_OFFSET = (1 * IEEE154_SYMBOLS_PER_OCTET),
IEEE154_MIN_LIFS_PERIOD = 40,
IEEE154_MIN_SIFS_PERIOD = 12,
IEEE154_ACK_WAIT_DURATION = (20 + 12 + IEEE154_SHR_DURATION + 6 * IEEE154_SYMBOLS_PER_OCTET),
IEEE154_TIMESTAMP_SUPPORTED = TRUE,
};
#include "Timer62500hz.h"
#define TSymbolIEEE802154 T62500hz
#endif
