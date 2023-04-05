#include "color_effects.h"
#include "macros.h"
#include "gba.h"

#include "data/color_fading_data.h"

#include "constants/color_fading.h"
#include "constants/game_state.h"

#include "structs/color_effects.h"
#include "structs/game_state.h"

/**
 * @brief 5b24c | 3c | To document
 * 
 */
void unk_5b24c(void)
{
    DMATransfer(3, PALRAM_BASE, EWRAM_BASE + 0x35400, PALRAM_SIZE / 2, 16);
    DMATransfer(3, PALRAM_OBJ, EWRAM_BASE + 0x35600, PALRAM_SIZE / 2, 16);
}

/**
 * @brief 5b288 | 3c | To document
 * 
 */
void unk_5b288(void)
{
    DMATransfer(3, PALRAM_BASE, EWRAM_BASE + 0x35000, PALRAM_SIZE / 2, 16);
    DMATransfer(3, PALRAM_OBJ, EWRAM_BASE + 0x35200, PALRAM_SIZE / 2, 16);
}

/**
 * @brief 5b2c4 | 3c | To document
 * 
 */
void unk_5b2c4(void)
{
    DMATransfer(3, EWRAM_BASE + 0x35400, EWRAM_BASE + 0x35000, PALRAM_SIZE / 2, 16);
    DMATransfer(3, EWRAM_BASE + 0x35600, EWRAM_BASE + 0x35200, PALRAM_SIZE / 2, 16);
}

/**
 * @brief 5b304 | 3c | To document
 * 
 */
void unk_5b304(void)
{
    DMATransfer(3, PALRAM_BASE, EWRAM_BASE + 0x35800, PALRAM_SIZE / 2, 16);
    DMATransfer(3, PALRAM_OBJ, EWRAM_BASE + 0x35A00, PALRAM_SIZE / 2, 16);
}

/**
 * @brief 5b340 | 10 | To document
 * 
 */
void unk_5b340(void)
{
    unk_5b24c();
    unk_5b288();
}

/**
 * @brief 5b350 | 3c | To document
 * 
 */
void unk_5b350(void)
{
    DMATransfer(3, EWRAM_BASE + 0x35400, EWRAM_BASE + 0x35800, PALRAM_SIZE / 2, 16);
    DMATransfer(3, EWRAM_BASE + 0x35600, EWRAM_BASE + 0x35A00, PALRAM_SIZE / 2, 16);
}

/**
 * @brief 5b390 | 6c | [Unused] Checks for the color fading status and transfer the results to Palram
 * 
 */
void CheckTransferFadedPalette_Unused(void)
{
    if (gColorFading.status == 0)
        return;

    if (gColorFading.status & COLOR_FADING_STATUS_ON_BG)
    {
        DMATransfer(3, EWRAM_BASE + 0x35000, PALRAM_BASE, PALRAM_SIZE / 2, 16);
        gColorFading.status &= ~COLOR_FADING_STATUS_ON_BG;
    }

    if (gColorFading.status & COLOR_FADING_STATUS_ON_OBJ)
    {
        DMATransfer(3, EWRAM_BASE + 0x35200, PALRAM_OBJ, PALRAM_SIZE / 2, 16);
        gColorFading.status &= ~COLOR_FADING_STATUS_ON_OBJ;
    }
}

/**
 * @brief 5b3fc | dc | Checks for the color fading status and transfer the results to Palram
 * 
 */
void CheckTransferFadedPalette(void)
{
    if (gGameModeSub1 == SUB_GAME_MODE_PLAYING)
    {
        if (gColorFading.status == 0)
            return;

        if (gColorFading.status & COLOR_FADING_STATUS_ON_BG)
        {
            DMATransfer(3, EWRAM_BASE + 0x35000, PALRAM_BASE, PALRAM_SIZE / 2, 16);
            gColorFading.status ^= COLOR_FADING_STATUS_ON_BG;
        }

        if (gColorFading.status & COLOR_FADING_STATUS_ON_OBJ)
        {
            DMATransfer(3, EWRAM_BASE + 0x35200 + 16 * 4, PALRAM_OBJ + 16 * 4, PALRAM_SIZE / 2 - 16 * 4, 16);
            gColorFading.status ^= COLOR_FADING_STATUS_ON_OBJ;
        }
    }
    else
    {
        if (gColorFading.status == 0)
            return;

        if (gColorFading.status & COLOR_FADING_STATUS_ON_BG)
        {
            DMATransfer(3, EWRAM_BASE + 0x35000, PALRAM_BASE, PALRAM_SIZE / 2, 16);
            gColorFading.status &= ~COLOR_FADING_STATUS_ON_BG;
        }

        if (gColorFading.status & COLOR_FADING_STATUS_ON_OBJ)
        {
            DMATransfer(3, EWRAM_BASE + 0x35200, PALRAM_OBJ, PALRAM_SIZE / 2, 16);
            gColorFading.status &= ~COLOR_FADING_STATUS_ON_OBJ;
        }
    }
}

/**
 * @brief 5b4d8 | ac | Calls the apply fading color function with the correct fading type and values
 * 
 * @param color Color
 */
void CallApplySpecialBackgroundFadingColor(u8 color)
{
    u8 type;
    u16* dst;
    u16* src;
    u16 mask;

    if (sColorFadingData[gColorFading.type].isWhite)
    {
        if (!gColorFading.unk_5)
            type = FADING_TYPE_FLASH;
        else
            type = FADING_TYPE_UNK;
    }
    else
    {
        if (!gColorFading.unk_5)
            type = FADING_TYPE_IN;
        else
            type = FADING_TYPE_OUT;
    }

    dst = EWRAM_BASE + 0x35000;
    src = EWRAM_BASE + 0x35400;
    mask = sColorFadingData[gColorFading.type].bgColorMask;
    ApplySpecialBackgroundFadingColor(type, color, &src, &dst, mask);

    dst = EWRAM_BASE + 0x35200;
    src = EWRAM_BASE + 0x35600;
    mask = sColorFadingData[gColorFading.type].objColorMask;
    ApplySpecialBackgroundFadingColor(type, color, &src, &dst, mask);

    gColorFading.status = COLOR_FADING_STATUS_ON_BG | COLOR_FADING_STATUS_ON_OBJ;
}

void PowerBombYellowTint(u8 paletteRow)
{

}

/**
 * @brief 5b624 | 68 | Applyes a monochrome effect to a palette
 * 
 * @param src Source address
 * @param dst Destination address
 * @param additionalValue Additional color
 */
void ApplyMonochromeToPalette(const u16* src, u16* dst, i8 additionalValue)
{
    i32 i;
    u16 color;
    i32 result;
    u16 r;
    u16 g;
    u16 b;

    i = 0;
    while (i <= UCHAR_MAX)
    {
        color = *src;

        r = RED(color);
        g = GREEN(color);
        BLUE(color, b);

        // Get average
        result = (r + g + b) / 3 + additionalValue;

        if (result < 0)
            result = 0;
        else if (result > COLOR_MASK)
            result = COLOR_MASK;
        
        // Create grey color
        *dst = COLOR(result, result, result);

        i++;
        src++;
        dst++;
    }
}

void ApplySmoothMonochromeToPalette(u16* srcBase, u16* srcMonochrome, u16* dst, u8 stage)
{
    // https://decomp.me/scratch/0RCjq

    i32 i;

    i32 colorMono;
    u16 monoR;
    u16 monoG;
    u16 monoB;

    i32 colorBase;
    u16 baseR;
    u16 baseG;
    u16 baseB;

    u8 newR;
    u8 newG;
    u8 newB;

    if (stage == 0)
        DMATransfer(3, srcBase, dst, 0x200, 0x10);
    else if (stage >= 0x1F)
        DMATransfer(3, srcMonochrome, dst, 0x200, 0x10);
    else
    {
        i = 0;
        while (i <= UCHAR_MAX)
        {
            colorMono = *srcMonochrome;
            monoR = RED(colorMono);
            monoG = (colorMono >> 5) & COLOR_MASK;
            monoB = (colorMono >> 10) & COLOR_MASK;
    
            colorBase = *srcBase;
            baseR = RED(colorBase);
            baseG = (colorBase >> 5) & COLOR_MASK;
            baseB = (colorBase >> 10) & COLOR_MASK;

            newR = (stage * (monoR - baseR) / 32);
            newG = (stage * (monoG - baseG) / 32);
            newB = (stage * (monoB - baseB) / 32);

            *dst = COLOR(newR, newG, newB);

            i++;
            srcBase++;
            dst++;
            srcMonochrome++;
        }
    }
}

void ApplySmoothPaletteTransition(u16* srcStart, u16* srcEnd, u16* dst, u8 stage)
{

}

void ApplySpecialBackgroundEffectColorOnBG(u16 mask, u16 color, u8 stage)
{

}

void ApplySpecialBackgroundEffectColorOnOBJ(u16 mask, u16 color, u8 stage)
{

}

void ApplySpecialBackgroundFadingColor(u8 type, u8 color, u16** ppSrc, u16** ppDst, u16 mask)
{

}

u16 ApplyFadeOnColor(u8 type, u16 color, u8 currentColor)
{
    // https://decomp.me/scratch/RdwBt

    i32 red;
    i32 green;
    i32 b;

    red = RED(color);
    green = GREEN(color);
    BLUE(color, b);

    switch (type)
    {
        case FADING_TYPE_IN:
            red = (currentColor * red) >> 5 & COLOR_MASK;
            green = (currentColor * green) >> 5 & COLOR_MASK;
            b = (currentColor * b) >> 5 & COLOR_MASK;
            break;

        case FADING_TYPE_FLASH:
            red = (COLOR_MASK - ((currentColor * (COLOR_MASK - red)) >> 5)) & COLOR_MASK;
            green = (COLOR_MASK - ((currentColor * (COLOR_MASK - green)) >> 5)) & COLOR_MASK;
            b = (COLOR_MASK - ((currentColor * (COLOR_MASK - b)) >> 5)) & COLOR_MASK;
            break;

        case FADING_TYPE_OUT:
            red = (red - ((currentColor * red) >> 5)) & COLOR_MASK;
            green = (green - ((currentColor * green) >> 5)) & COLOR_MASK;
            b =( b - ((currentColor * b) >> 5) )& COLOR_MASK;
            break;

        case FADING_TYPE_UNK:
            red = (red + ((currentColor * (COLOR_MASK - red)) >> 5)) & COLOR_MASK;
            green = (green + ((currentColor * (COLOR_MASK - green)) >> 5)) & COLOR_MASK;
            b = (b + ((currentColor * (COLOR_MASK - b)) >> 5)) & COLOR_MASK;
            break;
    }

    return COLOR(red, green, b);
}
