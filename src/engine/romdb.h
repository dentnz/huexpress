/*
 * Copyright 2013, Alexander von Gluck, All Rights Reserved.
 * Distributed under the terms of the MIT License.
 *
 * Authors:
 *		Alexander von Gluck IV <kallisti5@unixzen.com>
 */
#ifndef _ROMDB_H
#define _ROMDB_H


#include "cleantypes.h"


// Rom Flags
#define TWO_PART_ROM 0x0001
#define CD_SYSTEM    0x0002

#define US_ENCODED   0x0010
#define POPULOUS     0x0020

#define USA          0x4000
#define JAP          0x8000

// Known Rom Count (from kKnownRoms)
#define KNOWN_ROM_COUNT 422


struct rom_database {
	uint32      CRC;
	char		Name[255];
	char		Publisher[64];
	char		ID[64];
	char		Date[16];
	uint32      Flags;
};

extern struct rom_database kKnownRoms[KNOWN_ROM_COUNT];


#endif /* _ROMDB_H */
