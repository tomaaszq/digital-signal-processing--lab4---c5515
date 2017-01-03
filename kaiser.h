/*****************************************************************************/
/*                                                                           */
/* FILENAME                                                                  */
/* 	 Kaiser.h                                                                */
/*                                                                           */
/* DESCRIPTION                                                               */
/*   Highpass and Lowpass FIR filter with 51 constants based on 48000 Hz     */
/*   sampling frequency. Use Kaiser window.                                  */
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

#ifndef KAISER_H
#define KAISER_H

/*****************************************************************************/
/* High Pass Filters                                                         */
/*****************************************************************************/


const int Kaiser_High_Pass_Filter_1000Hz[51] = {
        44,      0,    -49,   -104,   -163,   -227,   -295,   -366,
     -440,   -516,   -594,   -672,   -749,   -826,   -900,   -972,  -1039,
    -1102,  -1160,  -1211,  -1256,  -1293,  -1323,  -1344,  -1357,  31307,
    -1357,  -1344,  -1323,  -1293,  -1256,  -1211,  -1160,  -1102,  -1039,
     -972,   -900,   -826,   -749,   -672,   -594,   -516,   -440,   -366,
     -295,   -227,   -163,   -104,    -49,      0,     44
};

/*****************************************************************************/
/* Low Pass Filters                                                          */
/*****************************************************************************/

const int Kaiser_Low_Pass_Filter_1000Hz[51] = {
         -20,     21,     66,    117,    171,    229,    290,    355,
      421,    489,    558,    627,    695,    762,    827,    888,    946,
     1000,   1048,   1091,   1127,   1157,   1179,   1195,   1202,   1202,
     1195,   1179,   1157,   1127,   1091,   1048,   1000,    946,    888,
      827,    762,    695,    627,    558,    489,    421,    355,    290,
      229,    171,    117,     66,     21,    -20,    -56
};

#endif

/*****************************************************************************/
/* End of Kaiser.h                                                           */
/*****************************************************************************/


