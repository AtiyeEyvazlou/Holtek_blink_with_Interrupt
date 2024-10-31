#include <BS66F350C.h>

volatile int s=0 , flag=0 , s1 =0 ;

#define LED_1_DIR	_pcc7
#define LED_1		_pc7
#define LED_2_DIR	_pcc6
#define LED_2		_pc6

void HW_INIT();

void main()
{
HW_INIT();
    while(1)
    {
	  	// Clear watchdog timer:
		asm("CLR WDT");
	if( s > 50)
		{
		
		s= 0;
		LED_1 =! LED_1;
		LED_2 =! LED_2;
		
	    }
    }
	
}
                 
void __attribute((interrupt(0x24)))isr_name(void)
{
	_tb0f = 0;	
	s++;
	
}


void HW_INIT()
{
	// Disable interrupts:
	_emi =1;
	// Oscillator setup:
	_scc = 0B00000000;
	_hircc = 0B00000001; // INTERNAL OSCILLATOR
	_hxtc = 0B00000000;  // HIGH SPEED EXTERNAL OSCILLATOR
	_lxtc = 0B00000000;  // LOW SPEED EXTERNAL OSCILLATOR
	_psc0r =0b00000000;

	// Watchdog timer: Enabled, time-out: 32ms
	_wdtc = 0B10101111; // 01010: enable watchdog, 001 : 2^10 /fLIRC #internal_OCS

	// Low voltage reset: Threshold 3.8V.
	_lvrc = 0B10101010;

	LED_1_DIR=0;  	 	//led1
	LED_1=0;	
	
	LED_2_DIR=0;  	 	//led2
	LED_2=1;	
		            	          
	// timebase0  
	_intc2=0b00100010;
	_tb0c = 0b00000111;	         
	_tb0on = 1;
}


