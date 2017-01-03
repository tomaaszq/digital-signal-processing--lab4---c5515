/*****************************************************************************/
/*                                                                           */
/* FILENAME                                                                  */
/* 	 Hamming.h                                                               */
/*                                                                           */
/* DESCRIPTION                                                               */
/*   Highpass and Lowpass FIR filter with 51 constants based on 48000 Hz     */
/*   sampling frequency. Use Hamming window.                                 */
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

#ifndef HAMMING_H
#define HAMMING_H


/*****************************************************************************/
/* High Pass Filters                                                         */
/*****************************************************************************/

const int Hamming_High_Pass_Filter_500Hz[51] = {
         -35,    -41,    -50,    -62,    -79,    -99,   -122,   -149,
     -180,   -213,   -249,   -287,   -326,   -366,   -407,   -447,   -486,
     -523,   -557,   -589,   -617,   -640,   -659,   -672,   -681,  32116,
     -681,   -672,   -659,   -640,   -617,   -589,   -557,   -523,   -486,
     -447,   -407,   -366,   -326,   -287,   -249,   -213,   -180,   -149,
     -122,    -99,    -79,    -62,    -50,    -41,    -35
};

const int Hamming_High_Pass_Filter_1000Hz[51] = {
           5,      0,     -7,    -16,    -31,    -51,    -78,   -114,
     -159,   -213,   -276,   -349,   -429,   -517,   -611,   -708,   -807,
     -904,   -999,  -1087,  -1166,  -1235,  -1290,  -1331,  -1356,  31393,
    -1356,  -1331,  -1290,  -1235,  -1166,  -1087,   -999,   -904,   -807,
     -708,   -611,   -517,   -429,   -349,   -276,   -213,   -159,   -114,
      -78,    -51,    -31,    -16,     -7,      0,      5
};


const int Hamming_High_Pass_Filter_2000Hz[51] = {
             5,      0,     -7,    -16,    -31,    -51,    -78,   -114,
     -159,   -213,   -276,   -349,   -429,   -517,   -611,   -708,   -807,
     -904,   -999,  -1087,  -1166,  -1235,  -1290,  -1331,  -1356,  31393,
    -1356,  -1331,  -1290,  -1235,  -1166,  -1087,   -999,   -904,   -807,
     -708,   -611,   -517,   -429,   -349,   -276,   -213,   -159,   -114,
      -78,    -51,    -31,    -16,     -7,      0,      5
};

const int Hamming_High_Pass_Filter_3000Hz[51] = {
            13,      0,    -19,    -44,    -74,   -102,   -119,   -114,
      -77,      0,    114,    255,    400,    517,    569,    518,    334,
        0,   -481,  -1086,  -1769,  -2468,  -3114,  -3635,  -3975,  28649,
    -3975,  -3635,  -3114,  -2468,  -1769,  -1086,   -481,      0,    334,
      518,    569,    517,    400,    255,    114,      0,    -77,   -114,
     -119,   -102,    -74,    -44,    -19,      0,     13
};

const int Hamming_High_Pass_Filter_4000Hz[51] = {
          -17,      0,     25,     55,     80,     88,     65,      0,
     -100,   -213,   -299,   -313,   -217,      0,    309,    636,    874,
      906,    630,      0,   -959,  -2141,  -3376,  -4460,  -5203,  27333,
    -5203,  -4460,  -3376,  -2141,   -959,      0,    630,    906,    874,
      636,    309,      0,   -217,   -313,   -299,   -213,   -100,      0,
       65,     88,     80,     55,     25,      0,    -17
};

const int Hamming_High_Pass_Filter_5000Hz[51] = {
           21,      0,    -30,    -61,    -74,    -51,     17,    114,
      198,    213,    114,    -93,   -343,   -517,   -489,   -190,    334,
      904,   1247,   1086,    250,  -1234,  -3113,  -4965,  -6322,  25915,
    -6322,  -4965,  -3113,  -1234,    250,   1086,   1247,    904,    334,
     -190,   -489,   -517,   -343,    -93,    114,    213,    198,    114,
       17,    -51,    -74,    -61,    -30,      0,     21
};

const int Hamming_High_Pass_Filter_8000Hz[51] = {
       -25,      0,     35,     63,     57,      0,    -91,   -162,
     -142,      0,    212,    361,    307,      0,   -436,   -734,   -618,
        0,    891,   1539,   1356,      0,  -2387,  -5150,  -7358,  24600,
    -7358,  -5150,  -2387,      0,   1356,   1539,    891,      0,   -618,
     -734,   -436,      0,    307,    361,    212,      0,   -142,   -162,
      -91,      0,     57,     63,     35,      0,    -25
};


/*****************************************************************************/
/* Low Pass Filters                                                          */
/*****************************************************************************/

const int Hamming_Low_Pass_Filter_500Hz[51] = {
           66,     78,     96,    121,    153,    192,    238,    291,
      350,    414,    483,    556,    632,    709,    785,    861,    934,
     1003,   1066,   1123,   1173,   1213,   1245,   1266,   1276,   1276,
     1266,   1245,   1213,   1173,   1123,   1066,   1003,    934,    861,
      785,    709,    632,    556,    483,    414,    350,    291,    238,
      192,    153,    121,     96,     78,     66,     61
};

const int Hamming_Low_Pass_Filter_1000Hz[51] = {
            -3,      3,     12,     24,     43,     68,    103,    147,
      202,    268,    345,    433,    530,    634,    745,    858,    973,
     1085,   1191,   1289,   1376,   1449,   1506,   1545,   1565,   1565,
     1545,   1506,   1449,   1376,   1289,   1191,   1085,    973,    858,
      745,    634,    530,    433,    345,    268,    202,    147,    103,
       68,     43,     24,     12,      3,     -3,     -7
};

const int Hamming_Low_Pass_Filter_2000Hz[51] = {
           5,     -5,    -20,    -40,    -66,    -98,   -134,   -168,
     -195,   -206,   -193,   -147,    -60,     72,    252,    479,    747,
     1046,   1363,   1683,   1986,   2256,   2475,   2630,   2710,   2710,
     2630,   2475,   2256,   1986,   1683,   1363,   1046,    747,    479,
      252,     72,    -60,   -147,   -193,   -206,   -195,   -168,   -134,
      -98,    -66,    -40,    -20,     -5,      5,     12
};

const int Hamming_Low_Pass_Filter_3000Hz[51] = {
           -7,      8,     29,     54,     82,    105,    113,     95,
       41,    -51,   -176,   -319,   -453,   -543,   -549,   -438,   -184,
      222,    766,   1415,   2115,   2797,   3391,   3829,   4062,   4062,
     3829,   3391,   2797,   2115,   1415,    766,    222,   -184,   -438,
     -549,   -543,   -453,   -319,   -176,    -51,     41,     95,    113,
      105,     82,     54,     29,      8,     -7,    -18
};

const int Hamming_Low_Pass_Filter_4000Hz[51] = {
             9,    -11,    -36,    -63,    -81,    -76,    -35,     44,
      150,    252,    307,    272,    120,   -143,   -468,   -764,   -914,
     -804,   -358,    441,   1528,   2760,   3947,   4884,   5400,   5400,
     4884,   3947,   2760,   1528,    441,   -358,   -804,   -914,   -764,
     -468,   -143,    120,    272,    307,    252,    150,     44,    -35,
      -76,    -81,    -63,    -36,    -11,      9,     23
};

const int Hamming_Low_Pass_Filter_5000Hz[51] = {
          -11,     13,     43,     65,     63,     21,    -60,   -153,
     -208,   -172,    -21,    213,    438,    524,    367,    -52,   -623,
    -1114,  -1237,   -753,    421,   2145,   4071,   5733,   6696,   6696,
     5733,   4071,   2145,    421,   -753,  -1237,  -1114,   -623,    -52,
      367,    524,    438,    213,    -21,   -172,   -208,   -153,    -60,
       21,     63,     65,     43,     13,    -11,    -27
};

const int Hamming_Low_Pass_Filter_8000Hz[51] = {
        18,    -21,    -51,    -33,     42,    107,     68,    -85,
     -212,   -130,    159,    384,    231,   -277,   -661,   -395,    472,
     1135,    690,   -851,  -2156,  -1426,   2039,   6893,  10412,  10412,
     6893,   2039,  -1426,  -2156,   -851,    690,   1135,    472,   -395,
     -661,   -277,    231,    384,    159,   -130,   -212,    -85,     68,
      107,     42,    -33,    -51,    -21,     18,     33
};

#endif

/*****************************************************************************/
/* End of Hamming.h                                                          */
/*****************************************************************************/


