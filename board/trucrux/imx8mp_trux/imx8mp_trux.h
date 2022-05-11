#ifndef __IMX8MP_TRUX_H__
#define __IMX8MP_TRUX_H__

enum {
	BOARD_ID_SOM,
	BOARD_ID_TRUX,
	BOARD_ID_UNDEF,
};

enum {
	TRUX_CARRIER_REV_1,
	TRUX_CARRIER_REV_2,
	TRUX_CARRIER_REV_UNDEF,
};

int trux_detect_board_id(void);
int trux_detect_trux_carrier_rev(void);

#endif
