/*****************************************************************************/
/*                                                                           */
/* FILENAME                                                                  */
/* 	 Hanning.h                                                               */
/*                                                                           */
/* DESCRIPTION                                                               */
/*   Highpass and Lowpass FIR filter with 51 constants based on 48000 Hz     */
/*   sampling frequency. Use Hanning window.                                 */
/*                                                                           */
/* REVISION                                                                  */
/*   Revision: 1.00	                                                         */
/*   Author  : Richard Sikora                                                */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/* HISTORY                                                                   */
/*   Revision 1.00                                                           */
/*   7th March 2010. Created by Richard Sikora from Matlab FDAtool.          */
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

#ifndef HANNING_H
#define HANNING_H

/*****************************************************************************/
/* High Pass Filters                                                         */
/*****************************************************************************/


const int Hanning_High_Pass_Filter_1000Hz[51] = {
           0,      0,     -2,     -7,    -17,    -33,    -56,    -88,
     -130,   -182,   -244,   -316,   -398,   -487,   -583,   -682,   -784,
     -885,   -983,  -1075,  -1158,  -1229,  -1287,  -1330,  -1356,  31403,
    -1356,  -1330,  -1287,  -1229,  -1158,  -1075,   -983,   -885,   -784,
     -682,   -583,   -487,   -398,   -316,   -244,   -182,   -130,    -88,
      -56,    -33,    -17,     -7,     -2,      0,      0
};

/*****************************************************************************/
/* Low Pass Filters                                                          */
/*****************************************************************************/

const int Hanning_Low_Pass_Filter_1000Hz[51] = {
        0,      0,      1,      4,     11,     24,     46,     77,    119,
      172,    238,    317,    407,    508,    618,    734,    855,    977,
     1097,   1211,   1316,   1410,   1488,   1550,   1592,   1613,   1613,
     1592,   1550,   1488,   1410,   1316,   1211,   1097,    977,    855,
      734,    618,    508,    407,    317,    238,    172,    119,     77,
       46,     24,     11,      4,      1,      0
};

#endif

/*****************************************************************************/
/* End of Hanning.h                                                          */
/*****************************************************************************/


