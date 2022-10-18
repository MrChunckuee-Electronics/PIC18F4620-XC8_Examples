/* 
 * File:   mcu.h
 * Author: mrchu_000
 *
 * Created on 20 de septiembre de 2021, 11:22 PM
 */

#ifndef MCU_H
#define	MCU_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <xc.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h> 
#include <stdint.h>
#include <stdbool.h>
#include "mcu.h"
#include "uart.h"
    
#define _XTAL_FREQ 16000000
    
#define Delay_ms(x) __delay_ms(x);
    
/*********** P O R T   D E F I N I T I O N S **********************************/   
#define IO_Status_RE0_TRIS                  TRISEbits.TRISE0
#define IO_Status_RE0_LAT                   LATEbits.LATE0
#define IO_Status_RE0_PORT                  PORTEbits.RE0
#define IO_Status_RE0_SetHigh()             do { IO_Status_RE0_LAT = 1; } while(0)
#define IO_Status_RE0_SetLow()              do { IO_Status_RE0_LAT = 0; } while(0)
#define IO_Status_RE0_SetToggle()           do { IO_Status_RE0_LAT = ~IO_Status_RE0_LAT; } while(0)
#define IO_Status_RE0_GetValue()            IO_Status_RE0_PORT
#define IO_Status_RE0_SetDigitalInput()     do { IO_Status_RE0_TRIS = 1; } while(0)
#define IO_Status_RE0_SetDigitalOutput()    do { IO_Status_RE0_TRIS = 0; } while(0)
    
#define IO_Status_RE1_TRIS                  TRISEbits.TRISE1
#define IO_Status_RE1_LAT                   LATEbits.LATE1
#define IO_Status_RE1_PORT                  PORTEbits.RE1
#define IO_Status_RE1_SetHigh()             do { IO_Status_RE1_LAT = 1; } while(0)
#define IO_Status_RE1_SetLow()              do { IO_Status_RE1_LAT = 0; } while(0)
#define IO_Status_RE1_SetToggle()           do { IO_Status_RE1_LAT = ~IO_Status_RE1_LAT; } while(0)
#define IO_Status_RE1_GetValue()            IO_Status_RE1_PORT
#define IO_Status_RE1_SetDigitalInput()     do { IO_Status_RE1_TRIS = 1; } while(0)
#define IO_Status_RE1_SetDigitalOutput()    do { IO_Status_RE1_TRIS = 0; } while(0)

#define IO_Status_RE2_TRIS                  TRISEbits.TRISE2
#define IO_Status_RE2_LAT                   LATEbits.LATE2
#define IO_Status_RE2_PORT                  PORTEbits.RE2
#define IO_Status_RE2_SetHigh()             do { IO_Status_RE2_LAT = 1; } while(0)
#define IO_Status_RE2_SetLow()              do { IO_Status_RE2_LAT = 0; } while(0)
#define IO_Status_RE2_SetToggle()           do { IO_Status_RE2_LAT = ~IO_Status_RE2_LAT; } while(0)
#define IO_Status_RE2_GetValue()            IO_Status_RE2_PORT
#define IO_Status_RE2_SetDigitalInput()     do { IO_Status_RE2_TRIS = 1; } while(0)
#define IO_Status_RE2_SetDigitalOutput()    do { IO_Status_RE2_TRIS = 0; } while(0)
    
/************** P R O T O T Y P E S *******************************************/
void MCU_Init(void);


#ifdef	__cplusplus
}
#endif

#endif	/* MCU_H */

