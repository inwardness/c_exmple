//SEG-D format Rev.3.0
//bcd: BCD; ubin: unsigned binary; bin: 2's complement signed binary; asc: ASCII; flt: IEEE single-precision; dbl: IEEE dounble-precision

//An infinity value means a floating number with all the bits of the exponent 
//set to 1 and all the bits of the mantissa set to 0. It normally means an
//unavailable value. Numbers with 0x ahead are in hexadecimal format.

//Here below is a tab resuming the block names and codes used by the SEG-D
//Rev 3.0 norm and the ones specifically defined by Sercel. These codes
//(Hexadecimal) are written in the last byte of the corresponding block

block name                                              size|code(hex)
General Header Block #1                                 32  |None
__________________________________________________________________________________________________________________________________________________________
byte  | format | Description                 |   Value   |   Comment                                                                                      |
______|________|_____________________________|___________|________________________________________________________________________________________________|
1-2   |  bcd   | File number of four digits  |   FFFF    | Sercel systematically use theextended file number (GHB#2,byte 1-3) even for values below 9999  |
3-4   |  bcd   | Format code                 |   8058    | 32 bit IEEE or 64 bit IEEE                                                                     |
5-10  |  bcd   | General constants,12 digits |   0       | 0, Not used                                                                                    |
11    |  bcd   | Last two digits of year     |   0-99    | UTC conversion of the GPS from the GHB#3, byte 1-8                                             |
12H   | ubin   | Number of additional blocks |   F       | Sercel systematically use the extended number of additional blocks in general header           |
      |        | in general header           |           | (GHB#2, byte 23-24)                                                                            |
12L-13|  bcd   | Julian day, 3 digits        |   1-366   | UTC conversion of the GPS from GHB#3, byte 1-8                                                 |
14    |  bcd   | Hour of day                 |   0-23    | UTC conversion of the GPS from GHB#3, byte 1-8                                                 |
15    |  bcd   | Minute of hour              |   0-59    | UTC conversion of the GPS from GHB#3, byte 1-8                                                 |
16    |  bcd   | Second of minute            |   0-60    | UTC conversion of the GPS from GHB#3, byte 1-8. The value 60 is a legal value                  |
      |        |                             |           | of this field only during UTC leap seconds                                                     |   
17    |  bcd   | Manufacturer’s code         |   13      | Sercel code                                                                                    |   
18-19 |  bcd   | Manufacturer’s serial nb    |   1       | 0: N/A 1: 508XT                                                                                |
20-22 |        | Not Used                    |   0       |                                                                                                |
23    |  bcd   | Base scan interval          |   FF      | Sercel systematically use the sampling interval (CSD, byte 24-26)                              |
24H   |  ubin  | Polarity                    |   0       | Untested                                                                                       |   
24L-25|        | Not used                    |   0       |                                                                                                |                         
26H   |  bcd   | Record type                 |   2,8     | 0x08:normal 0x02:test record The other values are not used                                     |
26L-27|  bcd   | Record length from time     |   0x0FFF  | 0x0FFF in normal recording mode.                                                               |
      |        | zero (in increments of 0.5  |           |                                                                                                | 
      |        | times 1.024 sec)            |           |                                                                                                |
28    |  bcd   | Scan type per record        |   1       | Only one scan type per record.                                                                 | 
29    |  bcd   | Number of channel sets      |   FF      | Sercel systematically use the extended number of channel set (GHB#2, byte 4-5) even for the    |
      |        | per scan type (0-99)        |           | values <= 99                                                                                   |   
30    |  bcd   | Number of 32 byte fields    |   FF      | Sercel systematically use theextended skew blocks (GHB#2, byte 9-10) even for the values <= 99 |   
      |        | added to the end of each    |           |                                                                                                |       
      |        | scan type header in order   |           |                                                                                                |      
      |        | to record the sample        |           |                                                                                                |
      |        | skew of all channels (0-99) |           |                                                                                                |
31    |  bcd   | Extended header length      |   FF      | Sercel systematically use the extended header blocks (GHB#2,byte 6-8) even for the values<= 99 |
32    |  bcd   | External header length      |   FF      | Sercel systematically use the external header blocks (GHB#2,byte 28-30)even for the values<= 99|
______|________|_____________________________|___________|________________________________________________________________________________________________|

block name:                                              size|code(hex)
General Header Block #2                                  32  | 2
__________________________________________________________________________________________________________________________________________________________
byte  | format | Description                 |   Value   |   Comment                                                                                      |
______|________|_____________________________|___________|________________________________________________________________________________________________|
1-3   |  ubin  | Extended file number        |   xxx     | 2^24-1                                                                                         |
4-5   |  ubin  | Extended Channel Sets/      |   1-XX    | The SEG-D V3.0 allows 0                                                                        |      
      |        | Scan Types                  |           |                                                                                                |  
6-8   |  ubin  | Extended Header Blocks      |   1       |                                                                                                |
9-10  |  ubin  | Extended Skew Blocks        |   0       |                                                                                                |
11    |  ubin  | Major SEG-D Revision Number |   3       |                                                                                                |
12    |  ubin  | Minor SEG-D Revision Number |   0       |                                                                                                |
13-16 |  ubin  | Number of Blocks of         |   0-xxx   |                                                                                                |     
      |        | General Trailer             |           |                                                                                                |  
17-20 |  ubin  | Extended Record Length      |   0-xxx   | In normal recording mode, it’s the maximum length of all the seismic traces. The trace length  |  
      |        |                             |           | is peculiar to the channel set                                                                 |
21-22 |  ubin  | Record set number           |   0-60    | Swath Number                                                                                   |
      |        |                             |           |                                                                                                |   
23-24 |  ubin  | Extended Number of          |   0-xx    |                                                                                                |      
      |        | additional Blocks in the-   |           |                                                                                                |  
      |        | -General Header             |           |                                                                                                |   
25-27 |  ubin  | Dominant Sampling Interval  |   xxx     | Sample Rate if all the seismic traces have the same sample rate.                               |  
      |        |                             |           | 0 otherwise MicroSecond.                                                                       |
28-30 |        | External Header Block       |   0-xxx   | Quantity of 32 bytes blocks                                                                    |
31    |  ubin  | Undefined                   |   0       |                                                                                                |
32    |  ubin  | Header block type           |   2       | General Header Block #2: 0x02                                                                  |   
______|________|_____________________________|___________|________________________________________________________________________________________________|
General Header Block #3 (Timestamp and size header)     32 3
General Header Block #4 (Vessel/Crew identification)    32 10
General Header Block #5 (Survey Area Name)              32 11
General Header Block #6 (Client identification)         32 12
General Header Block #7 (Job identification)            32 13
General Header Block #8 (Line identification)           32 14
Source Description Blocks: Vibrator                     32 15
Source Description Blocks: Impulsive                    32 16
Additional Source Info Block                            32 20
Source Auxiliary Channel Reference Block                32 21
Coordinate Reference System Identification Block        32 55
Position Blocks                                         32 50
Position Blocks                                         32 51
Position Blocks                                         32 52
Scan Type Header                                        32 30
Scan Type Header                                        32 31
Scan Type Header                                        32 32
The Extended Header                                     32 None
The External Header                                   X.32 None
General Trailer Block                                   32 70
Demultiplexed Trace Header                              20 None
Trace Header Extension # 1                              32 40
Sensor Info Trace Header Extension                      32 41
Timestamp Header                                        32 42
Measurement Header                                      32 61
Sercel SEG-D Revision Block                             32 B0
Sercel Tape Block                                       32 B1
Sercel File Identification Block                        32 B2
Sercel VP Identification Block                          32 B3
Sercel Processing Details Block                         32 B4
Sercel Stack Details Block                              32 B5
Sercel Additional Vibrator Source Info                  32 B6
Sercel Additional Explosive Source Info                 32 B7
Sercel Trace Label Block                                32 B8
Sercel Trace Identification Block                       32 B9
Sercel Trace Edition and Processing Block               32 BA
*/


