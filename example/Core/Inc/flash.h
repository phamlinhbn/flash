#ifndef __FLASH_H
#define __FLASH_H
#include <stdint.h>
#include <string.h>
#pragma pack(1)
typedef struct
{
	uint8_t no;
	uint8_t ssid[30];
	uint8_t pass[30];
}wifi_info_t;
#pragma pack()
void Flash_Erase(uint32_t address); // xoa flash theo page
void Flash_Write_Int(uint32_t address,int value);	//viet gia tri so nguyen
void Flash_Write_Float(uint32_t address,float f); //viet gia tri so thuc
void Flash_Write_Array(uint32_t address,uint8_t *arr,uint16_t len);//viet mot mang du lieu
void Flash_Write_Struct(uint32_t address,wifi_info_t dta);

int Flash_Read_Int(uint32_t address); // doc gia tri so nguyen
float Flash_Read_Float(uint32_t address); // doc gia tri so thuc
void Flash_Read_Array(uint32_t address, uint8_t *arr,uint16_t len);//doc mot mang du lieu
void Flash_Read_Struct(uint32_t address,wifi_info_t *dta);
#endif