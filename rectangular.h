/*****************************************************************************/
/*                                                                           */
/* FILENAME                                                                  */
/* 	 Rectangular.h                                                           */
/*                                                                           */
/* DESCRIPTION                                                               */
/*   Highpass and Lowpass FIR filter with 51 constants based on 48000 Hz     */
/*   sampling frequency. Use Rectangular (Boxcar) window.                    */
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

#ifndef RECTANGULAR_H
#define RECTANGULAR_H

const int Rectangular_High_Pass_Filter_1000Hz[51] = {
           54,      0,    -59,   -122,   -189,   -260,   -333,   -408,
     -485,   -562,   -640,   -717,   -792,   -866,   -936,  -1004,  -1067,
    -1125,  -1178,  -1224,  -1265,  -1299,  -1325,  -1345,  -1356,  31281,
    -1356,  -1345,  -1325,  -1299,  -1265,  -1224,  -1178,  -1125,  -1067,
    -1004,   -936,   -866,   -792,   -717,   -640,   -562,   -485,   -408,
     -333,   -260,   -189,   -122,    -59,      0,     54
};

/*****************************************************************************/
/* Low Pass Filters                                                          */
/*****************************************************************************/

const int Rectangular_Low_Pass_Filter_1000Hz[51] = {
        461,    480,    500,    518,    537,    554,    571,    588,
      604,    619,    633,    647,    659,    671,    682,    692,    702,
      710,    717,    723,    729,    733,    736,    738,    739,    739,
      738,    736,    733,    729,    723,    717,    710,    702,    692,
      682,    671,    659,    647,    633,    619,    604,    588,    571,
      554,    537,    518,    500,    480,    461,    441
};

#endif

/*****************************************************************************/
/* End of Rectangular.h                                                      */
/*****************************************************************************/


