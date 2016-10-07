#include "UserADC.h"



void Voltage (void)
{
	static uint32_t AD_Valie[3] = {0};
	static uint32_t AD_Valie1[5] = {0};
	static uint8_t count = 0;
	static uint8_t count1 = 0;
	static uint8_t Flag_Start = 0;
	static uint32_t Voltage_limited = 300;

    HAL_ADC_Start(&hadc1);
    AD_Valie[count++] = HAL_ADC_GetValue(&hadc1);

    if(count==3)
    {
    	count = 0;
    	quick_sort((int *)AD_Valie,3);
    	AD_Valie1[count1++] = AD_Valie[1];
    }

    if(count1==5)
    {
    	count1 = 0;
    	Flag_Start = 1;
    	quick_sort((int *)AD_Valie1,5);
    	if( AD_Valie1[2] < Voltage_limited)
    	{
    		while(1)
    		{
    			//LED_On(2);
    		}
    	}
    }

}



