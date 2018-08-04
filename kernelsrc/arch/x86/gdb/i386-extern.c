/**
 * File:   i386-extern.c
 * Author: Kevin Dai
 * Email:  kevindai02@outlook.com
 * 
 * @date Created on Sunday, May 27th 2018, 9:21:35 am
 * 
 * @date Last modified by:   Kevin Dai
 * @date Last modified time: 2018-07-05T20:27:00-04:00
 */

#include "arch/x86/serial.h"
#include "arch/x86/interrupts.h"

/* write a single character */
void putDebugChar(char c)
{
    write_serial(COM2, c);
}

/* read and return a single char */
int getDebugChar()
{
    char c = read_serial(COM2);
    //kprintf("%c", c);
    return c;
}

/* assign an exception handler */
void exceptionHandler(int a, unsigned int b)
{
    idt_set_gate(a, b, 0x08, 0x8E);
}

void initGdbSerial()
{
    init_serial(COM2);
}