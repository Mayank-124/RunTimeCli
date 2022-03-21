/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "DriveDriver.h"
//#include "LedDriver/LedDriver.h"
#include "UartDriver/UartDriver.h"
#include <zephyr.h>
#include <device.h>
#include <kernel.h>
#include <devicetree.h>
#include <sys/printk.h>

#define RUN_UNIT_TEST 0
#define RUN_FUNCTIONALITY_TEST 0

const struct device * uartDev_0 = NULL;

void main(void) {
  
  #if RUN_FUNCTIONALITY_TEST
    printk("driveLed()  err_code : %d\n",driveLed());
    printk("driveUart() err_code : %d\n",driveUart());
  #endif
  
  #if RUN_UNIT_TEST
    extern int unity_main(void);
    printk("unity_main() err_code : %d",unity_main());
  #endif
  
  UartDriver_Create(&uartDev_0, UART_PORT_0, UART_BAUDRATE_115200);
}
