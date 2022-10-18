#include "mcu.h"

/*******************************************************************************
 * Function:        void MCU_Init(void)
 * Description:     Configura opciones del sitema. Velocidad, entras y salidas
 * Precondition:    None
 * Parameters:      None
 * Return Values:   None
 * Remarks:         Oscilador interno = 4MHz, PLL activado, OSC = 16MHz
 ******************************************************************************/
void MCU_Init(void){
    OSCCONbits.IRCF = 0b110;    //Fosc = 4MHz
    OSCTUNEbits.PLLEN = 1;      //PLL enable Fosc = 16MHz
    
    ADCON1bits.PCFG = 0b1111;   //Entradas digitales
    
    IO_Status_RE0_SetDigitalOutput();  //
    IO_Status_RE1_SetDigitalOutput();  //LEDs como salidas
    IO_Status_RE2_SetDigitalOutput();  //
    
    IO_Status_RE0_SetLow();   //
    IO_Status_RE1_SetLow();   //Apagamos LEDs
    IO_Status_RE2_SetLow();   //
}
