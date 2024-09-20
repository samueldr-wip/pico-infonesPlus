/*===================================================================*/
/*                                                                   */
/*  InfoNES_Mapper.cpp : InfoNES Mapper Function                     */
/*                                                                   */
/*  2000/05/16  InfoNES Project ( based on NesterJ and pNesX )       */
/*                                                                   */
/*===================================================================*/

/*-------------------------------------------------------------------*/
/*  Include files                                                    */
/*-------------------------------------------------------------------*/

#include "InfoNES.h"
#include "InfoNES_System.h"
#include "InfoNES_Mapper.h"
#include "K6502.h"

/*-------------------------------------------------------------------*/
/*  Table of Mapper initialize function                              */
/*-------------------------------------------------------------------*/

struct MapperTable_tag MapperTable[] =
{
  {   0, Map0_Init   },
  {   1, Map1_Init   },
  {   2, Map2_Init   },
  {   3, Map3_Init   },
  {   4, Map4_Init   },
  {   5, Map5_Init   },
  {   6, Map6_Init   },
  {   7, Map7_Init   },
  {   8, Map8_Init   },
  {   9, Map9_Init   },
  {  10, Map10_Init  },
  {  11, Map11_Init  },
  {  15, Map15_Init  },
  {  16, Map16_Init  },
  {  17, Map17_Init  },
  {  18, Map18_Init  },
  {  19, Map19_Init  },
  {  21, Map21_Init  },
  {  22, Map22_Init  },
  {  23, Map23_Init  },
  {  24, Map24_Init  },
  {  25, Map25_Init  },
  {  26, Map26_Init  },
  {  32, Map32_Init  },
  {  33, Map33_Init  },
  {  34, Map34_Init  },
  {  40, Map40_Init  },
  {  41, Map41_Init  },
  {  42, Map42_Init  },
  {  43, Map43_Init  },
  {  44, Map44_Init  },
  {  45, Map45_Init  },
  {  46, Map46_Init  },
  {  47, Map47_Init  },
  {  48, Map48_Init  },
  {  49, Map49_Init  },
  {  50, Map50_Init  },
  {  64, Map64_Init  },
  {  65, Map65_Init  },
  {  66, Map66_Init  },
  {  67, Map67_Init  },
  {  68, Map68_Init  },
  {  69, Map69_Init  },
  {  70, Map70_Init  },
  {  71, Map71_Init  },
  {  72, Map72_Init  },
  {  73, Map73_Init  },
  {  75, Map75_Init  },
  {  76, Map76_Init  },
  {  77, Map77_Init  }, 
  {  78, Map78_Init  }, 
  {  79, Map79_Init  }, 
  {  80, Map80_Init  }, 
  {  82, Map82_Init  }, 
  {  83, Map83_Init  },
  {  85, Map85_Init  },
  {  86, Map86_Init  },
  {  87, Map87_Init  },
  {  88, Map88_Init  },
  {  89, Map89_Init  },
  {  90, Map90_Init  },
  {  91, Map91_Init  },
  {  92, Map92_Init  },
  {  93, Map93_Init  },
  {  94, Map94_Init  },
  {  95, Map95_Init  },
  {  97, Map97_Init  },
  { 101, Map101_Init },
  { 112, Map112_Init },
  { 113, Map113_Init },
  { 114, Map114_Init },
  { 117, Map117_Init },
  { 118, Map118_Init },
  { 122, Map122_Init },
  { 151, Map151_Init }, 
  { 160, Map160_Init }, 
  { 180, Map180_Init }, 
  { 182, Map182_Init }, 
  { 185, Map185_Init }, 
  { 188, Map188_Init }, 
  { 189, Map189_Init }, 
  { 243, Map243_Init },
  { -1, NULL }
};

/*-------------------------------------------------------------------*/
/*  body of Mapper functions                                         */
/*-------------------------------------------------------------------*/

#include "mapper/InfoNES_Mapper_000.cpp"
#include "mapper/InfoNES_Mapper_001.cpp"
#include "mapper/InfoNES_Mapper_002.cpp"
#include "mapper/InfoNES_Mapper_003.cpp"
#include "mapper/InfoNES_Mapper_004.cpp"
#include "mapper/InfoNES_Mapper_005.cpp"
#include "mapper/InfoNES_Mapper_006.cpp"
#include "mapper/InfoNES_Mapper_007.cpp"
#include "mapper/InfoNES_Mapper_008.cpp"
#include "mapper/InfoNES_Mapper_009.cpp"
#include "mapper/InfoNES_Mapper_010.cpp"
#include "mapper/InfoNES_Mapper_011.cpp"
#include "mapper/InfoNES_Mapper_015.cpp"
#include "mapper/InfoNES_Mapper_016.cpp"
#include "mapper/InfoNES_Mapper_017.cpp"
#include "mapper/InfoNES_Mapper_018.cpp"
#include "mapper/InfoNES_Mapper_019.cpp"
#include "mapper/InfoNES_Mapper_021.cpp"          
#include "mapper/InfoNES_Mapper_022.cpp"  
#include "mapper/InfoNES_Mapper_023.cpp"  
#include "mapper/InfoNES_Mapper_024.cpp"  
#include "mapper/InfoNES_Mapper_025.cpp"  
#include "mapper/InfoNES_Mapper_026.cpp"  
#include "mapper/InfoNES_Mapper_032.cpp"  
#include "mapper/InfoNES_Mapper_033.cpp" 
#include "mapper/InfoNES_Mapper_034.cpp" 
#include "mapper/InfoNES_Mapper_040.cpp"
#include "mapper/InfoNES_Mapper_041.cpp"
#include "mapper/InfoNES_Mapper_042.cpp"
#include "mapper/InfoNES_Mapper_043.cpp"
#include "mapper/InfoNES_Mapper_044.cpp"
#include "mapper/InfoNES_Mapper_045.cpp"
#include "mapper/InfoNES_Mapper_046.cpp"
#include "mapper/InfoNES_Mapper_047.cpp"
#include "mapper/InfoNES_Mapper_048.cpp"
#include "mapper/InfoNES_Mapper_049.cpp"
#include "mapper/InfoNES_Mapper_050.cpp"
#include "mapper/InfoNES_Mapper_064.cpp"
#include "mapper/InfoNES_Mapper_065.cpp"
#include "mapper/InfoNES_Mapper_066.cpp"
#include "mapper/InfoNES_Mapper_067.cpp"
#include "mapper/InfoNES_Mapper_068.cpp"
#include "mapper/InfoNES_Mapper_069.cpp"
#include "mapper/InfoNES_Mapper_070.cpp"
#include "mapper/InfoNES_Mapper_071.cpp"
#include "mapper/InfoNES_Mapper_072.cpp"
#include "mapper/InfoNES_Mapper_073.cpp"
#include "mapper/InfoNES_Mapper_075.cpp"
#include "mapper/InfoNES_Mapper_076.cpp"
#include "mapper/InfoNES_Mapper_077.cpp"
#include "mapper/InfoNES_Mapper_078.cpp"
#include "mapper/InfoNES_Mapper_079.cpp"
#include "mapper/InfoNES_Mapper_080.cpp"
#include "mapper/InfoNES_Mapper_082.cpp"
#include "mapper/InfoNES_Mapper_083.cpp"
#include "mapper/InfoNES_Mapper_085.cpp"
#include "mapper/InfoNES_Mapper_086.cpp"
#include "mapper/InfoNES_Mapper_087.cpp"
#include "mapper/InfoNES_Mapper_088.cpp"
#include "mapper/InfoNES_Mapper_089.cpp"
#include "mapper/InfoNES_Mapper_090.cpp"
#include "mapper/InfoNES_Mapper_091.cpp"
#include "mapper/InfoNES_Mapper_092.cpp"
#include "mapper/InfoNES_Mapper_093.cpp"
#include "mapper/InfoNES_Mapper_094.cpp"
#include "mapper/InfoNES_Mapper_095.cpp"
#include "mapper/InfoNES_Mapper_097.cpp"
#include "mapper/InfoNES_Mapper_101.cpp"
#include "mapper/InfoNES_Mapper_112.cpp"
#include "mapper/InfoNES_Mapper_113.cpp"
#include "mapper/InfoNES_Mapper_114.cpp"
#include "mapper/InfoNES_Mapper_117.cpp"
#include "mapper/InfoNES_Mapper_118.cpp"
#include "mapper/InfoNES_Mapper_122.cpp"
#include "mapper/InfoNES_Mapper_151.cpp"
#include "mapper/InfoNES_Mapper_160.cpp"
#include "mapper/InfoNES_Mapper_180.cpp"
#include "mapper/InfoNES_Mapper_182.cpp"
#include "mapper/InfoNES_Mapper_185.cpp"
#include "mapper/InfoNES_Mapper_188.cpp"
#include "mapper/InfoNES_Mapper_189.cpp"
#include "mapper/InfoNES_Mapper_243.cpp"

/* End of InfoNES_Mapper.cpp */
