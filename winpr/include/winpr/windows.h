/**
 * WinPR: Windows Portable Runtime
 * Windows Header Include Wrapper
 *
 * Copyright 2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WINPR_WINDOWS_H
#define WINPR_WINDOWS_H

/* Windows header include order is important, use this instead of including windows.h directly */

#ifdef _WIN32

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <winsock2.h>
#include <windows.h>
#include <ws2tcpip.h>

#else

/* Client System Parameters Update PDU
 * defined in winuser.h
 */
typedef enum
{
	SPI_SETDRAGFULLWINDOWS = 0x00000025,
	SPI_SETKEYBOARDCUES = 0x0000100B,
	SPI_SETKEYBOARDPREF = 0x00000045,
	SPI_SETWORKAREA = 0x0000002f,
	RAIL_SPI_DISPLAYCHANGE = 0x0000F001,
	SPI_SETMOUSEBUTTONSWAP = 0x00000021,
	RAIL_SPI_TASKBARPOS = 0x0000F000,
	SPI_SETHIGHCONTRAST = 0x00000043,
	SPI_SETCARETWIDTH = 0x00002007,
	SPI_SETSTICKYKEYS = 0x0000003B,
	SPI_SETTOGGLEKEYS = 0x00000035,
	SPI_SETFILTERKEYS = 0x00000033,
	RAIL_SPI_DISPLAY_ANIMATIONS_ENABLED = 0x0000F002,
	RAIL_SPI_DISPLAY_ADVANCED_EFFECTS_ENABLED = 0x0000F003,
	RAIL_SPI_DISPLAY_AUTO_HIDE_SCROLLBARS = 0x0000F004,
	RAIL_SPI_DISPLAY_MESSAGE_DURATION = 0x0000F005,
	RAIL_SPI_CLOSED_CAPTION_FONT_COLOR = 0x0000F006,
	RAIL_SPI_CLOSED_CAPTION_FONT_OPACITY = 0x0000F007,
	RAIL_SPI_CLOSED_CAPTION_FONT_SIZE = 0x0000F008,
	RAIL_SPI_CLOSED_CAPTION_FONT_STYLE = 0x0000F009,
	RAIL_SPI_CLOSED_CAPTION_FONT_EDGE_EFFECT = 0x0000F00A,
	RAIL_SPI_CLOSED_CAPTION_BACKGROUND_COLOR = 0x0000F00B,
	RAIL_SPI_CLOSED_CAPTION_BACKGROUND_OPACITY = 0x0000F00C,
	RAIL_SPI_CLOSED_CAPTION_REGION_COLOR = 0x0000F00D,
	RAIL_SPI_CLOSED_CAPTION_REGION_OPACITY = 0x0000F00E
} SystemParam;

/* Server System Parameters Update PDU */
#define SPI_SETSCREENSAVEACTIVE 0x00000011

/* HIGHCONTRAST flags values */
#define HCF_HIGHCONTRASTON 0x00000001
#define HCF_AVAILABLE 0x00000002
#define HCF_HOTKEYACTIVE 0x00000004
#define HCF_CONFIRMHOTKEY 0x00000008
#define HCF_HOTKEYSOUND 0x00000010
#define HCF_INDICATOR 0x00000020
#define HCF_HOTKEYAVAILABLE 0x00000040

/* TS_FILTERKEYS */
#define FKF_FILTERKEYSON 0x00000001
#define FKF_AVAILABLE 0x00000002
#define FKF_HOTKEYACTIVE 0x00000004
#define FKF_CONFIRMHOTKEY 0x00000008
#define FKF_HOTKEYSOUND 0x00000010
#define FKF_INDICATOR 0x00000020
#define FKF_CLICKON 0x00000040

/* TS_TOGGLEKEYS */
#define TKF_TOGGLEKEYSON 0x00000001
#define TKF_AVAILABLE 0x00000002
#define TKF_HOTKEYACTIVE 0x00000004
#define TKF_CONFIRMHOTKEY 0x00000008
#define TKF_HOTKEYSOUND 0x00000010

/* TS_STICKYKEYS */
#define SKF_STICKYKEYSON 0x00000001
#define SKF_AVAILABLE 0x00000002
#define SKF_HOTKEYACTIVE 0x00000004
#define SKF_CONFIRMHOTKEY 0x00000008
#define SKF_HOTKEYSOUND 0x00000010
#define SKF_INDICATOR 0x00000020
#define SKF_AUDIBLEFEEDBACK 0x00000040
#define SKF_TRISTATE 0x00000080
#define SKF_TWOKEYSOFF 0x00000100
#define SKF_LSHIFTLOCKED 0x00010000
#define SKF_RSHIFTLOCKED 0x00020000
#define SKF_LCTLLOCKED 0x00040000
#define SKF_RCTLLOCKED 0x00080000
#define SKF_LALTLOCKED 0x00100000
#define SKF_RALTLOCKED 0x00200000
#define SKF_LWINLOCKED 0x00400000
#define SKF_RWINLOCKED 0x00800000
#define SKF_LSHIFTLATCHED 0x01000000
#define SKF_RSHIFTLATCHED 0x02000000
#define SKF_LCTLLATCHED 0x04000000
#define SKF_RCTLLATCHED 0x08000000
#define SKF_LALTLATCHED 0x10000000
#define SKF_RALTLATCHED 0x20000000
#define SKF_LWINLATCHED 0x40000000
#define SKF_RWINLATCHED 0x80000000

#endif

#ifndef SPI_SETSCREENSAVESECURE
#define SPI_SETSCREENSAVESECURE 0x00000077
#endif

#endif /* WINPR_WINDOWS_H */
