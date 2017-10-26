/**
 * @file le_ms_local.h
 *
 * Modem service definitions.
 *
 * Copyright (C) Sierra Wireless Inc.
 */

#ifndef LEGATO_MS_LOCAL_INCLUDE_GUARD
#define LEGATO_MS_LOCAL_INCLUDE_GUARD

//--------------------------------------------------------------------------------------------------
/**
 * The timer interval to kick the watchdog chain.
 */
//--------------------------------------------------------------------------------------------------
#define MS_WDOG_INTERVAL 8

//--------------------------------------------------------------------------------------------------
/**
 * Enum for all watchdogs used by modem services
 */
//--------------------------------------------------------------------------------------------------
typedef enum
{
    MS_WDOG_MAIN_LOOP,
    MS_WDOG_MDC_LOOP,
    MS_WDOG_ECALL_LOOP,
    MS_WDOG_SMS_LOOP,
    MS_WDOG_MRC_LOOP,
    MS_WDOG_RIPIN_LOOP,
    MS_WDOG_COUNT
}
MS_Watchdog_t;

#endif /* LEGATO_MS_LOCAL_INCLUDE_GUARD */