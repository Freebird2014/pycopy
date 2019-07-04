/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef MICROPY_INCLUDED_EXTMOD_NIMBLE_NIMBLE_HCI_UART_H
#define MICROPY_INCLUDED_EXTMOD_NIMBLE_NIMBLE_HCI_UART_H

// To be implemented by the port.

int nimble_hci_uart_configure(uint32_t port);

// This will default to MICROPY_HW_BLE_UART_BAUDRATE, but can be updated later.
int nimble_hci_uart_set_baudrate(uint32_t baudrate);

int nimble_hci_uart_activate(void);

mp_uint_t nimble_hci_uart_rx_any();
int nimble_hci_uart_rx_char();
void nimble_hci_uart_tx_strn(const char *str, uint len);

#endif // MICROPY_INCLUDED_EXTMOD_NIMBLE_NIMBLE_HCI_UART_H
