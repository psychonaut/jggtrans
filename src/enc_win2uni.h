
unsigned win1250_to_unicode[128]={
	/* 0x80 */ 0x20AC, /* 0x81 */ 0x0000, /* 0x82 */ 0x201A, /* 0x83 */ 0x0000,
	/* 0x84 */ 0x201E, /* 0x85 */ 0x2026, /* 0x86 */ 0x2020, /* 0x87 */ 0x2021,
	/* 0x88 */ 0x0000, /* 0x89 */ 0x2030, /* 0x8a */ 0x0160, /* 0x8b */ 0x2039,
	/* 0x8c */ 0x015A, /* 0x8d */ 0x0164, /* 0x8e */ 0x017D, /* 0x8f */ 0x0179,
	/* 0x90 */ 0x0000, /* 0x91 */ 0x2018, /* 0x92 */ 0x2019, /* 0x93 */ 0x201C,
	/* 0x94 */ 0x201D, /* 0x95 */ 0x2022, /* 0x96 */ 0x2013, /* 0x97 */ 0x2014,
	/* 0x98 */ 0x0000, /* 0x99 */ 0x2122, /* 0x9a */ 0x0161, /* 0x9b */ 0x203A,
	/* 0x9c */ 0x015B, /* 0x9d */ 0x0165, /* 0x9e */ 0x017E, /* 0x9f */ 0x017A,
	/* 0xa0 */ 0x00A0, /* 0xa1 */ 0x02C7, /* 0xa2 */ 0x02D8, /* 0xa3 */ 0x0141,
	/* 0xa4 */ 0x00A4, /* 0xa5 */ 0x0104, /* 0xa6 */ 0x00A6, /* 0xa7 */ 0x00A7,
	/* 0xa8 */ 0x00A8, /* 0xa9 */ 0x00A9, /* 0xaa */ 0x015E, /* 0xab */ 0x00AB,
	/* 0xac */ 0x00AC, /* 0xad */ 0x00AD, /* 0xae */ 0x00AE, /* 0xaf */ 0x017B,
	/* 0xb0 */ 0x00B0, /* 0xb1 */ 0x00B1, /* 0xb2 */ 0x02DB, /* 0xb3 */ 0x0142,
	/* 0xb4 */ 0x00B4, /* 0xb5 */ 0x00B5, /* 0xb6 */ 0x00B6, /* 0xb7 */ 0x00B7,
	/* 0xb8 */ 0x00B8, /* 0xb9 */ 0x0105, /* 0xba */ 0x015F, /* 0xbb */ 0x00BB,
	/* 0xbc */ 0x013D, /* 0xbd */ 0x02DD, /* 0xbe */ 0x013E, /* 0xbf */ 0x017C,
	/* 0xc0 */ 0x0154, /* 0xc1 */ 0x00C1, /* 0xc2 */ 0x00C2, /* 0xc3 */ 0x0102,
	/* 0xc4 */ 0x00C4, /* 0xc5 */ 0x0139, /* 0xc6 */ 0x0106, /* 0xc7 */ 0x00C7,
	/* 0xc8 */ 0x010C, /* 0xc9 */ 0x00C9, /* 0xca */ 0x0118, /* 0xcb */ 0x00CB,
	/* 0xcc */ 0x011A, /* 0xcd */ 0x00CD, /* 0xce */ 0x00CE, /* 0xcf */ 0x010E,
	/* 0xd0 */ 0x0110, /* 0xd1 */ 0x0143, /* 0xd2 */ 0x0147, /* 0xd3 */ 0x00D3,
	/* 0xd4 */ 0x00D4, /* 0xd5 */ 0x0150, /* 0xd6 */ 0x00D6, /* 0xd7 */ 0x00D7,
	/* 0xd8 */ 0x0158, /* 0xd9 */ 0x016E, /* 0xda */ 0x00DA, /* 0xdb */ 0x0170,
	/* 0xdc */ 0x00DC, /* 0xdd */ 0x00DD, /* 0xde */ 0x0162, /* 0xdf */ 0x00DF,
	/* 0xe0 */ 0x0155, /* 0xe1 */ 0x00E1, /* 0xe2 */ 0x00E2, /* 0xe3 */ 0x0103,
	/* 0xe4 */ 0x00E4, /* 0xe5 */ 0x013A, /* 0xe6 */ 0x0107, /* 0xe7 */ 0x00E7,
	/* 0xe8 */ 0x010D, /* 0xe9 */ 0x00E9, /* 0xea */ 0x0119, /* 0xeb */ 0x00EB,
	/* 0xec */ 0x011B, /* 0xed */ 0x00ED, /* 0xee */ 0x00EE, /* 0xef */ 0x010F,
	/* 0xf0 */ 0x0111, /* 0xf1 */ 0x0144, /* 0xf2 */ 0x0148, /* 0xf3 */ 0x00F3,
	/* 0xf4 */ 0x00F4, /* 0xf5 */ 0x0151, /* 0xf6 */ 0x00F6, /* 0xf7 */ 0x00F7,
	/* 0xf8 */ 0x0159, /* 0xf9 */ 0x016F, /* 0xfa */ 0x00FA, /* 0xfb */ 0x0171,
	/* 0xfc */ 0x00FC, /* 0xfd */ 0x00FD, /* 0xfe */ 0x0163, /* 0xff */ 0x02D9
	};
