//=============================================================================
// inc/config/cslib_hwconfig.h: generated by Hardware Configurator
//
// This file will be regenerated when saving a document. leave the sections
// inside the "$[...]" comment tags alone or they will be overwritten!
//=============================================================================

#ifndef __SILICON_LABS_CSLIB_HWCONFIG_H
#define __SILICON_LABS_CSLIB_HWCONFIG_H

// $[mux values]
#define MUX_VALUE_ARRAY \
  0x08,     /* CS1.0 */ \
  0x0D,     /* CS1.5 */ \
// [mux values]$

// $[gain values]
#define GAIN_VALUE_ARRAY \
  0x07,     /* CS1.0 */ \
  0x07,     /* CS1.5 */ \
// [gain values]$

// $[accumulation values]
#define ACCUMULATION_VALUE_ARRAY \
  0x05,     /* CS1.0 */ \
  0x05,     /* CS1.5 */ \
// [accumulation values]$

// $[active threshold values]
#define ACTIVE_THRESHOLD_ARRAY \
  70,       /* CS1.0 */ \
  70,       /* CS1.5 */ \
// [active threshold values]$

// $[inactive threshold values]
#define INACTIVE_THRESHOLD_ARRAY \
  30,       /* CS1.0 */ \
  30,       /* CS1.5 */ \
// [inactive threshold values]$

// $[average touch delta values]
#define AVERAGE_TOUCH_DELTA_ARRAY \
  1000>>4,  /* CS1.0 */ \
  1000>>4,  /* CS1.5 */ \
// [average touch delta values]$

// $[Active mode mask]
#define ACTIVE_MODE_MASK_P0   0x00
#define ACTIVE_MODE_MASK_P1   0x21
// [Active mode mask]$

// $[Sleep mode mask]
#define SLEEP_MODE_MASK_P0    0x00
#define SLEEP_MODE_MASK_P1    0x21
// [Sleep mode mask]$

#endif // __SILICON_LABS_CSLIB_HWCONFIG_H
