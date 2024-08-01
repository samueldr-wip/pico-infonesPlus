#include "ff.h"
extern struct settings settings;
enum class ScreenMode
    {
        SCANLINE_8_7,
        NOSCANLINE_8_7,
        SCANLINE_1_1,
        NOSCANLINE_1_1,
        MAX,
    };
struct settings {
    ScreenMode screenMode;
    int firstVisibleRowINDEX;
    int selectedRow;
    int horzontalScrollIndex;
    char currentDir[FF_MAX_LFN];
};
void savesettings();
void loadsettings();