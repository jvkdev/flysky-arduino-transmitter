#ifndef _IFACE_CONFIG_H_
#define _IFACE_CONFIG_H_

#include <stdint.h>



#define NUM_TX_INPUTS 6
#define NUM_INPUTS (NUM_TX_INPUTS)
#define NUM_TX_BUTTONS 2

#define NUM_OUT_CHANNELS 12
#define NUM_VIRT_CHANNELS 10
#define CHAN_MULTIPLIER 100
#define CHAN_MAX_VALUE (100 * CHAN_MULTIPLIER)

#define NUM_TRIMS 10
#define NUM_TOGGLES 4
#define MAX_POINTS 13
#define NUM_MIXERS ((NUM_OUT_CHANNELS + NUM_VIRT_CHANNELS) * 4)

#define MAX_PPM_IN_CHANNELS 8

#define NUM_CHANNELS (NUM_OUT_CHANNELS + NUM_VIRT_CHANNELS)
#define NUM_SOURCES (NUM_INPUTS + NUM_CHANNELS + MAX_PPM_IN_CHANNELS)

#define TELEM_NUM_ALARMS 6 

typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;




typedef enum {
	MIXER_ADVANCED = 0,
	MIXER_STANDARD,
	MIXER_ALL,
} MixerMode;

enum TxPower {
    TXPOWER_100uW,
    TXPOWER_300uW,
    TXPOWER_1mW,
    TXPOWER_3mW,
    TXPOWER_10mW,
    TXPOWER_30mW,
    TXPOWER_100mW,
    TXPOWER_150mW,
    TXPOWER_LAST,
};

enum ModelType {
	MODELTYPE_HELI,
	MODELTYPE_PLANE,
	MODELTYPE_LAST,
};


enum ProtoCmds {
	PROTOCMD_INIT,
	PROTOCMD_DEINIT,
	PROTOCMD_BIND,
	PROTOCMD_CHECK_AUTOBIND,
	PROTOCMD_NUMCHAN,
	PROTOCMD_DEFAULT_NUMCHAN,
	PROTOCMD_CURRENT_ID,
	PROTOCMD_SET_TXPOWER,
	PROTOCMD_GETOPTIONS,
	PROTOCMD_SETOPTIONS,
	PROTOCMD_TELEMETRYSTATE,
	PROTOCMD_RESET,
};


enum TXRX_State {
	TXRX_OFF,
	TX_EN,
	RX_EN,
};

enum {
	PROTO_TELEM_UNSUPPORTED = -1,
	PROTO_TELEM_OFF = 0,
	PROTO_TELEM_ON  = 1,
};



#endif