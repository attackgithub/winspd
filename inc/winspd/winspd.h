/**
 * @file winspd/winspd.h
 * WinSpd User Mode API.
 *
 * In order to use the WinSpd API the user mode StorPort Driver must include &lt;winspd/winspd.h&gt;
 * and link with the winspd_x64.dll (or winspd_x86.dll) library.
 *
 * @copyright 2018 Bill Zissimopoulos
 */
/*
 * This file is part of WinSpd.
 *
 * You can redistribute it and/or modify it under the terms of the GNU
 * General Public License version 3 as published by the Free Software
 * Foundation.
 *
 * Licensees holding a valid commercial license may use this software
 * in accordance with the commercial license agreement provided in
 * conjunction with the software.  The terms and conditions of any such
 * commercial license agreement shall govern, supersede, and render
 * ineffective any application of the GPLv3 license to this software,
 * notwithstanding of any reference thereto in the software or
 * associated repository.
 */

#ifndef WINSPD_WINSPD_H_INCLUDED
#define WINSPD_WINSPD_H_INCLUDED

#define WIN32_NO_STATUS
#include <windows.h>
#undef WIN32_NO_STATUS
#include <winternl.h>
#pragma warning(push)
#pragma warning(disable:4005)           /* macro redefinition */
#include <ntstatus.h>
#pragma warning(pop)

#if defined(WINSPD_DLL_INTERNAL)
#define SPD_API                         __declspec(dllexport)
#else
#define SPD_API                         __declspec(dllimport)
#endif

#include <winspd/ioctl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif