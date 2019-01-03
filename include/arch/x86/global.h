/**
 * Copyright (c) 2019 The cxkernel authors. All rights reserved.
 * Use of this source code is governed by a MIT-style
 * license that can be found in the LICENSE file or at
 * https://opensource.org/licenses/MIT
 *
 * @file   global.h
 * @author Kevin Dai \<kevindai02@outlook.com\>
 * @date   Created on October 14 2018, 9:14 AM
 */

#pragma once
#include "common.h"
#include "arch/x86/multiboot.h"

multiboot_info_t* g_mbt_struct;
