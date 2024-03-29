/* 
 * File:   ds1307.h
 * Author: mrchu_000
 *
 * Created on 19 de julio de 2017, 11:28 PM
 */

#ifndef DS1307_H
#define	DS1307_H

#ifdef	__cplusplus
extern "C" {
#endif
    

// Define DS1307 i2c device address
#define Device_Address_DS1307_EEPROM	0xD0

// Define Time Modes
#define AM_Time					0
#define PM_Time					1
#define TwentyFourHoursMode		2

// Define days
#define Monday		1
#define Tuesday		2
#define Wednesday	3	
#define Thursday	4
#define Friday		5
#define Saturday	6
#define Sunday		7

// Function Declarations
void Write_Byte_To_DS1307_RTC(unsigned char Address, unsigned char DataByte);
unsigned char Read_Byte_From_DS1307_RTC(unsigned char Address);
void Write_Bytes_To_DS1307_RTC(unsigned char Address,unsigned char* pData,unsigned char NoOfBytes);
void Read_Bytes_From_DS1307_RTC(unsigned char Address, unsigned char* pData, unsigned int NoOfBytes);
void Set_DS1307_RTC_Time(unsigned char Mode, unsigned char Hours, unsigned char Mins, unsigned char Secs);
unsigned char* Get_DS1307_RTC_Time(void);
void Set_DS1307_RTC_Date(unsigned char Date, unsigned char Month, unsigned char Year, unsigned char Day);
unsigned char* Get_DS1307_RTC_Date(void);


#ifdef	__cplusplus
}
#endif

#endif	/* DS1307_H */

