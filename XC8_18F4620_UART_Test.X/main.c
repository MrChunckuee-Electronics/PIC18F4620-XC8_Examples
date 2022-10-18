/*******************************************************************************
 *
 *                  Ejemplo basico para el control de la UART
 *
 *******************************************************************************
 * FileName:        main.c
 * Processor:       PIC18F4620
 * Complier:        MPLABX IDE v5.50 & XC8 v2.32
 * Author:          Pedro Sánchez (MrChunckuee)
 * Blog:            http://mrchunckuee.blogspot.com/
 * Email:           mrchunckuee.psr@gmail.com
 * Description:     Eviar y recibir datos por la UART del uC, ademas monitorear
 *                  la informacion en la computadora.  
 *******************************************************************************
 * Rev.         Date            Comment
 *  v1.0.0      03/10/2021      - Creación del firmware
 ******************************************************************************/

/************ I N C L U D E S *************************************************/
#include "device_config.h"   //Only here
#include "mcu.h"

void main(void){
    uint8_t val_usart=0;
    MCU_Init();     
    UART_Init();
    while(1){
        val_usart = UART_Read();
        Delay_ms(100);
        switch (val_usart){
            case 'a':
                IO_Status_RE0_SetHigh();
                UART_WriteString("LED 1 Encendido\r");
                break;
            case 'b':
                IO_Status_RE0_SetLow();
                UART_WriteString("LED 1 Apagado\r");
                break;
            case 'c':
                IO_Status_RE1_SetHigh();
                UART_WriteString("LED 2 Encendido\r");
                break;
            case 'd':
                IO_Status_RE1_SetLow();
                UART_WriteString("LED 2 Apagado\r");
                break;
            case 'e':
                IO_Status_RE2_SetHigh();
                UART_WriteString("LED 3 Encendido\r");
                break;
            case 'f':
                IO_Status_RE2_SetLow();
                UART_WriteString("LED 3 Apagado\r");
                break;
            case 'g':
                IO_Status_RE0_SetHigh();
                IO_Status_RE1_SetHigh();
                IO_Status_RE2_SetHigh();
                UART_WriteString("LEDs Encendidos\r");
                break;
            case 'h':
                IO_Status_RE0_SetLow();
                IO_Status_RE1_SetLow();
                IO_Status_RE2_SetLow();
                UART_WriteString("LEDs Apagados\r");
                break;
            default:
                IO_Status_RE0_SetLow();
                IO_Status_RE1_SetLow();
                IO_Status_RE2_SetLow();
                break;
        }
    }
}

	
