#pragma once

#include <stdint.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

#define FURI_HAL_RANDOM_MAX 0xFFFFFFFFU

/** Initialize random subsystem */
void furi_hal_random_init(void);

/** Get random value
 * furi_hal_random_get() gives up to FURI_HAL_RANDOM_MAX
 * rand() and random() give up to RAND_MAX
 *
 * @return     32 bit random value (up to FURI_HAL_RANDOM_MAX)
 */
uint32_t furi_hal_random_get(void);

/** Get random value from [0, max]
 * 
 * @return     32 bit random value (up to max)
 */
uint32_t furi_hal_random_max(uint32_t max);

/** Get random value from [min, max]
 * 
 * @return     32 bit random value (between min and max)
 */
uint32_t furi_hal_random_range(uint32_t min, uint32_t max);

/** Fill buffer with random data
 *
 * @param      buf  buffer pointer
 * @param      data buffer len
 */
void furi_hal_random_fill_buf(uint8_t* buf, uint32_t len);

/** Get random upppercase hex string of given length
 *
 * @param      buf  buffer pointer
 * @param      length string length
 */
size_t furi_hal_random_hex_upper(char* buf, size_t buf_size);

/** Get random lowercase hex string of given length
 *
 * @param      buf  buffer pointer
 * @param      length string length
 */
size_t furi_hal_random_hex_lower(char* buf, size_t buf_size);

/** Get random string of given length
 *
 * @param      buf  buffer pointer
 * @param      length string length
 */
size_t furi_hal_random_string_buf(char* buf, size_t buf_size);

/** Generate random date in format dd-mm-yyyy
 *
 * @param      buf  buffer pointer
 * @param      length string length
 */
void furi_hal_random_date(char* buf, size_t buf_size);

#ifdef __cplusplus
}
#endif
