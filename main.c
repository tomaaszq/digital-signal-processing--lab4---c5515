
/*****************************************************************************/
/*                                                                           */
/* PROJECT                                                                   */
/*   FIRFilters                                                              */
/*                                                                           */
/* FILENAME                                                                  */
/* 	 main.c                                                                  */
/*                                                                           */
/* DESCRIPTION                                                               */
/*   Finite Impulse Response (FIR) Filters using the TMS320C5505 USB stick.  */
/*   Low pass and high pass filters. Audio line in / audio headphones out.   */
/*                                                                           */
/* REVISION                                                                  */
/*   Revision: 1.01	                                                         */
/*   Author  : Richard Sikora                                                */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/* HISTORY                                                                   */
/*                                                                           */
/*   Revision 1.00                                                           */
/*   5th March 2010. Original template code from Spectrum Digital.           */
/*                                                                           */
/*   Revision 1.01                                                           */
/*   5th August 2010. Converted to use Code support library CSL.             */
/*                                                                           */
/*****************************************************************************/
/*
 * Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/ 
 * 
 * 
 *  Redistribution and use in source and binary forms, with or without 
 *  modification, are permitted provided that the following conditions 
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright 
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the 
 *    documentation and/or other materials provided with the   
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/

#include "stdio.h"
#include "usbstk5505.h"
#include "aic3204.h"
#include "PLL.h"
#include "FIR_Filters_asm.h"
#include "LEDFlasher.h"
#include "hamming.h"
#include "hanning.h"
#include "kaiser.h"
#include "rectangular.h"
#include "stereo.h"
#include "sinewaves.h"

Int16 left_input;
Int16 right_input;
Int16 left_output;
Int16 right_output;
Int16 mono_input;

Int16 left[512];
Int16 right[512];

Int16 idx;

#define SAMPLES_PER_SECOND 48000
#define GAIN_IN_dB         30

unsigned long int i = 0;
unsigned int step = 0;

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  main( )                                                                 *
 *                                                                          *
 * ------------------------------------------------------------------------ */
void main( void ) 
{
    /* Initialize BSL */
// USBSTK5505_init( );
    
    /* Initialize the Phase Locked Loop in EEPROM */
// pll_frequency_setup(100);
    
	/* Initialise hardware interface and I2C for code */
 //   aic3204_hardware_init();
    
    /* Initialise the AIC3204 codec */
//	aic3204_init(); 

    printf("\n\nRunning FIR Filters Project\n");
    printf( "<-> Audio Loopback from Stereo Line IN --> to HP/Lineout\n\n" );
	
	/* Set sampling frequency in Hz and ADC gain in dB */
    set_sampling_frequency_and_gain(SAMPLES_PER_SECOND, GAIN_IN_dB);

	puts("1 Flash   = Straight through, no processing");
	puts("2 Flashes = Hamming filter 500 Hz");
	puts("3 Flashes = Hamming filter 1000 Hz");
	puts("4 Flashes = Hamming filter 2000 Hz");
	puts("5 Flashes = Hamming filter 3000 Hz"); 

 //   asm(" bclr XF");
   idx=0;
 	for ( i = 0  ; i < SAMPLES_PER_SECOND * 600L  ;i++  )
 	{

  //   aic3204_codec_read(&left_input, &right_input); // Configured for one interrupt per two channels.
    
   //  mono_input = stereo_to_mono(left_input, right_input);
    
  //   step = LEDFlasher(5); // 5 Different filter settings.
  
       mono_input = generate_sinewave_1(250, 2000)+generate_sinewave_2(750, 2000)+generate_sinewave_3(1250, 2000);
     
     // switch (step)
      // {
       // case 1:
         // left_output = mono_input; // Straight through, no processing.
         // right_output = mono_input;
       // break;
       
       // case 2:
         left_output = FIR_filter_asm(&Hamming_Low_Pass_Filter_500Hz[0], mono_input);
         right_output = FIR_filter_asm_2(&Hamming_High_Pass_Filter_500Hz[0], mono_input);  

		left[idx] = left_output;
		right[idx] = right_output;
		idx++;
		if(idx==512)
			idx=0;

		 
       // break;  
       
       // case 3:
         // left_output = FIR_filter_asm(&Hamming_Low_Pass_Filter_1000Hz[0], mono_input);
         // right_output = FIR_filter_asm_2(&Hamming_High_Pass_Filter_1000Hz[0], mono_input);            
       // break;  
       
       // case 4:
         // left_output = FIR_filter_asm(&Hamming_Low_Pass_Filter_2000Hz[0], mono_input);
         // right_output = FIR_filter_asm_2(&Hamming_High_Pass_Filter_2000Hz[0], mono_input);            
       // break;      
       
       // case 5:
         // left_output = FIR_filter_asm(&Hamming_Low_Pass_Filter_3000Hz[0], mono_input);
         // right_output = FIR_filter_asm_2(&Hamming_High_Pass_Filter_3000Hz[0], mono_input);            
       // break;  
      // }
      
     // aic3204_codec_write(left_output, right_output);
 	}

   /* Disable I2S and put codec into reset */ 
    // aic3204_disable();

    printf( "\n***Program has Terminated***\n" );
    SW_BREAKPOINT;
}

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  End of main.c                                                           *
 *                                                                          *
 * ------------------------------------------------------------------------ */

