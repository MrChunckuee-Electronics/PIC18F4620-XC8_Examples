/* 
 * File:   uart.h
 * Author: MRCHUNCKUEE
 *
 * Created on 27 de enero de 2017, 10:03 PM
 */

#ifndef UART_H
#define	UART_H

#ifdef	__cplusplus
extern "C" {
#endif

/****PORT D E F I N I T I O N S ***********************************************/
//UART PORT DEFINITIONS
#define UART_RX_TRIS    TRISCbits.TRISC7
#define UART_TX_TRIS    TRISCbits.TRISC6
#define UART_RX_STATUS	RCSTA
#define UART_TX_STATUS	TXSTA
    
/********* G E N E R I C   D E F I N I T I O N S ******************************/
#define BAUD_CONTROL		00
#define BAUD_RATE           25
    
/*********** P R O T O T Y P E S **********************************************/
void UART_Init(void);  
uint8_t UART_Read(void);
void UART_Write(uint8_t data_byte);
void UART_WriteString (uint8_t *data_string);

#ifdef	__cplusplus
}
#endif

#endif	/* UART_H */

