/****************************************************************************
**
** Copyright (C) 2020 MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** This file is part of the mikroSDK package
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The mikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
 * @file  hal_ll_pps_connection_defs.h
 * @brief This file contains pps maps per chip for LOW LEVEL HAL PPS implementation.
 */

#ifndef _HAL_LL_PPS_CONNECTION_DEFS_H_
#define _HAL_LL_PPS_CONNECTION_DEFS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "hal_ll_pps_struct_def.h"

// -------------------------------------------------------------
/*!< @brief PPS INPUT FUNCTIONS */
static const hal_ll_pps_pin_map_t hal_ll_pps_input_map[] =
{
    #ifdef __RB0_CN
    { PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x08, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x08, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x08, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x08, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RB1_CN
    { PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RB2_CN
    { PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x0A, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0A, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0A, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0A, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RB3_CN
    { PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x0B, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0B, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0B, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0B, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RB4_CN
    { PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x0C, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0C, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0C, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0C, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RB5_CN
    { PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RB6_CN
    { PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RB7_CN
    { PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x0F, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0F, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0F, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0F, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif

    #ifdef __RC0_CN
    { PIN_0, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x10, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_0, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x10, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_0, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x10, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_0, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x10, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RC1_CN
    { PIN_1, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x11, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_1, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x11, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_1, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x11, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_1, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x11, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RC2_CN
    { PIN_2, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x12, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_2, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x12, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_2, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x12, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_2, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x12, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RC3_CN
    { PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x13, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x13, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x13, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x13, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RC4_CN
    { PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x14, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x14, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x14, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x14, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RC5_CN
    { PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x15, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x15, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x15, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x15, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RC6_CN
    { PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x16, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x16, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x16, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x16, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif
    #ifdef __RC7_CN
    { PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 0x17, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x17, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1DATPPS_ADDRESS },
    { PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x17, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_SSP1CLKPPS_ADDRESS },
    { PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x17, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RX1PPS_ADDRESS },
    #endif

  { HAL_LL_PIN_NC, HAL_LL_PORT_NC, HAL_LL_PIN_NC, HAL_LL_PIN_NC, HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_MODULE_ERROR }
};

/*!< @brief PPS OUTPUT FUNCTIONS */
static const hal_ll_pps_pin_map_t hal_ll_pps_output_map[] =
{
    #ifdef __RB0_CN
    { PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB0PPS_ADDRESS },
    { PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RB0PPS_ADDRESS },
    { PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB0PPS_ADDRESS },
    { PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB0PPS_ADDRESS },
    { PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB0PPS_ADDRESS },
    { PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB0PPS_ADDRESS },
    { PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB0PPS_ADDRESS },
    #endif
    #ifdef __RB1_CN
    { PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB1PPS_ADDRESS },
    { PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RB1PPS_ADDRESS },
    { PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB1PPS_ADDRESS },
    { PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB1PPS_ADDRESS },
    { PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB1PPS_ADDRESS },
    { PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB1PPS_ADDRESS },
    { PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB1PPS_ADDRESS },
    #endif
    #ifdef __RB2_CN
    { PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB2PPS_ADDRESS },
    { PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RB2PPS_ADDRESS },
    { PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB2PPS_ADDRESS },
    { PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB2PPS_ADDRESS },
    { PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB2PPS_ADDRESS },
    { PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB2PPS_ADDRESS },
    { PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB2PPS_ADDRESS },
    #endif
    #ifdef __RB3_CN
    { PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB3PPS_ADDRESS },
    { PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RB3PPS_ADDRESS },
    { PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB3PPS_ADDRESS },
    { PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB3PPS_ADDRESS },
    { PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB3PPS_ADDRESS },
    { PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB3PPS_ADDRESS },
    { PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB3PPS_ADDRESS },
    #endif
    #ifdef __RB4_CN
    { PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB4PPS_ADDRESS },
    { PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RB4PPS_ADDRESS },
    { PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB4PPS_ADDRESS },
    { PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB4PPS_ADDRESS },
    { PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB4PPS_ADDRESS },
    { PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB4PPS_ADDRESS },
    { PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB4PPS_ADDRESS },
    #endif
    #ifdef __RB5_CN
    { PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB5PPS_ADDRESS },
    { PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RB5PPS_ADDRESS },
    { PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB5PPS_ADDRESS },
    { PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB5PPS_ADDRESS },
    { PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB5PPS_ADDRESS },
    { PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB5PPS_ADDRESS },
    { PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB5PPS_ADDRESS },
    #endif
    #ifdef __RB6_CN
    { PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB6PPS_ADDRESS },
    { PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RB6PPS_ADDRESS },
    { PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB6PPS_ADDRESS },
    { PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB6PPS_ADDRESS },
    { PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB6PPS_ADDRESS },
    { PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB6PPS_ADDRESS },
    { PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB6PPS_ADDRESS },
    #endif
    #ifdef __RB7_CN
    { PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB7PPS_ADDRESS },
    { PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RB7PPS_ADDRESS },
    { PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB7PPS_ADDRESS },
    { PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB7PPS_ADDRESS },
    { PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB7PPS_ADDRESS },
    { PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB7PPS_ADDRESS },
    { PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RB7PPS_ADDRESS },
    #endif


    #ifdef __RC0_CN
    { PIN_0, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC0PPS_ADDRESS },
    { PIN_0, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RC0PPS_ADDRESS },
    { PIN_0, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC0PPS_ADDRESS },
    { PIN_0, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC0PPS_ADDRESS },
    { PIN_0, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC0PPS_ADDRESS },
    { PIN_0, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC0PPS_ADDRESS },
    { PIN_0, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC0PPS_ADDRESS },
    #endif
    #ifdef __RC1_CN
    { PIN_1, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC1PPS_ADDRESS },
    { PIN_1, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RC1PPS_ADDRESS },
    { PIN_1, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC1PPS_ADDRESS },
    { PIN_1, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC1PPS_ADDRESS },
    { PIN_1, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC1PPS_ADDRESS },
    { PIN_1, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC1PPS_ADDRESS },
    { PIN_1, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC1PPS_ADDRESS },
    #endif
    #ifdef __RC2_CN
    { PIN_2, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC2PPS_ADDRESS },
    { PIN_2, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RC2PPS_ADDRESS },
    { PIN_2, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC2PPS_ADDRESS },
    { PIN_2, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC2PPS_ADDRESS },
    { PIN_2, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC2PPS_ADDRESS },
    { PIN_2, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC2PPS_ADDRESS },
    { PIN_2, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC2PPS_ADDRESS },
    #endif
    #ifdef __RC3_CN
    { PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC3PPS_ADDRESS },
    { PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RC3PPS_ADDRESS },
    { PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC3PPS_ADDRESS },
    { PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC3PPS_ADDRESS },
    { PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC3PPS_ADDRESS },
    { PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC3PPS_ADDRESS },
    { PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC3PPS_ADDRESS },
    #endif
    #ifdef __RC4_CN
    { PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC4PPS_ADDRESS },
    { PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RC4PPS_ADDRESS },
    { PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC4PPS_ADDRESS },
    { PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC4PPS_ADDRESS },
    { PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC4PPS_ADDRESS },
    { PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC4PPS_ADDRESS },
    { PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC4PPS_ADDRESS },
    #endif
    #ifdef __RC5_CN
    { PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC5PPS_ADDRESS },
    { PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RC5PPS_ADDRESS },
    { PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC5PPS_ADDRESS },
    { PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC5PPS_ADDRESS },
    { PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC5PPS_ADDRESS },
    { PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC5PPS_ADDRESS },
    { PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC5PPS_ADDRESS },
    #endif
    #ifdef __RC6_CN
    { PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC6PPS_ADDRESS },
    { PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RC6PPS_ADDRESS },
    { PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC6PPS_ADDRESS },
    { PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC6PPS_ADDRESS },
    { PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC6PPS_ADDRESS },
    { PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC6PPS_ADDRESS },
    { PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC6PPS_ADDRESS },
    #endif
    #ifdef __RC7_CN
    { PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x05, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC7PPS_ADDRESS },
    { PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x06, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RC7PPS_ADDRESS },
    { PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SCL, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC7PPS_ADDRESS },
    { PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_I2C_SDA, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC7PPS_ADDRESS },
    { PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0D, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC7PPS_ADDRESS },
    { PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0E, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC7PPS_ADDRESS },
    { PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x09, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RC7PPS_ADDRESS },
    #endif

  { HAL_LL_PIN_NC, HAL_LL_PORT_NC, HAL_LL_PIN_NC, HAL_LL_PIN_NC, HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_MODULE_ERROR }
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_PPS_CONNECTION_DEFS_H_
// ------------------------------------------------------------------------- END
