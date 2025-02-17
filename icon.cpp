#include "icon.h"

image_t seven_segment_26x42[10] = {
    {32, 48, 1, seven_segment_26x42_0, 0, 1},
    {32, 48, 1, seven_segment_26x42_1, 0, 1},
    {32, 48, 1, seven_segment_26x42_2, 0, 1},
    {32, 48, 1, seven_segment_26x42_3, 0, 1},
    {32, 48, 1, seven_segment_26x42_4, 0, 1},
    {32, 48, 1, seven_segment_26x42_5, 0, 1},
    {32, 48, 1, seven_segment_26x42_6, 0, 1},
    {32, 48, 1, seven_segment_26x42_7, 0, 1},
    {32, 48, 1, seven_segment_26x42_8, 0, 1},
    {32, 48, 1, seven_segment_26x42_9, 0, 1},
};

image_t seven_segment_20x32[10] = {{24, 36, 1, seven_segment_20x32_0, 1, 1},
                                   {24, 36, 1, seven_segment_20x32_1, 1, 1},
                                   {24, 36, 1, seven_segment_20x32_2, 1, 1},
                                   {24, 36, 1, seven_segment_20x32_3, 1, 1},
                                   {24, 36, 1, seven_segment_20x32_4, 1, 1},
                                   {24, 36, 1, seven_segment_20x32_5, 1, 1},
                                   {24, 36, 1, seven_segment_20x32_6, 1, 1},
                                   {24, 36, 1, seven_segment_20x32_7, 1, 1},
                                   {24, 36, 1, seven_segment_20x32_8, 1, 1},
                                   {24, 36, 1, seven_segment_20x32_9, 1, 1}};

image_t battery[5] = {
    {32, 16, 1, battery_0, 0, 0},   {32, 16, 1, battery_25, 0, 0},
    {32, 16, 1, battery_50, 0, 0},  {32, 16, 1, battery_75, 0, 0},
    {32, 16, 1, battery_100, 0, 0},
};

// 'chaintip_icon', 8x22px
unsigned char chaintip[22] = {0xc3, 0x81, 0x3c, 0x3c, 0x3c, 0x24, 0x24, 0x24,
                              0x24, 0x24, 0x81, 0x81, 0x24, 0x24, 0x24, 0x24,
                              0x24, 0x3c, 0x3c, 0x3c, 0x81, 0xc3};

// 'dollar_sign', 8x26px
unsigned char dollar_sign[26] = {0xe7, 0xe7, 0xc3, 0x81, 0x24, 0x24, 0x24,
                                 0x27, 0x27, 0x27, 0x27, 0x27, 0x81, 0x81,
                                 0xe4, 0xe4, 0xe4, 0xe4, 0xe4, 0x24, 0x24,
                                 0x24, 0x81, 0xc3, 0xe7, 0xe7};
// 'seven_segment_20x32_period', 8x36px
unsigned char period[36] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xff};

// 'megabytes', 16x32px
unsigned char megabytes[64] = {
    0x3c, 0xff, 0x3c, 0xff, 0x18, 0xff, 0x18, 0xff, 0x00, 0xff, 0x24,
    0xff, 0x24, 0xff, 0x3c, 0xff, 0x3c, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x01, 0xff, 0x18, 0xff, 0x1c, 0xff, 0x18, 0xff, 0x01, 0xff, 0x18,
    0xff, 0x1c, 0xff, 0x18, 0xff, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

// 'sats', 16x32px
unsigned char sats[64] = {
    0xf3, 0xff, 0xf3, 0xff, 0xf3, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x00, 0x3f, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f,
    0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0x00, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xf3, 0xff, 0xf3, 0xff, 0xf3, 0xff, 0xf3, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

image_t chaintip_icon = {8, 22, 1, chaintip, 0, 0};
image_t dollar_sign_icon = {8, 26, 1, dollar_sign, 0, 0};
image_t period_icon{8, 36, 1, period, -1, -1};
image_t sats_icon = {16, 32, 1, sats, 0, 0};
image_t megabytes_icon = {16, 32, 1, megabytes, 0, 0};
