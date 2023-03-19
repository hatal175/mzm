#include "data/samus/samus_graphics.h"
#include "data/samus/samus_empty_data.h"
#include "oam.h"

#if 0

#define SAMUS_ANIM_TERMINATOR \
{							  \
	.pTopGfx = NULL,		  \
	.pBottomGfx = NULL,		  \
	.pOam = NULL,			  \
	.timer = 0,				  \
}

#define SAMUS_EFFECT_ANIM_TERMINATOR \
{							  		 \
	.pGraphics = NULL,		  		 \
	.pOam = NULL,			  		 \
	.timer = 0,				  		 \
}

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Running_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Running_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Running_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Frame4.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Running_Frame4[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Frame5[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Frame5.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Running_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Running_Frame5.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Frame6[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Frame6.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Running_Frame6[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Running_Frame6.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Frame7[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Frame7.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Running_Frame7[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Running_Frame7.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Frame8[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Frame8.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Running_Frame8[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Running_Frame8.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Frame9[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Frame9.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Running_Frame9[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Running_Frame9.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Frame5.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Frame6[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Frame6.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Frame7[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Frame7.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Frame8[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Frame8.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Frame9[SAMUS_GFX_SIZE(7, 4)] = {
	7, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Frame9.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Frame5.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame6[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Frame6.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame7[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Frame7.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame8[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Frame8.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame9[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Frame9.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalUp_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalDown_Running_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Standing_Frame0[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Standing_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Forward_Running_Frame2[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Forward_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Forward_Running_Frame6[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Forward_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Forward_Running_Frame7[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Forward_Running_Frame7.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Forward_Running_Frame8[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Forward_Running_Frame8.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Forward_Running_Frame9[SAMUS_GFX_SIZE(5, 2)] = {
	5, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Forward_Running_Frame9.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalUp_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalDown_Running_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Standing_Frame0[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Standing_Frame1[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Standing_Frame2[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Standing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Standing_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_Shooting_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DiagonalUp_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Standing_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalUp_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DiagonalUp_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Standing_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalUp_Standing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DiagonalUp_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_DiagonalUp_Shooting_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DiagonalUp_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DiagonalDown_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Standing_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalDown_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DiagonalDown_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Standing_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalDown_Standing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DiagonalDown_Standing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DiagonalDown_Shooting_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DiagonalDown_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Up_Standing_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Up_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Up_Standing_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Up_Standing_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Up_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Up_Standing_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Up_Standing_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Up_Standing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Up_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Up_Standing_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Standing_Frame1[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Standing_Frame2[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Standing_Frame1[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalUp_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Standing_Frame2[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalUp_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Standing_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalDown_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Standing_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalDown_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Up_Standing_Frame0[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Up_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Up_Standing_Frame1[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Up_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Up_Standing_Frame2[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Up_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Crouching_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Crouching_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Crouching_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Crouching_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Crouching_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Crouching_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Crouching_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Crouching_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Crouching_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Crouching_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Crouching_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Crouching_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_ShootingAndCrouching_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_ShootingAndCrouching_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Crouching_Frame0[SAMUS_GFX_SIZE(3, 3)] = {
	3, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Crouching_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Crouching_Frame1[SAMUS_GFX_SIZE(3, 3)] = {
	3, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Crouching_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Crouching_Frame2[SAMUS_GFX_SIZE(3, 3)] = {
	3, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Crouching_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_GettingKnockedBack_Frame0[SAMUS_GFX_SIZE(11, 10)] = {
	11, 10,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_GettingKnockedBack_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_GettingKnockedBack_Frame1[SAMUS_GFX_SIZE(12, 10)] = {
	12, 10,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_GettingKnockedBack_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_GettingKnockedBack_Frame0[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_GettingKnockedBack_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_GettingKnockedBack_Frame1[SAMUS_GFX_SIZE(11, 8)] = {
	11, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_GettingKnockedBack_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Speedboosting_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Running_Speedboosting_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Speedboosting_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Speedboosting_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Speedboosting_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Speedboosting_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Speedboosting_Frame3.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Speedboosting_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Speedboosting_Frame4.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Speedboosting_Frame5[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Speedboosting_Frame5.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Speedboosting_Frame6[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Speedboosting_Frame6.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Speedboosting_Frame7[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Speedboosting_Frame7.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Speedboosting_Frame8[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Speedboosting_Frame8.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Running_Speedboosting_Frame9[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Running_Speedboosting_Frame9.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Speedboosting_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Speedboosting_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Speedboosting_Frame3.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Speedboosting_Frame4.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Speedboosting_Frame5.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame6[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Speedboosting_Frame6.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame7[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Speedboosting_Frame7.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame8[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Speedboosting_Frame8.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame9[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Forward_Running_Speedboosting_Frame9.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalUp_Running_Speedboosting_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalDown_Running_Speedboosting_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Speedboosting_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Speedboosting_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Speedboosting_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Speedboosting_Frame3.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Speedboosting_Frame4.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Speedboosting_Frame5.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame6[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Speedboosting_Frame6.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame7[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Speedboosting_Frame7.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame8[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Speedboosting_Frame8.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame9[SAMUS_GFX_SIZE(7, 4)] = {
	7, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Running_Speedboosting_Frame9.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Forward_Running_Speedboosting_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame2[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Forward_Running_Speedboosting_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame6[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Forward_Running_Speedboosting_Frame6.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame7[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Forward_Running_Speedboosting_Frame7.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame8[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Forward_Running_Speedboosting_Frame8.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame9[SAMUS_GFX_SIZE(5, 2)] = {
	5, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Forward_Running_Speedboosting_Frame9.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalUp_Running_Speedboosting_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalDown_Running_Speedboosting_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Skidding_Frame0[SAMUS_GFX_SIZE(12, 10)] = {
	12, 10,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Skidding_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Skidding_Frame1[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Skidding_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Skidding_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Skidding_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Skidding_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_Skidding_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Armed_Skidding_Frame0[SAMUS_GFX_SIZE(12, 10)] = {
	12, 10,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Armed_Skidding_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Armed_Skidding_Frame1[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Armed_Skidding_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Armed_Skidding_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Armed_Skidding_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Skidding_Frame0[SAMUS_GFX_SIZE(14, 12)] = {
	14, 12,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Skidding_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Skidding_Frame1[SAMUS_GFX_SIZE(12, 10)] = {
	12, 10,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Skidding_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Skidding_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Skidding_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Armed_Skidding_Frame0[SAMUS_GFX_SIZE(14, 12)] = {
	14, 12,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Armed_Skidding_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Armed_Skidding_Frame1[SAMUS_GFX_SIZE(12, 10)] = {
	12, 10,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Armed_Skidding_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Armed_Skidding_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Armed_Skidding_Frame2.gfx")
};


const u16 sSamusOam_PowerSuit_Left_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_PowerSuit_Left_Running_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdb, OBJ_SIZE_16x16 | 0x1f1, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	OBJ_SHAPE_VERTICAL | 0xdc, 0x1fe, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f1, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xde, OBJ_SIZE_16x16 | 0x1f5, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Frame4[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a,
	0xe0, OBJ_SIZE_16x16 | 0x1f7, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16,
	OBJ_SHAPE_HORIZONTAL | 0xe7, 0x1fb, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe3, 0x1f7, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdb, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18,
	0xdc, OBJ_SIZE_16x16 | 0x1ee, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f1, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1f7, 0x4
};


const u16 sSamusOam_PowerSuit_Right_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_PowerSuit_Right_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd9, OBJ_SIZE_16x16 | 0x1ff, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	OBJ_SHAPE_VERTICAL | 0xda, 0x1f8, 0x4
};

const u16 sSamusOam_PowerSuit_Right_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Right_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_PowerSuit_Right_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_PowerSuit_Right_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe3, 0x1fd, 0x4
};

const u16 sSamusOam_PowerSuit_Right_Running_Frame7[OAM_DATA_SIZE(7)] = {
	0x7,
	0xde, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xd6, 0x1fa, 0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18,
	0xdf, OBJ_SIZE_16x16 | 0x2, 0x4
};

const u16 sSamusOam_PowerSuit_Right_Running_Frame8[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f8, 0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xde, OBJ_SIZE_16x16 | 0x0, 0x4
};

const u16 sSamusOam_PowerSuit_Right_Running_Frame9[OAM_DATA_SIZE(7)] = {
	0x7,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f9, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a,
	0xe4, 0x1, 0x6
};


const u16 sSamusOam_PowerSuit_Left_Forward_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f1, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f1, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a
};


const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a
};


const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a
};


const u16 sSamusOam_PowerSuit_Right_Forward_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fa, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1fb, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1fc, 0x3,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	OBJ_SHAPE_VERTICAL | 0xda, 0x1f8, 0x2
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1fd, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1fb, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fa, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1fa, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe3, 0x1fd, 0x4
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1fb, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18,
	0xdf, OBJ_SIZE_16x16 | 0x2, 0x2
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1fc, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xde, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1fb, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a,
	0xe4, 0x1, 0x4
};


const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1fa, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1fb, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdc, 0x1fc, 0x2,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1fd, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1fb, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1fa, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1fa, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdc, 0x1fb, 0x2,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdc, 0x1fc, 0x2,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1fb, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a
};


const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a
};


const u16 sSamusOam_PowerSuit_Left_Standing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, 0x1f1, 0x4,
	0xde, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_Shooting_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, 0x1f1, 0x4,
	0xde, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_Shooting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, 0x1f2, 0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Left_Up_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd6, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_Up_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd6, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_Up_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Right_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fa, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fa, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f9, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1f9, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1f9, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f8, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Right_Up_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f9, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_Up_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f9, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_Up_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f9, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Left_Crouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe9, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe9, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe9, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Crouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe5, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe5, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe6, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe6, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe6, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Crouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe7, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Right_Crouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x1fb, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x1fb, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x1fa, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Crouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f9, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f9, 0x2,
	0xe6, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1f8, 0x2,
	0xe6, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Crouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe9, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe9, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Left_GettingKnockedBack_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe1, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe8, OBJ_SIZE_16x16 | 0x1fb, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f3, 0x6,
	0xe1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f0, 0x8,
	0xe1, OBJ_X_FLIP | 0x0, 0xa
};

const u16 sSamusOam_PowerSuit_Left_GettingKnockedBack_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe2, OBJ_SIZE_16x16 | 0x1f7, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1eb, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1fb, 0x6,
	0xe6, 0x1f3, 0xa,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f2, 0x8,
	0xe2, OBJ_X_FLIP | 0x2, 0xb
};


const u16 sSamusOam_PowerSuit_Right_GettingKnockedBack_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe1, OBJ_SIZE_16x16 | 0x0, 0x0,
	0xe1, 0x1f8, 0x8,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x4,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fd, 0x6,
	0xe2, 0x3, 0x9
};

const u16 sSamusOam_PowerSuit_Right_GettingKnockedBack_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe2, OBJ_SIZE_16x16 | 0x1fe, 0x4,
	0xe2, 0x1f6, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f5, 0x0,
	0xde, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x6,
	0xe6, OBJ_X_FLIP | 0x5, 0x9,
	0xe2, 0x4, 0xa
};


const u16 sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	0xe0, OBJ_SIZE_16x16 | 0x1f5, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1ef, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	OBJ_SHAPE_VERTICAL | 0xde, 0x1fd, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1ef, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xe0, OBJ_SIZE_16x16 | 0x1f3, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame4[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a,
	0xe2, OBJ_SIZE_16x16 | 0x1f5, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f9, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe5, 0x1f5, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18,
	0xde, OBJ_SIZE_16x16 | 0x1ec, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1ef, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a,
	OBJ_SHAPE_HORIZONTAL | 0xe6, 0x1f5, 0x4
};


const u16 sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1ef, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1ef, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14
};

const u16 sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a
};


const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xda, OBJ_SIZE_16x16 | 0x1f1, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xda, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f1, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a
};


const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f1, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f1, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a
};


const u16 sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1fe, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdb, OBJ_SIZE_16x16 | 0x1, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	OBJ_SHAPE_VERTICAL | 0xdc, 0x1fa, 0x4
};

const u16 sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x2, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fd, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1fe, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe5, 0x1ff, 0x4
};

const u16 sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame7[OAM_DATA_SIZE(7)] = {
	0x7,
	0xe0, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd8, 0x1fc, 0x6,
	0xda, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18,
	0xe1, OBJ_SIZE_16x16 | 0x4, 0x4
};

const u16 sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame8[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdb, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xeb, 0x1fa, 0x6,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x2, 0x4
};

const u16 sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame9[OAM_DATA_SIZE(7)] = {
	0x7,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xeb, 0x1fb, 0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a,
	0xe6, 0x3, 0x6
};


const u16 sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1fc, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fd, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fe, 0x3,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	OBJ_SHAPE_VERTICAL | 0xdc, 0x1fa, 0x2
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1ff, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fd, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1fc, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fc, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe5, 0x1ff, 0x4
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fd, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18,
	0xe1, OBJ_SIZE_16x16 | 0x4, 0x2
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fe, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x2, 0x2
};

const u16 sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fd, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a,
	0xe6, 0x3, 0x4
};


const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fc, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fd, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1fe, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1ff, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fd, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fc, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fc, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1fd, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1fe, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fd, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a
};


const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1fe, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1ff, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fd, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fe, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a
};


const u16 sSamusOam_PowerSuit_Left_Skidding_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe2, OBJ_SIZE_16x16 | 0x1ff, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1fe, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, 0xa,
	0xe7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x8
};

const u16 sSamusOam_PowerSuit_Left_Skidding_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe8, OBJ_SIZE_16x16 | 0x1f9, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f9, 0x8,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f2, 0x6
};

const u16 sSamusOam_PowerSuit_Left_Skidding_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f1, 0x4
};

const u16 sSamusOam_PowerSuit_Left_Armed_Skidding_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f1, 0x4
};


const u16 sSamusOam_PowerSuit_Right_Skidding_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe7, OBJ_SIZE_16x16 | 0x1f0, 0x4,
	0xe2, OBJ_SIZE_16x16 | 0x1ef, 0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1f2, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1f8, 0xc,
	0xe3, OBJ_SIZE_16x16 | 0x1f7, 0xa
};

const u16 sSamusOam_PowerSuit_Right_Skidding_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe3, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x4,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1f7, 0xa,
	0xe4, OBJ_SIZE_16x16 | 0x1fd, 0x8
};

const u16 sSamusOam_PowerSuit_Right_Skidding_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe5, OBJ_SIZE_16x16 | 0x1ff, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};


const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Running[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Running_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Running_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Running_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Running_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Running_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Running_Frame3,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_Running_Frame3,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Running_Frame4,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_Running_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Running_Frame5,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Left_Running_Frame5,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Running_Frame6,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Left_Running_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Running_Frame7,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Left_Running_Frame7,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Running_Frame8,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Left_Running_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Running_Frame9,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Left_Running_Frame9,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Running[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Running_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Running_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Running_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Frame3,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_Running_Frame3,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Frame4,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_Running_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Frame5,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Right_Running_Frame5,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Frame6,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Right_Running_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Frame7,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Right_Running_Frame7,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Frame8,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Right_Running_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Frame9,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Right_Running_Frame9,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Forward_Running[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Running_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame3,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Frame3,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame4,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame5,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Frame5,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame6,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame7,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Frame7,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame8,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Frame9,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Frame9,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_Running[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame3,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame5,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame7,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Frame9,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_Running[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame3,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame5,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame7,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Frame9,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Forward_Running[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Forward_Running_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Frame3,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Frame5,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Forward_Running_Frame6,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Forward_Running_Frame7,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Frame7,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Forward_Running_Frame8,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Forward_Running_Frame9,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Frame9,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_Running[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame3,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame5,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame7,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame9,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_Running[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Running_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame3,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Right_Running_Frame5,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame7,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Frame9,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Standing[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Standing_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Standing_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Standing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Standing_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Standing_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_Standing[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Standing_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Standing_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Standing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Standing_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Standing_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_Standing[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Standing_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Standing_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Standing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Standing_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Standing_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Up_Standing[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Up_Standing_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Up_Standing_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_Standing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Up_Standing_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Up_Standing_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Shooting[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Shooting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Shooting_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Standing_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_Shooting[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Shooting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Shooting_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Standing_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_Shooting[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Shooting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Shooting_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Standing_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Up_Shooting[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Up_Shooting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Up_Shooting_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Up_Standing_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Standing[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Standing_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Standing_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Standing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Standing_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Standing_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_Standing[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Standing_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Standing_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Standing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Standing_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Standing_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_Standing[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Standing_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Standing_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Standing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Standing_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Standing_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Up_Standing[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Up_Standing_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Up_Standing_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_Standing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Up_Standing_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Up_Standing_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Shooting[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Shooting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Shooting_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Standing_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_Shooting[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Shooting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Shooting_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalUp_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Standing_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_Shooting[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Shooting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Shooting_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DiagonalDown_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Standing_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Up_Shooting[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Up_Shooting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Up_Shooting_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_Standing_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Up_Standing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Up_Standing_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Crouching[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Crouching_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Crouching_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Crouching_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Crouching_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Crouching_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Crouching_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Crouching_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Crouching_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_Crouching[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Crouching_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Crouching_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Standing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Crouching_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Crouching_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_Crouching[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Crouching_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Crouching_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Standing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Crouching_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Crouching_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Crouching_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_ShootingAndCrouching_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Crouching_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_ShootingAndCrouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_ShootingAndCrouching_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Crouching_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Crouching_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_ShootingAndCrouching_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_ShootingAndCrouching_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Crouching_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_ShootingAndCrouching_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_ShootingAndCrouching_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Crouching_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Crouching[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Crouching_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Crouching_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Crouching_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Crouching_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Crouching_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Crouching_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Crouching_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Crouching_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_Crouching[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Crouching_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Crouching_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Standing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Crouching_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Crouching_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_Crouching[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Crouching_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Crouching_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Standing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Crouching_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Standing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Crouching_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Crouching_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_ShootingAndCrouching_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Crouching_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_ShootingAndCrouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_ShootingAndCrouching_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Crouching_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Crouching_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_ShootingAndCrouching_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_ShootingAndCrouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_ShootingAndCrouching_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Crouching_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_ShootingAndCrouching_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_ShootingAndCrouching_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_ShootingAndCrouching_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Crouching_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Crouching_Frame0,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_GettingKnockedBack[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_GettingKnockedBack_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_GettingKnockedBack_Frame0,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_GettingKnockedBack_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_GettingKnockedBack_Frame1,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_GettingKnockedBack_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_GettingKnockedBack_Frame0,
		.timer = 3,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_GettingKnockedBack[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_GettingKnockedBack_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_GettingKnockedBack_Frame0,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_GettingKnockedBack_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_GettingKnockedBack_Frame1,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_GettingKnockedBack_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_GettingKnockedBack_Frame0,
		.timer = 3,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame1,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame3,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame3,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame4,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame5,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame5,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame6,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame7,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame7,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame8,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame9,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame9,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Forward_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame1,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame3,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame3,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame4,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame5,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame5,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame6,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame7,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame7,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame8,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Forward_Running_Speedboosting_Frame9,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Left_Forward_Running_Speedboosting_Frame9,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame1,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame3,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame5,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame7,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Running_Speedboosting_Frame9,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Running_Speedboosting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame1,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame3,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame5,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame7,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Running_Speedboosting_Frame9,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame1,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame3,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame3,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame4,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame5,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame5,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame6,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame7,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame7,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame8,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame9,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame9,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Forward_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame1,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame3,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame3,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame4,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Running_Speedboosting_Frame5,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame5,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame6,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame7,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame7,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame8,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Forward_Running_Speedboosting_Frame9,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Right_Forward_Running_Speedboosting_Frame9,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame1,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame3,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame5,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame7,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Running_Speedboosting_Frame9,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame1,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame3,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame4,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame5,
		.pOam = sSamusOam_PowerSuit_Right_Running_Speedboosting_Frame5,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame6,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame6,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame7,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame7,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame8,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame8,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Running_Frame9,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Running_Speedboosting_Frame9,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Skidding[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Skidding_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Skidding_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Skidding_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Skidding_Frame1,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Skidding_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Skidding_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Skidding_Frame2,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Armed_Skidding[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Armed_Skidding_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Skidding_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Armed_Skidding_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Skidding_Frame1,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Armed_Skidding_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Skidding_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Armed_Skidding_Frame2,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Skidding[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Skidding_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_Skidding_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Skidding_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_Skidding_Frame1,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Skidding_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Skidding_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Skidding_Frame2,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Armed_Skidding[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Armed_Skidding_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_Skidding_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Armed_Skidding_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_Skidding_Frame1,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Armed_Skidding_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Skidding_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Skidding_Frame2,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const u8 sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DelayBeforeShinesparking_Frame0.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_MidAir_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_MidAir_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_MidAir_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_MidAir_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_MidAir_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_MidAir_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_MidAir_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_MidAir_Frame4.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_Landing_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Landing_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_None_Landing_Frame1[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_None_Landing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_Landing_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_None_Landing_Frame2[SAMUS_GFX_SIZE(7, 4)] = {
	7, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_None_Landing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_Landing_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Landing_Frame1[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Landing_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalUp_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalUp_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalDown_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalDown_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Up_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Up_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Down_MidAir_Frame0[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Down_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_Down_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_Down_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_Down_MidAir_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_Down_MidAir_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_DelayBeforeShinesparking_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_None_Landing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_None_Landing_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_None_Landing_Frame2[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_None_Landing_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_MidAir_Frame0[SAMUS_GFX_SIZE(3, 3)] = {
	3, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Landing_Frame1[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Landing_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalUp_MidAir_Frame0[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalUp_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalDown_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalDown_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Up_MidAir_Frame0[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Up_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Down_MidAir_Frame0[SAMUS_GFX_SIZE(3, 3)] = {
	3, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Down_MidAir_Frame0.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_Right_Down_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Right_Down_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Right_Down_MidAir_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Right_Down_MidAir_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_StartingSpinJump_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_StartingSpinJump_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Spinning_Frame0[SAMUS_GFX_SIZE(6, 3)] = {
	6, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Spinning_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Spinning_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Spinning_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Spinning_Frame2[SAMUS_GFX_SIZE(6, 3)] = {
	6, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Spinning_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Spinning_Frame3[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Spinning_Frame3.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_StartingSpinJump_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_StartingSpinJump_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Spinning_Frame0[SAMUS_GFX_SIZE(6, 3)] = {
	6, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Spinning_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Spinning_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Spinning_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Spinning_Frame2[SAMUS_GFX_SIZE(6, 3)] = {
	6, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Spinning_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Spinning_Frame3[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Spinning_Frame3.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_DelayBeforeShinepsarking_Frame3[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DelayBeforeShinepsarking_Frame3.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_StartingWallJump_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_StartingWallJump_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_StartingWallJump_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_StartingWallJump_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_StartingWallJump_Frame2[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_StartingWallJump_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_StartingWallJump_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_StartingWallJump_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_StartingWallJump_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_StartingWallJump_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_StartingWallJump_Frame2[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_StartingWallJump_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Shinesparking_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Shinesparking_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Shinesparking_Frame5[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Shinesparking_Frame5.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Shinesparking_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Shinesparking_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Shinesparking_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Shinesparking_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Shinesparking_Frame4[SAMUS_GFX_SIZE(7, 7)] = {
	7, 7,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Shinesparking_Frame4.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Shinesparking_Frame3[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Shinesparking_Frame3.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Shinesparking_Frame2[SAMUS_GFX_SIZE(7, 7)] = {
	7, 7,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Shinesparking_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Shinesparking_Frame8[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Shinesparking_Frame8.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Shinesparking_Frame7[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Shinesparking_Frame7.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Shinesparking_Frame6[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Shinesparking_Frame6.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Sidewards_Shinesparking_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Sidewards_Shinesparking_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Sidewards_Shinesparking_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Sidewards_Shinesparking_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Sidewards_Shinesparking_Frame3[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Sidewards_Shinesparking_Frame3.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Sidewards_Shinesparking_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Sidewards_Shinesparking_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Sidewards_Shinesparking_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Sidewards_Shinesparking_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Sidewards_Shinesparking_Frame3[SAMUS_GFX_SIZE(9, 9)] = {
	9, 9,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Sidewards_Shinesparking_Frame3.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_SpaceJumping_Frame0[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SpaceJumping_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_SpaceJumping_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SpaceJumping_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_SpaceJumping_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SpaceJumping_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_SpaceJumping_Frame3[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SpaceJumping_Frame3.gfx")
};


const u16 sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	0xe1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x4
};

const u16 sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x4
};


const u16 sSamusOam_PowerSuit_Left_None_Landing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe9, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xee, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x4
};

const u16 sSamusOam_PowerSuit_Left_None_Landing_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe6, 0x1f2, 0x6,
	0xe6, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18,
	0xe7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f2, 0x4
};

const u16 sSamusOam_PowerSuit_Left_None_Landing_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe1, 0x1f1, 0x6,
	0xe1, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1ee, 0x4
};


const u16 sSamusOam_PowerSuit_Left_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_PowerSuit_Left_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_PowerSuit_Left_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe9, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_Landing_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe6, 0x1f2, 0x4,
	0xe6, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_Landing_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, 0x1f1, 0x4,
	0xe1, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};


const u16 sSamusOam_PowerSuit_Left_DiagonalUp_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe5, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe2, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};


const u16 sSamusOam_PowerSuit_Left_DiagonalDown_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe5, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};


const u16 sSamusOam_PowerSuit_Left_Up_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd3, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_PowerSuit_Left_Up_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd4, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_PowerSuit_Left_Up_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe0, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Left_Up_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Left_Up_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};


const u16 sSamusOam_PowerSuit_Left_Down_MidAir_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xf0, 0x1f7, 0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe1, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf1, OBJ_SIZE_16x16 | 0x1fc, 0x16
};


const u16 sSamusOam_PowerSuit_DelayBeforeShinesparking_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x4,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_PowerSuit_DelayBeforeShinesparking_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe2, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f6, 0x4,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_PowerSuit_Right_None_Landing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xee, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xea, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f6, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_None_Landing_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe7, OBJ_SIZE_16x16 | 0x1fe, 0x0,
	0xe6, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1f6, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Right_None_Landing_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x2, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1fa, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};


const u16 sSamusOam_PowerSuit_Right_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_VERTICAL | 0xdc, 0x1fa, 0x2,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_PowerSuit_Right_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_VERTICAL | 0xdd, 0x1fa, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_PowerSuit_Right_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x1fa, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe7, 0x1f9, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Right_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1fa, 0x2,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};


const u16 sSamusOam_PowerSuit_Right_DiagonalUp_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdc, 0x1f9, 0x2,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1f9, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f9, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe6, 0x1f9, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalUp_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1fa, 0x2,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};


const u16 sSamusOam_PowerSuit_Right_DiagonalDown_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe6, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe1, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};


const u16 sSamusOam_PowerSuit_Right_Down_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x1fe, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe1, OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf1, OBJ_SIZE_16x16 | 0x1f4, 0x16
};


const u16 sSamusOam_PowerSuit_StartingSpinJump_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x4, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x5
};


const u16 sSamusOam_PowerSuit_Spinning_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1f5, 0x3,
	0xf3, 0x5, 0x5
};

const u16 sSamusOam_PowerSuit_Spinning_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f8, 0x4
};

const u16 sSamusOam_PowerSuit_Spinning_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1f3, 0x3,
	0xf3, 0x3, 0x5
};


const u16 sSamusOam_PowerSuit_Left_Spinning_Frame3[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x1f0, 0x4
};


const u16 sSamusOam_PowerSuit_Spinning_Frame6[OAM_DATA_SIZE(4)] = {
	0x4,
	0xed, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_VERTICAL | 0xed, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe5, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fb, 0x3,
	0xe5, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f3, 0x5
};

const u16 sSamusOam_PowerSuit_Spinning_Frame5[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f8, 0x4
};

const u16 sSamusOam_PowerSuit_Spinning_Frame4[OAM_DATA_SIZE(4)] = {
	0x4,
	0xed, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1fd, 0x0,
	OBJ_SHAPE_VERTICAL | 0xed, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe5, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fd, 0x3,
	0xe5, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f5, 0x5
};


const u16 sSamusOam_PowerSuit_Left_ScrewAttacking_Frame7[OAM_DATA_SIZE(3)] = {
	0x3,
	0xf0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, OBJ_X_FLIP | OBJ_Y_FLIP | 0x8, 0x4
};


const u16 sSamusOam_PowerSuit_Spinning_Frame3[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x8, 0x4
};

const u16 sSamusOam_PowerSuit_Spinning_Frame7[OAM_DATA_SIZE(3)] = {
	0x3,
	0xf0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f0, 0x4
};


const u16 sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xeb, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xfb, 0x1f7, 0x16,
	0xe9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x4
};

const u16 sSamusOam_PowerSuit_Right_DelayBeforeShinesparking_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe9, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x4,
	0xeb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xfb, OBJ_X_FLIP | 0x1f9, 0x16
};


const u16 sSamusOam_PowerSuit_Right_StartingWallJump_Frame2[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x3
};

const u16 sSamusOam_PowerSuit_Left_StartingWallJump_Frame2[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1fc, 0x3
};


const u16 sSamusOam_PowerSuit_Shinesparking_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xd4, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x4
};

const u16 sSamusOam_PowerSuit_Shinesparking_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd3, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd3, 0x4, 0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x4, 0x5,
	OBJ_SHAPE_VERTICAL | 0xf3, 0x1fc, 0x6
};

const u16 sSamusOam_PowerSuit_Shinesparking_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd1, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd1, 0x3, 0x6,
	0xe1, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x3, 0x7,
	0xf1, OBJ_SIZE_16x16 | 0x1fb, 0x4
};

const u16 sSamusOam_PowerSuit_Shinesparking_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd3, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd3, 0x4, 0x6,
	0xe3, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x4, 0x7,
	0xf3, OBJ_SIZE_16x16 | 0x1fc, 0x4
};

const u16 sSamusOam_PowerSuit_Shinesparking_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd1, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd1, 0x4, 0x6,
	0xe1, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x4, 0x7,
	0xf1, OBJ_SIZE_16x16 | 0x1f4, 0x4
};

const u16 sSamusOam_PowerSuit_Shinesparking_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd3, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd3, 0x4, 0x6,
	0xe3, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x4, 0x7,
	0xf3, OBJ_SIZE_16x16 | 0x1f4, 0x4
};


const u16 sSamusOam_PowerSuit_SpaceJumping_Frame0[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x4
};


const u16 sSamusOam_PowerSuit_Left_Sidewards_Shinesparking_Frame2[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1eb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x16 | 0x1f3, 0x4
};

const u16 sSamusOam_PowerSuit_Right_Sidewards_Shinesparking_Frame2[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x16 | 0x1ed, 0x4
};

const u16 sSamusOam_PowerSuit_Right_Sidewards_Shinesparking_Frame3[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x16 | 0x1ed, 0x4,
	OBJ_SHAPE_VERTICAL | 0xf2, 0xd, 0x8
};


const u16 sSamusOam_PowerSuit_Left_SpaceJumping_Frame4[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x4
};

const u16 sSamusOam_PowerSuit_Right_SpaceJumping_Frame0[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x4
};

const u16 sSamusOam_PowerSuit_Right_SpaceJumping_Frame4[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x4
};


const struct SamusAnimationData sSamusAnim_PowerSuit_Left_None_MidAir[6] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame1,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_None_Landing[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Landing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_None_Landing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusOam_PowerSuit_Left_None_Landing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_None_Landing_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusOam_PowerSuit_Left_None_Landing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_None_Landing_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_MidAir[6] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_MidAir_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_MidAir_Frame1,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_MidAir_Frame0,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_MidAir_Frame0,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_MidAir_Frame0,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Landing[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Landing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Landing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Landing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Landing_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Landing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Landing_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_MidAir[6] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_MidAir_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_MidAir_Frame1,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_MidAir_Frame0,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_MidAir_Frame0,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_MidAir_Frame0,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_Landing[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Landing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Landing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Landing_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalUp_Landing_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_MidAir[6] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_MidAir_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_MidAir_Frame1,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_MidAir_Frame0,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_MidAir_Frame0,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_MidAir_Frame0,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_Landing[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Landing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Landing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Landing_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DiagonalDown_Landing_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Up_MidAir[6] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Up_MidAir_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Up_MidAir_Frame1,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Up_MidAir_Frame0,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_Up_MidAir_Frame0,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_Up_MidAir_Frame0,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Up_Landing[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Landing_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Up_Landing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Up_Landing_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Up_Landing_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Down_MidAir[6] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Down_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_Down_MidAir_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Down_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_Down_MidAir_Frame0,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Down_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_Down_MidAir_Frame0,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Down_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_Down_MidAir_Frame0,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Down_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame4,
		.pOam = sSamusOam_PowerSuit_Left_Down_MidAir_Frame0,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_None_MidAir[6] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_DelayBeforeShinesparking_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_DelayBeforeShinesparking_Frame1,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_DelayBeforeShinesparking_Frame0,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame3,
		.pOam = sSamusOam_PowerSuit_DelayBeforeShinesparking_Frame0,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame4,
		.pOam = sSamusOam_PowerSuit_DelayBeforeShinesparking_Frame0,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_None_Landing[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Landing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_None_Landing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_None_Landing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_None_Landing_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_None_Landing_Frame2,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_None_Landing_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_MidAir[6] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_MidAir_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_MidAir_Frame1,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_MidAir_Frame0,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_MidAir_Frame0,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_MidAir_Frame0,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Landing[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Landing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Landing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Landing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Landing_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Landing_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Landing_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_MidAir[6] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_MidAir_Frame1,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_Landing[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Landing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Landing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Landing_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Landing_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_MidAir[6] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_MidAir_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_MidAir_Frame1,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_MidAir_Frame0,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_MidAir_Frame0,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_MidAir_Frame0,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_Landing[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Landing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Landing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Landing_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_DiagonalDown_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalDown_Landing_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Up_MidAir[6] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_MidAir_Frame1,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_MidAir_Frame0,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Up_Landing[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Landing_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Landing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Landing_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Up_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_Left_Landing_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_DiagonalUp_Landing_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Down_MidAir[6] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Down_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Right_Down_MidAir_Frame0,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Down_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_Right_Down_MidAir_Frame0,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Down_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_Right_Down_MidAir_Frame0,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Down_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_Down_MidAir_Frame0,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Down_MidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame4,
		.pOam = sSamusOam_PowerSuit_Right_Down_MidAir_Frame0,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Spinning[9] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame1,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Spinning_Frame3,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame6,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame5,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame4,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_ScrewAttacking_Frame7,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Spinning[9] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame1,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame2,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Spinning_Frame3,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame6,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame5,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame4,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_ScrewAttacking_Frame7,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_StartingSpinJump[2] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_StartingSpinJump_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_StartingSpinJump_Frame0,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_StartingSpinJump[2] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_StartingSpinJump_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_StartingSpinJump_Frame0,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DelayBeforeShinesparking[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DelayBeforeShinepsarking_Frame3,
		.pOam = sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame3,
		.timer = 6,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DelayBeforeShinesparking[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_DelayBeforeShinesparking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame1,
		.pOam = sSamusOam_PowerSuit_DelayBeforeShinesparking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_MidAir_Frame2,
		.pOam = sSamusOam_PowerSuit_DelayBeforeShinesparking_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_DelayBeforeShinepsarking_Frame3,
		.pOam = sSamusOam_PowerSuit_Right_DelayBeforeShinesparking_Frame3,
		.timer = 6,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DelayAfterShinesparking[13] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_StartingSpinJump_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_StartingSpinJump_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame2,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame1,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame0,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Spinning_Frame3,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame6,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame5,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame4,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_ScrewAttacking_Frame7,
		.timer = 1,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_StartingSpinJump_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_StartingSpinJump_Frame0,
		.timer = 2,
	},
	[10] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.timer = 2,
	},
	[11] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_DelayBeforeShinesparking_Frame0,
		.timer = 6,
	},
	[12] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DelayAfterShinesparking[13] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_StartingSpinJump_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_StartingSpinJump_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame2,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame1,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame0,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Spinning_Frame3,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame6,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame5,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame4,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame7,
		.timer = 1,
	},
	[9] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_StartingSpinJump_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_StartingSpinJump_Frame0,
		.timer = 2,
	},
	[10] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_DelayBeforeShinesparking_Frame0,
		.timer = 2,
	},
	[11] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DelayBeforeShinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_DelayBeforeShinesparking_Frame0,
		.timer = 6,
	},
	[12] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_StartingWallJump[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_StartingWallJump_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_StartingSpinJump_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_StartingWallJump_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_StartingSpinJump_Frame0,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_StartingWallJump_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_StartingWallJump_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_StartingWallJump[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_StartingWallJump_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_StartingSpinJump_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_StartingWallJump_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_StartingSpinJump_Frame0,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_StartingWallJump_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_StartingWallJump_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Shinesparking[10] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Shinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame0,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame5,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame0,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame4,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame2,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame3,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame2,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame0,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame8,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame8,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame7,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame7,
		.timer = 3,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame6,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame6,
		.timer = 3,
	},
	[9] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Shinesparking[10] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Shinesparking_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame0,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame5,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame0,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame4,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame2,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame3,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame2,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame0,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame8,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame8,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame7,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame7,
		.timer = 3,
	},
	[8] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Shinesparking_Frame6,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Shinesparking_Frame6,
		.timer = 3,
	},
	[9] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Sidewards_Shinesparking[5] = {
	[0] = {
		.pTopGfx =sSamusGfx_Top_PowerSuit_Left_StartingWallJump_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_StartingSpinJump_Frame0,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Sidewards_Shinesparking_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_SpaceJumping_Frame0,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Sidewards_Shinesparking_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Sidewards_Shinesparking_Frame2,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Sidewards_Shinesparking_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Sidewards_Shinesparking_Frame2,
		.timer = 3,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Sidewards_Shinesparking[5] = {
	[0] = {
		.pTopGfx =sSamusGfx_Top_PowerSuit_Right_StartingWallJump_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_StartingSpinJump_Frame0,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Sidewards_Shinesparking_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_SpaceJumping_Frame0,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Sidewards_Shinesparking_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_Sidewards_Shinesparking_Frame2,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Sidewards_Shinesparking_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_Sidewards_Shinesparking_Frame2,
		.timer = 3,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_ScrewAttacking[9] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame2,
		.timer = 1,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame1,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame0,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Spinning_Frame3,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame6,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame5,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame4,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Spinning_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_ScrewAttacking_Frame7,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_ScrewAttacking[9] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame2,
		.timer = 1,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame1,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame0,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Spinning_Frame3,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame6,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame5,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Spinning_Frame4,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Spinning_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_ScrewAttacking_Frame7,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_SpaceJumping[9] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_SpaceJumping_Frame0,
		.timer = 1,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_SpaceJumping_Frame0,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_SpaceJumping_Frame0,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_SpaceJumping_Frame0,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_SpaceJumping_Frame4,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_SpaceJumping_Frame4,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_SpaceJumping_Frame4,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_SpaceJumping_Frame4,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_SpaceJumping[9] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_SpaceJumping_Frame0,
		.timer = 1,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_SpaceJumping_Frame0,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_SpaceJumping_Frame0,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_SpaceJumping_Frame0,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_SpaceJumping_Frame4,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_SpaceJumping_Frame4,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_SpaceJumping_Frame4,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_SpaceJumping_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_SpaceJumping_Frame4,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const u8 sSamusGfx_Top_PowerSuit_Left_Morphing_Frame0[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Morphing_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Morphing_Frame0[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Morphing_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Morphball_Frame0[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Morphball_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Morphing_Frame1[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Morphing_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Morphball_Frame6[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Morphball_Frame6.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Morphball_Frame5[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Morphball_Frame5.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Morphball_Frame4[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Morphball_Frame4.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Morphball_Frame3[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Morphball_Frame3.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Morphball_Frame2[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Morphball_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Morphing_Frame1[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Morphing_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_TurningAround_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_TurningAround_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_TurningAround_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_TurningAround_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_TurningAround_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_DiagonalUp_TurningAround_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_DiagonalUp_TurningAround_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame1[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_DiagonalDown_TurningAround_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_DiagonalDown_TurningAround_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Up_TurningAround_Frame1[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Up_TurningAround_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Up_TurningAround_Frame0[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Up_TurningAround_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_TurningAroundAndCrouching_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_TurningAroundAndCrouching_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0[SAMUS_GFX_SIZE(3, 3)] = {
	3, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_TurningAroundAndCrouching_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_TurningAroundAndCrouching_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_TurningAroundAndCrouching_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Down_TurningAroundMidAir_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Down_TurningAroundMidAir_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Down_TurningAroundMidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Down_TurningAroundMidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Down_TurningAroundMidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Down_TurningAroundMidAir_Frame0.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_TurningAroundMidAir_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame0[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_FacingTheForeground_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame1[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_FacingTheForeground_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame2[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_FacingTheForeground_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_UsingAnElevator_Frame1[SAMUS_GFX_SIZE(12, 9)] = {
	12, 9,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_UsingAnElevator_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_TurningFromFacingTheForeground_Frame0[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_TurningFromFacingTheForeground_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_TurningFromFacingTheForeground_Frame0[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_TurningFromFacingTheForeground_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_TurningOnZipline_Frame1[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_TurningOnZipline_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_TurningOnZipline_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_TurningOnZipline_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_TurningOnZipline_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_TurningOnZipline_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_DiagonalDown_TurningOnZipline_Frame1[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_DiagonalDown_TurningOnZipline_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_DiagonalDown_TurningOnZipline_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_DiagonalDown_TurningOnZipline_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Down_TurningOnZipline_Frame1[SAMUS_GFX_SIZE(4, 3)] = {
	4, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Down_TurningOnZipline_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Down_TurningOnZipline_Frame0[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Down_TurningOnZipline_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_MorphballMotionless_Frame0[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_MorphballMotionless_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_MorphballMotionless_Frame1[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_MorphballMotionless_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_MorphballMotionless_Frame2[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_MorphballMotionless_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_MorphballMotionless_Frame3[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_MorphballMotionless_Frame3.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_SaveLoadingGame_Frame1[SAMUS_GFX_SIZE(10, 6)] = {
	10, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SaveLoadingGame_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_SaveLoadingGame_Frame2[SAMUS_GFX_SIZE(10, 6)] = {
	10, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SaveLoadingGame_Frame2.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_SaveLoadingGame_Frame3[SAMUS_GFX_SIZE(10, 6)] = {
	10, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SaveLoadingGame_Frame3.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_SaveLoadingGame_Frame4[SAMUS_GFX_SIZE(11, 6)] = {
	11, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SaveLoadingGame_Frame4.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_SaveLoadingGame_Frame5[SAMUS_GFX_SIZE(12, 6)] = {
	12, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SaveLoadingGame_Frame5.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_SaveLoadingGame_Frame6[SAMUS_GFX_SIZE(12, 6)] = {
	12, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SaveLoadingGame_Frame6.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_SaveLoadingGame_Frame7[SAMUS_GFX_SIZE(12, 6)] = {
	12, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SaveLoadingGame_Frame7.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_SaveLoadingGame_Frame8[SAMUS_GFX_SIZE(12, 6)] = {
	12, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SaveLoadingGame_Frame8.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_SaveLoadingGame_Frame9[SAMUS_GFX_SIZE(12, 6)] = {
	12, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SaveLoadingGame_Frame9.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_SaveLoadingGame_Frame10[SAMUS_GFX_SIZE(12, 6)] = {
	12, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_SaveLoadingGame_Frame10.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_DownloadingMapData_Frame0[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_DownloadingMapData_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DownloadingMapData_Frame0[SAMUS_GFX_SIZE(2, 0)] = {
	2, 0,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DownloadingMapData_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DownloadingMapData_Frame1[SAMUS_GFX_SIZE(3, 1)] = {
	3, 1,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DownloadingMapData_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DownloadingMapData_Frame2[SAMUS_GFX_SIZE(3, 3)] = {
	3, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DownloadingMapData_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DownloadingMapData_Frame3[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DownloadingMapData_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DownloadingMapData_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DownloadingMapData_Frame4.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DownloadingMapData_Frame5[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DownloadingMapData_Frame5.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DownloadingMapData_Frame6[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DownloadingMapData_Frame6.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_DownloadingMapData_Frame7[SAMUS_GFX_SIZE(4, 0)] = {
	4, 0,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_DownloadingMapData_Frame7.gfx")
};


const u16 sSamusOam_PowerSuit_Left_Morphing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f6, 0x3,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x6, 0x2
};

const u16 sSamusOam_PowerSuit_Left_Morphball_Frame0[OAM_DATA_SIZE(2)] = {
	0x2,
	0xf0, 0x1f8, 0x2,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x0
};

const u16 sSamusOam_PowerSuit_Left_Morphing_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	0xef, 0x1f8, 0x2,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x0
};

const u16 sSamusOam_PowerSuit_Left_Morphball_Frame2[OAM_DATA_SIZE(2)] = {
	0x2,
	0xee, 0x1f8, 0x2,
	0xee, OBJ_SIZE_16x16 | 0x1f8, 0x0
};


const u16 sSamusOam_PowerSuit_Right_Morphing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fa, 0x3,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f2, 0x2
};


const u16 sSamusOam_PowerSuit_TurningAround_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x16 | 0x1ee, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_TurningAround_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_DiagonalUp_TurningAround_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd7, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_DiagonalUp_TurningAround_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd7, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_DiagonalDown_TurningAround_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdb, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	0xeb, 0x1f7, 0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_DiagonalDown_TurningAround_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdb, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xeb, 0x1fa, 0x4,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_Up_TurningAround_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd4, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Up_TurningAround_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd4, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_PowerSuit_TurningAroundAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_SIZE_32x16 | 0x1ee, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x16
};

const u16 sSamusOam_PowerSuit_TurningAroundAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f4, 0x16
};


const u16 sSamusOam_PowerSuit_DiagonalUp_TurningAroundAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x16
};

const u16 sSamusOam_PowerSuit_DiagonalUp_TurningAroundAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f4, 0x16
};


const u16 sSamusOam_PowerSuit_DiagonalDown_TurningAroundAndCrouching_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	0xf6, 0x1f7, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x16
};

const u16 sSamusOam_PowerSuit_DiagonalDown_TurningAroundAndCrouching_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf6, 0x1fa, 0x4,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f4, 0x16
};


const u16 sSamusOam_PowerSuit_Down_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xed, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fa, 0x16
};

const u16 sSamusOam_PowerSuit_Down_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xed, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x16
};


const u16 sSamusOam_PowerSuit_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd9, OBJ_SIZE_32x16 | 0x1ee, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_PowerSuit_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd9, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x16
};


const u16 sSamusOam_PowerSuit_DiagonalUp_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd5, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_PowerSuit_DiagonalUp_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd5, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x16
};


const u16 sSamusOam_PowerSuit_DiagonalDown_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xd9, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe9, 0x1f8, 0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_PowerSuit_DiagonalDown_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xd9, OBJ_SIZE_32x16 | 0x1f1, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f9, 0x4,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x16
};


const u16 sSamusOam_PowerSuit_Up_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd1, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_PowerSuit_Up_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd1, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x16
};


const u16 sSamusOam_PowerSuit_FacingTheForeground_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x6,
	0xf8, 0x4, 0x8
};


const u16 sSamusOam_PowerSuit_UsingAnElevator_Frame1[OAM_DATA_SIZE(8)] = {
	0x8,
	0xe8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f7, 0x9,
	0xf8, 0x7, 0xb,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f4, 0x4,
	OBJ_SHAPE_VERTICAL | 0xd9, 0x4, 0x6,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x1f4, 0x7,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x4, 0x8
};

const u16 sSamusOam_PowerSuit_UsingAnElevator_Frame2[OAM_DATA_SIZE(8)] = {
	0x8,
	0xe8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f7, 0x9,
	0xf8, 0x7, 0xb,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f4, 0x4,
	OBJ_SHAPE_VERTICAL | 0xd9, 0x4, 0x6,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x1f4, 0x7,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x4, 0x8
};


const u16 sSamusOam_PowerSuit_GoingUp_UsingAnElevator_Frame0[OAM_DATA_SIZE(8)] = {
	0x8,
	0xe8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f7, 0x9,
	0xf8, 0x7, 0xb,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xd7, OBJ_SIZE_16x16 | 0x1f4, 0x4,
	OBJ_SHAPE_VERTICAL | 0xd7, 0x4, 0x6,
	OBJ_SHAPE_VERTICAL | 0xe7, 0x1f4, 0x7,
	OBJ_SHAPE_VERTICAL | 0xe7, 0x4, 0x8
};


const u16 sSamusOam_PowerSuit_Left_TurningFromFacingTheForeground_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x3, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x3, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f3, 0x6,
	0xf8, 0x3, 0x8
};

const u16 sSamusOam_PowerSuit_Right_TurningFromFacingTheForeground_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x5, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x5, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f5, 0x6,
	0xf8, 0x5, 0x8
};


const u16 sSamusOam_PowerSuit_TurningOnZipline_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fa, 0x4,
	0xe4, 0x1fa, 0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x2
};

const u16 sSamusOam_PowerSuit_TurningOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, OBJ_X_FLIP | 0x1fe, 0x4
};


const u16 sSamusOam_PowerSuit_DiagonalDown_TurningOnZipline_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fa, 0x4,
	0xe4, 0x1fa, 0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f1, 0x2
};

const u16 sSamusOam_PowerSuit_DiagonalDown_TurningOnZipline_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, 0x0, 0x5,
	0xe5, OBJ_SIZE_16x16 | 0x0, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, OBJ_X_FLIP | 0x1fe, 0x4
};


const u16 sSamusOam_PowerSuit_Down_TurningOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fa, 0x2,
	0xe4, 0x1fa, 0x3,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16
};

const u16 sSamusOam_PowerSuit_Down_TurningOnZipline_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x0, 0x2,
	0xf0, 0x0, 0x4,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, OBJ_X_FLIP | 0x1fe, 0x3
};


const u16 sSamusOam_PowerSuit_SavingLoadingGame_Frame1[OAM_DATA_SIZE(8)] = {
	0x8,
	0xf8, 0x1f8, 0x1008,
	0xf8, OBJ_X_FLIP | 0x1, 0x1008,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x6,
	0xf8, 0x4, 0x9
};

const u16 sSamusOam_PowerSuit_SavingLoadingGame_Frame3[OAM_DATA_SIZE(8)] = {
	0x8,
	0xf0, 0x1f9, 0x1008,
	0xf0, OBJ_X_FLIP | 0x0, 0x1008,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x6,
	0xf8, 0x4, 0x9
};

const u16 sSamusOam_PowerSuit_SavingLoadingGame_Frame4[OAM_DATA_SIZE(7)] = {
	0x7,
	OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f6, 0x1006,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x8,
	0xf8, 0x4, 0xa
};

const u16 sSamusOam_PowerSuit_SavingLoadingGame_Frame5[OAM_DATA_SIZE(8)] = {
	0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f4, 0x1006,
	0xe8, 0x4, 0x100a,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x8,
	0xf8, 0x4, 0xb
};

const u16 sSamusOam_PowerSuit_SavingLoadingGame_Frame7[OAM_DATA_SIZE(8)] = {
	0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f4, 0x1006,
	0xe0, 0x4, 0x100a,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x8,
	0xf8, 0x4, 0xb
};

const u16 sSamusOam_PowerSuit_SavingLoadingGame_Frame9[OAM_DATA_SIZE(8)] = {
	0x8,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f4, 0x1006,
	0xd8, 0x4, 0x100a,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x8,
	0xf8, 0x4, 0xb
};


const u16 sSamusOam_PowerSuit_DownloadingMapData_Frame9[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1ee, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_PowerSuit_DownloadingMapData_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1eb, 0x1015,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x1fb, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_PowerSuit_DownloadingMapData_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f2, 0x1014,
	OBJ_SHAPE_VERTICAL | 0xdb, 0x2, 0x1016,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_PowerSuit_DownloadingMapData_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f9, 0x1016,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_PowerSuit_DownloadingMapData_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x1014,
	0xe9, OBJ_SIZE_16x16 | 0x1f7, 0x1016,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_PowerSuit_DownloadingMapData_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x8 | 0x1f2, 0x1018,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_PowerSuit_DownloadingMapData_Frame6[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_PowerSuit_DownloadingMapData_Frame7[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f2, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};


const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Morphing[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Morphing_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Morphing_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame1,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Morphball[9] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphball_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphball_Frame0,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphing_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame1,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphball_Frame6,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphball_Frame2,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphball_Frame5,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame1,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphball_Frame4,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphball_Frame0,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphball_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame1,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphball_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphball_Frame0,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Morphing_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame1,
		.timer = 3,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Unmorphing[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphing_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Morphing_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame0,
		.timer = 1,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Morphing[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphing_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_Morphing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphing_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame1,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Morphball[9] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphball_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphball_Frame0,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphing_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame1,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphball_Frame6,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphball_Frame2,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphball_Frame5,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame1,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphball_Frame4,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphball_Frame0,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphball_Frame3,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame1,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphball_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphball_Frame0,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphing_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_Morphing_Frame1,
		.timer = 3,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Unmorphing[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_Morphing_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_Morphing_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_Morphing_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_Morphing_Frame0,
		.timer = 1,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_TurningAround[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_TurningAround_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_TurningAround_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_TurningAround[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalUp_TurningAround_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalUp_TurningAround_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_TurningAround[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalDown_TurningAround_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalDown_TurningAround_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Up_TurningAround[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Up_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_Up_TurningAround_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Up_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_Up_TurningAround_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_TurningAround[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_TurningAround_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_TurningAround_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_TurningAround[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalUp_TurningAround_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalUp_TurningAround_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_TurningAround[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalDown_TurningAround_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalDown_TurningAround_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Up_TurningAround[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Up_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_Up_TurningAround_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Up_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAround_Frame0,
		.pOam = sSamusOam_PowerSuit_Up_TurningAround_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_TurningAroundAndCrouching_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_TurningAroundAndCrouching_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_TurningAroundAndCrouching_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalUp_TurningAroundAndCrouching_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalUp_TurningAroundAndCrouching_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalDown_TurningAroundAndCrouching_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalDown_TurningAroundAndCrouching_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Down_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Down_TurningAroundMidAir_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Down_TurningAroundMidAir_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Down_TurningAroundMidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Down_TurningAroundMidAir_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_TurningAroundAndCrouching_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_TurningAroundAndCrouching_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_TurningAroundAndCrouching_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalUp_TurningAroundAndCrouching_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalUp_TurningAroundAndCrouching_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalDown_TurningAroundAndCrouching_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalDown_TurningAroundAndCrouching_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Down_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Down_TurningAroundMidAir_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Down_TurningAroundMidAir_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Down_TurningAroundMidAir_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pOam = sSamusOam_PowerSuit_Down_TurningAroundMidAir_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_TurningAroundAndCrouching_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_TurningAroundMidAir_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_TurningAroundMidAir_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalUp_TurningAroundMidAir_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalUp_TurningAroundMidAir_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalDown_TurningAroundMidAir_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalDown_TurningAroundMidAir_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Up_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Up_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Up_TurningAroundMidAir_Frame1,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Up_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Up_TurningAroundMidAir_Frame0,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_TurningAroundAndCrouching_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_TurningAroundMidAir_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_TurningAroundAndCrouching_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_TurningAroundMidAir_Frame1,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalUp_TurningAroundMidAir_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalUp_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalUp_TurningAroundMidAir_Frame1,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalDown_TurningAroundMidAir_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_DiagonalDown_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_DiagonalDown_TurningAroundMidAir_Frame1,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Up_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Up_TurningAround_Frame0,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Up_TurningAroundMidAir_Frame0,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Up_TurningAround_Frame1,
		.pBottomGfx = sSamusGfx_Bottom_PowerSuit_TurningAroundMidAir_Frame0,
		.pOam = sSamusOam_PowerSuit_Up_TurningAroundMidAir_Frame1,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_FacingTheForeground[5] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_FacingTheForeground_Frame0,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_FacingTheForeground_Frame0,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame2,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_FacingTheForeground_Frame0,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_FacingTheForeground_Frame0,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_UsingAnElevator[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_FacingTheForeground_Frame0,
		.timer = 255,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_UsingAnElevator_Frame1,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_UsingAnElevator_Frame2,
		.timer = 6,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_GoingUp_UsingAnElevator[4] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_FacingTheForeground_Frame0,
		.timer = 255,
	},
	[1] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_GoingUp_UsingAnElevator_Frame0,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_FacingTheForeground_Frame1,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_UsingAnElevator_Frame1,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_TurningFromFacingTheForeground[2] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Left_TurningFromFacingTheForeground_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Left_TurningFromFacingTheForeground_Frame0,
		.timer = 6,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_TurningFromFacingTheForeground[2] = {
	[0] = {
		.pTopGfx = sSamusGfx_Top_PowerSuit_Right_TurningFromFacingTheForeground_Frame0,
		.pBottomGfx = sSamusGfx_Empty,
		.pOam = sSamusOam_PowerSuit_Right_TurningFromFacingTheForeground_Frame0,
		.timer = 6,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_TurningOnZipline[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_TurningOnZipline[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Down_TurningOnZipline[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_TurningOnZipline[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_TurningOnZipline[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Down_TurningOnZipline[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_MorphballMotioness[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Ballsparking[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Ballsparking[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_SavingLoadingGame[12] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[11] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_DownloadingMapData[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_256484[12] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[11] = SAMUS_ANIM_TERMINATOR
};

const u8 sSamusGfx_Top_PowerSuit_Left_HangingOnLedge_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_HangingOnLedge_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_HangingOnLedge_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_HangingOnLedge_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_HangingOnLedge_Frame1[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_HangingOnLedge_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_HangingOnLedge_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_HangingOnLedge_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_HangingOnLedge_Frame2[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_HangingOnLedge_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_HangingOnLedge_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_HangingOnLedge_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_PullingYourselfUpFromHanging_Frame0[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_PullingYourselfUpFromHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_PullingYourselfUpFromHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_PullingYourselfUpFromHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_PullingYourselfUpFromHanging_Frame1[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_PullingYourselfUpFromHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_PullingYourselfUpFromHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_PullingYourselfUpFromHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_PullingYourselfUpFromHanging_Frame2[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_PullingYourselfUpFromHanging_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_PullingYourselfUpFromHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_PullingYourselfUpFromHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_PullingYourselfUpForwardFromHanging_Frame0[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_PullingYourselfUpForwardFromHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_PullingYourselfUpForwardFromHanging_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_PullingYourselfUpForwardFromHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_PullingYourselfUpForwardFromHanging_Frame1[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_PullingYourselfUpForwardFromHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_PullingYourselfUpForwardFromHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_PullingYourselfUpForwardFromHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_PullingYourselfUpForwardFromHanging_Frame2[SAMUS_GFX_SIZE(7, 4)] = {
	7, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_PullingYourselfUpForwardFromHanging_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_PullingYourselfUpForwardFromHanging_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_PullingYourselfUpForwardFromHanging_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_PullingYourselfUpForwardFromHanging_Frame3[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_PullingYourselfUpForwardFromHanging_Frame3.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_TurningToAimWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_TurningToAimWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Right_TurningToAimWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Right_TurningToAimWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Right_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Right_AimingWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalUp_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalUp_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalDown_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalDown_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Up_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Up_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Down_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Down_AimingWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_HangingOnLedge_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_HangingOnLedge_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Right_HangingOnLedge_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Right_HangingOnLedge_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_HangingOnLedge_Frame1[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_HangingOnLedge_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Right_HangingOnLedge_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Right_HangingOnLedge_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_HangingOnLedge_Frame2[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_HangingOnLedge_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Right_HangingOnLedge_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Right_HangingOnLedge_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_PullingYourselfUpFromHanging_Frame0[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_PullingYourselfUpFromHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_PullingYourselfUpFromHanging_Frame1[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_PullingYourselfUpFromHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_PullingYourselfUpFromHanging_Frame2[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_PullingYourselfUpFromHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_PullingYourselfForwardFromHanging_Frame1[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_PullingYourselfForwardFromHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_PullingYourselfForwardFromHanging_Frame2[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_PullingYourselfForwardFromHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_TurningToAimWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_TurningToAimWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_TurningToAimWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_TurningToAimWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_AimingWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalUp_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalUp_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalDown_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalDown_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Up_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Up_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Down_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Down_AimingWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_OnZipline_Frame0[SAMUS_GFX_SIZE(4, 3)] = {
	4, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_OnZipline_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_OnZipline_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_OnZipline_Frame0.gfx")
};


const u8 sSamusGfx_Bottom_PowerSuit_ShootingOnZipline_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_ShootingOnZipline_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalDown_OnZipline_Frame0[SAMUS_GFX_SIZE(4, 3)] = {
	4, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalDown_OnZipline_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Down_OnZipline_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Down_OnZipline_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Down_OnZipline_Frame0[SAMUS_GFX_SIZE(4, 3)] = {
	4, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Down_OnZipline_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_OnZipline_Frame0[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_OnZipline_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalDown_OnZipline_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalDown_OnZipline_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Down_OnZipline_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Down_OnZipline_Frame0.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Right_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Right_AimingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_AimingWhileHanging_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Right_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Right_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalUp_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalUp_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalUp_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalUp_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalDown_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalDown_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_DiagonalDown_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_DiagonalDown_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Up_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Up_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Up_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Up_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Down_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Down_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Down_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Down_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_AimingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_AimingWhileHanging_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalUp_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalUp_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_DiagonalUp_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_DiagonalUp_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_DiagonalDown_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_DiagonalDown_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_PowerSuit_Left_DiagonalDown_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Bottom_Left_DiagonalDown_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Up_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Up_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Up_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Up_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Left_Down_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Down_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Down_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Down_AimingWhileHanging_Frame2.gfx")
};


const u16 sSamusOam_PowerSuit_Left_HangingOnLedge_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xe0, OBJ_X_FLIP | 0x1fd, 0x4,
	0xf0, OBJ_X_FLIP | 0x1fd, 0x5
};


const u16 sSamusOam_PowerSuit_Left_PullingYourselfUpFromHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xde, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x4,
	0xdb, OBJ_X_FLIP | 0x1fb, 0x6
};

const u16 sSamusOam_PowerSuit_Left_PullingYourselfUpFromHanging_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe5, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xe1, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe8, OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf8, OBJ_SIZE_16x16 | 0x1fa, 0x16,
	0xea, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f1, 0x4,
	0xe2, OBJ_X_FLIP | 0x1f9, 0x6
};

const u16 sSamusOam_PowerSuit_Left_PullingYourselfUpFromHanging_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdf, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe1, OBJ_SIZE_16x16 | 0x1fd, 0x14,
	0xf1, OBJ_SIZE_16x16 | 0x1fd, 0x16,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f0, 0x4,
	0xe0, OBJ_X_FLIP | 0x1f8, 0x6
};


const u16 sSamusOam_PowerSuit_Left_PullingYourselfUpForwardFromHanging_Frame0[OAM_DATA_SIZE(7)] = {
	0x7,
	0xed, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xfd, 0x0, 0x6,
	0xe8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1fe, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x16 | 0x1f6, 0x14,
	0xf1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x4,
	0xe9, OBJ_X_FLIP | 0x1fb, 0x7
};

const u16 sSamusOam_PowerSuit_Left_PullingYourselfUpForwardFromHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xea, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xea, OBJ_X_FLIP | 0x1fc, 0x6,
	0xea, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1ec, 0x4
};

const u16 sSamusOam_PowerSuit_Left_PullingYourselfUpForwardFromHanging_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe6, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe6, 0x1ef, 0x6,
	0xe2, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1ec, 0x4
};

const u16 sSamusOam_PowerSuit_Left_PullingYourselfUpForwardFromHanging_Frame3[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe1, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe1, 0x1f0, 0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1ed, 0x4
};


const u16 sSamusOam_PowerSuit_Right_TurningToAimWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xdf, OBJ_X_FLIP | 0x1ff, 0x4,
	OBJ_SHAPE_VERTICAL | 0xe7, OBJ_X_FLIP | 0x7, 0x5
};

const u16 sSamusOam_PowerSuit_Right_AimingWhileHanging_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};


const u16 sSamusOam_PowerSuit_Right_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};

const u16 sSamusOam_PowerSuit_Right_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};


const u16 sSamusOam_PowerSuit_Right_Up_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdf, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};

const u16 sSamusOam_PowerSuit_Right_Up_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdf, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};


const u16 sSamusOam_PowerSuit_Right_Down_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};

const u16 sSamusOam_PowerSuit_Right_Down_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};


const u16 sSamusOam_PowerSuit_Right_HangingOnLedge_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x1fb, 0x4,
	0xf0, 0x1fb, 0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};


const u16 sSamusOam_PowerSuit_Right_PullingYourselfUpFromHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe3, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdb, 0x1fd, 0x6,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xe1, OBJ_SIZE_16x16 | 0x0, 0x4
};

const u16 sSamusOam_PowerSuit_Right_PullingYourselfUpFromHanging_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xea, OBJ_SIZE_16x16 | 0x1ff, 0x0,
	0xe2, 0x1ff, 0x6,
	0xe1, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x16,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x4
};

const u16 sSamusOam_PowerSuit_Right_PullingYourselfUpFromHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe8, OBJ_SIZE_16x16 | 0x0, 0x0,
	0xe0, 0x0, 0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x14,
	0xf1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x16
};


const u16 sSamusOam_PowerSuit_Right_PullingYourselfUpForwardFromHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xf1, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xe9, 0x1fd, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xea, OBJ_X_FLIP | 0x1f2, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ea, 0x14
};

const u16 sSamusOam_PowerSuit_Right_PullingYourselfUpForwardFromHanging_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xea, 0x1fc, 0x4,
	0xea, OBJ_SIZE_16x16 | 0x4, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_PullingYourselfUpForwardFromHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x4, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe7, 0x1fc, 0x4,
	0xe2, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_PowerSuit_Right_PullingYourselfUpForwardFromHanging_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1fb, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};


const u16 sSamusOam_PowerSuit_Left_TurningToAimWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xdf, 0x1f9, 0x4,
	OBJ_SHAPE_VERTICAL | 0xe7, 0x1f1, 0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_PowerSuit_Left_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, 0x1f7, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};


const u16 sSamusOam_PowerSuit_Left_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, 0x1f7, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_PowerSuit_Left_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, 0x1f8, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1, 0x2
};


const u16 sSamusOam_PowerSuit_Left_DiagonalUp_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, 0x1f7, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, 0x1f7, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_PowerSuit_Left_DiagonalUp_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, 0x1f8, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1, 0x2
};


const u16 sSamusOam_PowerSuit_Left_DiagonalDown_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xe2, 0x1f7, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xe2, 0x1f7, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_PowerSuit_Left_DiagonalDown_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x1f8, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1, 0x2
};


const u16 sSamusOam_PowerSuit_Left_Up_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, 0x1f8, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_PowerSuit_Left_Up_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, 0x1f8, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdf, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_PowerSuit_Left_Up_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, 0x1f8, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdf, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1, 0x2
};


const u16 sSamusOam_PowerSuit_Left_Down_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x1f9, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_PowerSuit_Left_Down_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x1f9, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_PowerSuit_Left_Down_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xdf, 0x1f9, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1, 0x2
};


const u16 sSamusOam_PowerSuit_Left_OnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fd, 0x2,
	0xe4, 0x1fd, 0x3,
	0xdc, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_PowerSuit_Left_ShootingOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fd, 0x2,
	0xe4, 0x1fd, 0x3,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_PowerSuit_Left_ShootingOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fe, 0x2,
	0xe4, 0x1fe, 0x3,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_PowerSuit_Left_DiagonaDown_ShootingOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fd, 0x2,
	0xe4, 0x1fd, 0x3,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_PowerSuit_Left_DiagonaDown_ShootingOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fe, 0x2,
	0xe4, 0x1fe, 0x3,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1fc, 0x16
};


const u16 sSamusOam_PowerSuit_Left_Down_OnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fd, 0x2,
	0xe4, 0x1fd, 0x3,
	0xdc, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_PowerSuit_Left_Down_ShootingOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fd, 0x2,
	0xe4, 0x1fd, 0x3,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_PowerSuit_Left_Down_ShootingOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fe, 0x2,
	0xe4, 0x1fe, 0x3,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fd, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1fd, 0x16
};


const u16 sSamusOam_PowerSuit_Right_OnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x3,
	0xdc, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fb, 0x2
};

const u16 sSamusOam_PowerSuit_Right_ShootingOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x3,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fb, 0x2
};

const u16 sSamusOam_PowerSuit_Right_ShootingOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f9, 0x3,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fa, 0x2
};


const u16 sSamusOam_PowerSuit_Right_DiagonalDown_OnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fb, 0x4
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_ShootingOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fb, 0x4
};

const u16 sSamusOam_PowerSuit_Right_DiagonalDown_ShootingOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fa, 0x4
};


const u16 sSamusOam_PowerSuit_Right_Down_OnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xdf, 0x1fc, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fb, 0x3
};

const u16 sSamusOam_PowerSuit_Right_Down_ShootingOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xdf, 0x1fc, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fb, 0x3
};

const u16 sSamusOam_PowerSuit_Right_Down_ShootingOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xde, 0x1fc, 0x2,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fa, 0x3
};


const struct SamusAnimationData sSamusAnim_PowerSuit_Left_HangingOnLedge[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_PullingYourselfUpFromHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_PullingYourselfForwardFromHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_TurningToAimWhileHanging[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Up_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Down_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalUp_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Up_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Down_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_HangingOnLedge[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_PullingYourselfUpFromHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_PullingYourselfForwardFromHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_TurningToAimWhileHanging[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Up_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Down_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalUp_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Up_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Down_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_OnZipline[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_OnZipline[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Down_OnZipline[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Left_ShootingOnZipline[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_DiagonalDown_ShootingOnZipline[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Down_ShootingOnZipline[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_OnZipline[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_OnZipline[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Down_OnZipline[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_PowerSuit_Right_ShootingOnZipline[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_DiagonalDown_ShootingOnZipline[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Down_ShootingOnZipline[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const u8 sSamusGfx_Top_PowerSuit_Left_Dying_Frame0[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Dying_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Left_Dying_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Dying_Frame1.gfx")
};


const u8 sSamusGfx_Top_Left_Dying_Frame10[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Dying_Frame10.gfx")
};

const u8 sSamusGfx_Top_Left_Dying_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Dying_Frame2.gfx")
};

const u8 sSamusGfx_Top_Left_Dying_Frame17[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Dying_Frame17.gfx")
};

const u8 sSamusGfx_Top_Left_Dying_Frame18[SAMUS_GFX_SIZE(12, 8)] = {
	12, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Dying_Frame18.gfx")
};

const u8 sSamusGfx_Top_Left_Dying_Frame19[SAMUS_GFX_SIZE(12, 8)] = {
	12, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Dying_Frame19.gfx")
};

const u8 sSamusGfx_Top_Left_Dying_Frame20[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Dying_Frame20.gfx")
};

const u8 sSamusGfx_Top_Left_Dying_Frame21[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Dying_Frame21.gfx")
};

const u8 sSamusGfx_Top_Left_Dying_Frame22[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Dying_Frame22.gfx")
};

const u8 sSamusGfx_Top_Left_Dying_Frame23[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Dying_Frame23.gfx")
};

const u8 sSamusGfx_Top_Left_Dying_Frame24[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Left_Dying_Frame24.gfx")
};


const u8 sSamusGfx_Top_PowerSuit_Right_Dying_Frame0[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Dying_Frame0.gfx")
};

const u8 sSamusGfx_Top_PowerSuit_Right_Dying_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Dying_Frame1.gfx")
};


const u8 sSamusGfx_Top_Right_Dying_Frame11[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Dying_Frame11.gfx")
};

const u8 sSamusGfx_Top_Right_Dying_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Dying_Frame2.gfx")
};

const u8 sSamusGfx_Top_Right_Dying_Frame17[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Dying_Frame17.gfx")
};

const u8 sSamusGfx_Top_Right_Dying_Frame18[SAMUS_GFX_SIZE(12, 8)] = {
	12, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Dying_Frame18.gfx")
};

const u8 sSamusGfx_Top_Right_Dying_Frame19[SAMUS_GFX_SIZE(12, 8)] = {
	12, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Dying_Frame19.gfx")
};

const u8 sSamusGfx_Top_Right_Dying_Frame20[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Dying_Frame20.gfx")
};

const u8 sSamusGfx_Top_Right_Dying_Frame20[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Dying_Frame20.gfx")
};

const u8 sSamusGfx_Top_Right_Dying_Frame20[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Dying_Frame20.gfx")
};

const u8 sSamusGfx_Top_Right_Dying_Frame20[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Dying_Frame20.gfx")
};

const u8 sSamusGfx_Top_Right_Dying_Frame24[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/power_suit/Top_Right_Dying_Frame24.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Dying_Frame0[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Dying_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Dying_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Dying_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Dying_Frame0[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Dying_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Dying_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Dying_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Dying_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Dying_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Dying_Frame2[SAMUS_GFX_SIZE(9, 8)] = {
	9, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Dying_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Dying_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Dying_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Dying_Frame2[SAMUS_GFX_SIZE(9, 8)] = {
	9, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Dying_Frame2.gfx")
};


const u16 sSamusOam_Left_Dying_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x1eb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1eb, 0x4
};

const u16 sSamusOam_Left_Dying_Frame2[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x1eb, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1eb, 0x1004
};

const u16 sSamusOam_Left_Dying_Frame17[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xdf, OBJ_SIZE_32x16 | 0x1eb, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xef, OBJ_SIZE_32x16 | 0x1eb, 0x1004
};

const u16 sSamusOam_Left_Dying_Frame18[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xda, OBJ_SIZE_32x16 | 0x1ee, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xea, OBJ_SIZE_32x16 | 0x1ee, 0x1004,
	OBJ_SHAPE_HORIZONTAL | 0xfa, OBJ_SIZE_32x8 | 0x1ee, 0x1008
};

const u16 sSamusOam_Left_Dying_Frame19[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xdb, OBJ_SIZE_32x16 | 0x1ec, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xeb, OBJ_SIZE_32x16 | 0x1ec, 0x1004,
	OBJ_SHAPE_HORIZONTAL | 0xfb, OBJ_SIZE_32x8 | 0x1ec, 0x1008
};

const u16 sSamusOam_Left_Dying_Frame20[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xdc, OBJ_SIZE_32x16 | 0x1f3, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xec, OBJ_SIZE_32x16 | 0x1f3, 0x1004,
	OBJ_SHAPE_HORIZONTAL | 0xfc, 0x1fb, 0x1008
};


const u16 sSamusOam_Right_Dying_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1f5, 0x4
};

const u16 sSamusOam_Right_Dying_Frame2[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x1f5, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1f5, 0x1004
};

const u16 sSamusOam_Right_Dying_Frame17[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xdf, OBJ_SIZE_32x16 | 0x1f5, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xef, OBJ_SIZE_32x16 | 0x1f5, 0x1004
};

const u16 sSamusOam_Right_Dying_Frame18[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xda, OBJ_SIZE_32x16 | 0x1f2, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xea, OBJ_SIZE_32x16 | 0x1f2, 0x1004,
	OBJ_SHAPE_HORIZONTAL | 0xfa, OBJ_X_FLIP | OBJ_SIZE_32x8 | 0x1f2, 0x1008
};

const u16 sSamusOam_Right_Dying_Frame19[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xdb, OBJ_SIZE_32x16 | 0x1f4, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xeb, OBJ_SIZE_32x16 | 0x1f4, 0x1004,
	OBJ_SHAPE_HORIZONTAL | 0xfb, OBJ_X_FLIP | OBJ_SIZE_32x8 | 0x1f4, 0x1008
};

const u16 sSamusOam_Right_Dying_Frame20[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xdc, OBJ_SIZE_32x16 | 0x1ed, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xec, OBJ_SIZE_32x16 | 0x1ed, 0x1004,
	OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_X_FLIP | 0x1f5, 0x1008
};


const u16 sSamusOam_FullSuit_Left_Dying_Frame0[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x1eb, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1eb, 0x1004
};

const u16 sSamusOam_FullSuit_Right_Dying_Frame0[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x1f5, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1f5, 0x1004
};


const u16 sSamusOam_Suitless_Left_Dying_Frame2[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x1eb, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1eb, 0x1004,
	0xfe, 0x1fb, 0x1008
};

const u16 sSamusOam_Suitless_Right_Dying_Frame2[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x1f5, 0x1000,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1f5, 0x1004,
	0xfe, 0x1fd, 0x1008
};


const struct SamusAnimationData sSamusAnim_PowerSuit_Left_Dying[26] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[11] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[12] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[13] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[14] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[15] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[16] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[17] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[18] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[19] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[20] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[21] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[22] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[23] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[24] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[25] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_PowerSuit_Right_Dying[26] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[11] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[12] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[13] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[14] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[15] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[16] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[17] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[18] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[19] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[20] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[21] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[22] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[23] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[24] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[25] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Dying[26] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[11] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[12] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[13] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[14] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[15] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[16] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[17] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[18] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[19] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[20] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[21] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[22] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[23] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[24] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[25] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Dying[26] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[11] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[12] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[13] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[14] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[15] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[16] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[17] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[18] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[19] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[20] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[21] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[22] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[23] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[24] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[25] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_Dying[26] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[11] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[12] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[13] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[14] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[15] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[16] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[17] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[18] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[19] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[20] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[21] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[22] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[23] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[24] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[25] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Dying[26] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[11] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[12] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[13] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[14] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[15] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 5,
	},
	[16] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[17] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[18] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[19] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[20] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[21] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[22] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[23] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[24] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[25] = SAMUS_ANIM_TERMINATOR
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Frame1[SAMUS_GFX_SIZE(7, 7)] = {
	7, 7,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Running_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Running_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Running_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Frame4.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Running_Frame4[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Frame5[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Frame5.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Running_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Running_Frame5.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Frame6[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Frame6.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Running_Frame6[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Running_Frame6.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Frame7[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Frame7.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Running_Frame7[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Running_Frame7.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Frame8[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Frame8.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Running_Frame8[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Running_Frame8.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Frame9[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Frame9.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Running_Frame9[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Running_Frame9.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Running_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Frame5.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Frame6[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Frame6.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Frame7[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Frame7.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Frame8[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Frame8.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Frame9[SAMUS_GFX_SIZE(7, 4)] = {
	7, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Frame9.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Frame5.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Frame6[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Frame6.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Frame7[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Frame7.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Frame8[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Frame8.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Frame9[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Frame9.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_DiagonalUp_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalUp_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_DiagonalDown_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalDown_Running_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Standing_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Standing_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Forward_Running_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Forward_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Forward_Running_Frame3[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Forward_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Forward_Running_Frame7[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Forward_Running_Frame7.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Forward_Running_Frame8[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Forward_Running_Frame8.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Forward_Running_Frame9[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Forward_Running_Frame9.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_DiagonalUp_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalUp_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_DiagonalDown_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalDown_Running_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Standing_Frame0[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Standing_Frame1[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Standing_Frame2[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Standing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Standing_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_Shooting_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_DiagonalUp_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DiagonalUp_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_DiagonalUp_Standing_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalUp_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DiagonalUp_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DiagonalUp_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_DiagonalUp_Standing_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalUp_Standing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DiagonalUp_Standing_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DiagonalUp_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_DiagonalUp_Shooting_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DiagonalUp_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_DiagonalDown_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DiagonalDown_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_DiagonalDown_Standing_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalDown_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DiagonalDown_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DiagonalDown_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_DiagonalDown_Standing_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalDown_Standing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DiagonalDown_Standing_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DiagonalDown_Standing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DiagonalDown_Shooting_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DiagonalDown_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Up_Standing_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Up_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Up_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Up_Standing_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Up_Standing_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Up_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Up_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Up_Standing_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Up_Standing_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Up_Standing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Up_Standing_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Up_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_Up_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Up_Standing_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Standing_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Standing_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_DiagonalUp_Standing_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalUp_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_DiagonalUp_Standing_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalUp_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_DiagonalDown_Standing_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalDown_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_DiagonalDown_Standing_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalDown_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Up_Standing_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Up_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Up_Standing_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Up_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Up_Standing_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Up_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Crouching_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Crouching_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Crouching_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Crouching_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Crouching_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Crouching_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Crouching_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Crouching_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Crouching_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Crouching_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Crouching_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Crouching_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_ShootingAndCrouching_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_ShootingAndCrouching_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Crouching_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Crouching_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Crouching_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Crouching_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Crouching_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Crouching_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_GettingKnockedBack_Frame0[SAMUS_GFX_SIZE(12, 11)] = {
	12, 11,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_GettingKnockedBack_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_GettingKnockedBack_Frame1[SAMUS_GFX_SIZE(12, 10)] = {
	12, 10,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_GettingKnockedBack_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_GettingKnockedBack_Frame0[SAMUS_GFX_SIZE(10, 9)] = {
	10, 9,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_GettingKnockedBack_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_GettingKnockedBack_Frame1[SAMUS_GFX_SIZE(11, 9)] = {
	11, 9,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_GettingKnockedBack_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Speedboosting_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Speedboosting_Frame1[SAMUS_GFX_SIZE(7, 7)] = {
	7, 7,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Speedboosting_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Speedboosting_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Speedboosting_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Speedboosting_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Speedboosting_Frame3.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Speedboosting_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Speedboosting_Frame4.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Speedboosting_Frame5[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Speedboosting_Frame5.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Speedboosting_Frame6[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Speedboosting_Frame6.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Speedboosting_Frame7[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Speedboosting_Frame7.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Speedboosting_Frame8[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Speedboosting_Frame8.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Running_Speedboosting_Frame9[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Running_Speedboosting_Frame9.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Speedboosting_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Speedboosting_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Speedboosting_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Speedboosting_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Speedboosting_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Speedboosting_Frame3.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Speedboosting_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Speedboosting_Frame4.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Speedboosting_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Speedboosting_Frame5.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Speedboosting_Frame6[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Speedboosting_Frame6.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Speedboosting_Frame7[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Speedboosting_Frame7.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Speedboosting_Frame8[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Speedboosting_Frame8.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Forward_Running_Speedboosting_Frame9[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Forward_Running_Speedboosting_Frame9.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_DiagonalUp_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalUp_Running_Speedboosting_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_DiagonalDown_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalDown_Running_Speedboosting_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Speedboosting_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Speedboosting_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Speedboosting_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Speedboosting_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Speedboosting_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Speedboosting_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Speedboosting_Frame3.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Speedboosting_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Speedboosting_Frame4.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Speedboosting_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Speedboosting_Frame5.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Speedboosting_Frame6[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Speedboosting_Frame6.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Speedboosting_Frame7[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Speedboosting_Frame7.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Speedboosting_Frame8[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Speedboosting_Frame8.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Running_Speedboosting_Frame9[SAMUS_GFX_SIZE(7, 4)] = {
	7, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Running_Speedboosting_Frame9.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Forward_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Forward_Running_Speedboosting_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Forward_Running_Speedboosting_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Forward_Running_Speedboosting_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Forward_Running_Speedboosting_Frame6[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Forward_Running_Speedboosting_Frame6.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Forward_Running_Speedboosting_Frame7[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Forward_Running_Speedboosting_Frame7.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Forward_Running_Speedboosting_Frame8[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Forward_Running_Speedboosting_Frame8.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Forward_Running_Speedboosting_Frame9[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Forward_Running_Speedboosting_Frame9.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_DiagonalUp_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalUp_Running_Speedboosting_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_DiagonalDown_Running_Speedboosting_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalDown_Running_Speedboosting_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Skidding_Frame0[SAMUS_GFX_SIZE(14, 10)] = {
	14, 10,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Skidding_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Skidding_Frame1[SAMUS_GFX_SIZE(12, 8)] = {
	12, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Skidding_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Skidding_Frame2[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Skidding_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Left_Skidding_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Left_Skidding_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Armed_Skidding_Frame0[SAMUS_GFX_SIZE(14, 10)] = {
	14, 10,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Armed_Skidding_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Armed_Skidding_Frame1[SAMUS_GFX_SIZE(12, 8)] = {
	12, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Armed_Skidding_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Armed_Skidding_Frame2[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Armed_Skidding_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Skidding_Frame0[SAMUS_GFX_SIZE(14, 12)] = {
	14, 12,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Skidding_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Skidding_Frame1[SAMUS_GFX_SIZE(12, 10)] = {
	12, 10,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Skidding_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Skidding_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Skidding_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Armed_Skidding_Frame0[SAMUS_GFX_SIZE(14, 12)] = {
	14, 12,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Armed_Skidding_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Armed_Skidding_Frame1[SAMUS_GFX_SIZE(12, 10)] = {
	12, 10,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Armed_Skidding_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Armed_Skidding_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Armed_Skidding_Frame2.gfx")
};


const u16 sSamusOam_FullSuit_Left_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_FullSuit_Left_Running_Frame1[OAM_DATA_SIZE(7)] = {
	0x7,
	0xdc, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	OBJ_SHAPE_VERTICAL | 0xdc, 0x2, 0x6,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x4
};

const u16 sSamusOam_FullSuit_Left_Running_Frame2[OAM_DATA_SIZE(7)] = {
	0x7,
	0xda, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	OBJ_SHAPE_VERTICAL | 0xda, 0x0, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	OBJ_SHAPE_VERTICAL | 0xdc, 0x1ff, 0x5
};

const u16 sSamusOam_FullSuit_Left_Running_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xde, OBJ_SIZE_16x16 | 0x1f5, 0x4
};

const u16 sSamusOam_FullSuit_Left_Running_Frame4[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a,
	0xe0, OBJ_SIZE_16x16 | 0x1f7, 0x4
};

const u16 sSamusOam_FullSuit_Left_Running_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16,
	OBJ_SHAPE_HORIZONTAL | 0xe7, 0x1fb, 0x4
};

const u16 sSamusOam_FullSuit_Left_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe3, 0x1f7, 0x4
};

const u16 sSamusOam_FullSuit_Left_Running_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18,
	0xdc, OBJ_SIZE_16x16 | 0x1ee, 0x4
};

const u16 sSamusOam_FullSuit_Left_Running_Frame8[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe7, 0x1f7, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f1, 0x6
};

const u16 sSamusOam_FullSuit_Left_Running_Frame9[OAM_DATA_SIZE(7)] = {
	0x7,
	0xd6, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe6, 0x1f7, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1f7, 0x6
};


const u16 sSamusOam_FullSuit_Right_Running_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1fb, 0x4,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_FullSuit_Right_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdb, OBJ_SIZE_16x16 | 0x1ff, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	OBJ_SHAPE_VERTICAL | 0xda, 0x1f8, 0x4
};

const u16 sSamusOam_FullSuit_Right_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x0, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_FullSuit_Right_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_FullSuit_Right_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe3, 0x1fd, 0x4
};

const u16 sSamusOam_FullSuit_Right_Running_Frame7[OAM_DATA_SIZE(7)] = {
	0x7,
	0xdf, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd7, 0x1fc, 0x6,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18,
	0xdf, OBJ_SIZE_16x16 | 0x2, 0x4
};

const u16 sSamusOam_FullSuit_Right_Running_Frame8[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd9, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1fb, 0x6,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xde, OBJ_SIZE_16x16 | 0x0, 0x4
};

const u16 sSamusOam_FullSuit_Right_Running_Frame9[OAM_DATA_SIZE(7)] = {
	0x7,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1f9, 0x4,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a,
	0xe4, 0x1, 0x6
};


const u16 sSamusOam_FullSuit_Left_Forward_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	OBJ_SHAPE_VERTICAL | 0xdc, 0x2, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xda, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	OBJ_SHAPE_VERTICAL | 0xda, 0x0, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe7, 0x1f7, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd6, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe6, 0x1f7, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a
};


const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a
};


const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a
};


const u16 sSamusOam_FullSuit_Right_Forward_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd7, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd6, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	OBJ_SHAPE_VERTICAL | 0xda, 0x1f8, 0x4
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd7, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd7, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe3, 0x1fd, 0x4
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd6, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18,
	0xdf, OBJ_SIZE_16x16 | 0x2, 0x4
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd6, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xde, OBJ_SIZE_16x16 | 0x0, 0x4
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd7, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a,
	0xe4, 0x1, 0x4
};


const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd6, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd5, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd6, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd6, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd6, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd5, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd5, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd6, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a
};


const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a
};


const u16 sSamusOam_FullSuit_Left_Standing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdd, 0x1ef, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_Shooting_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdd, 0x1ef, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_Shooting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdd, 0x1f0, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Left_DiagonalUp_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Left_DiagonalDown_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Left_Up_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_Up_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_Up_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Right_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_Standing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Right_DiagonalUp_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Right_DiagonalDown_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Right_Up_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_Up_Standing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_Up_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_Up_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Left_Crouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe6, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe6, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe6, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Left_DiagonalUp_Crouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe6, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe6, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe6, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Left_DiagonalDown_Crouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Right_Crouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe7, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe7, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Right_DiagonalUp_Crouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe2, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe2, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe6, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe3, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe6, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Right_DiagonalDown_Crouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe7, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe7, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe6, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Left_GettingKnockedBack_Frame0[OAM_DATA_SIZE(7)] = {
	0x7,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xde, 0x7, 0xb,
	0xd8, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe8, OBJ_SIZE_16x16 | 0x1fb, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f3, 0x6,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x8,
	OBJ_SHAPE_VERTICAL | 0xe0, OBJ_X_FLIP | 0x1f0, 0xa
};

const u16 sSamusOam_FullSuit_Left_GettingKnockedBack_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f7, 0x4,
	0xdf, 0x7, 0xa,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1eb, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1fb, 0x6,
	0xe6, 0x1f3, 0xb,
	0xe1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f2, 0x8
};


const u16 sSamusOam_FullSuit_Right_GettingKnockedBack_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x8, 0x8,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x4,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fd, 0x6,
	0xe2, 0x3, 0x9
};

const u16 sSamusOam_FullSuit_Right_GettingKnockedBack_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe1, OBJ_SIZE_16x16 | 0x1f6, 0x4,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x6, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f5, 0x0,
	0xde, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x6,
	0xe6, OBJ_X_FLIP | 0x5, 0x9,
	0xe2, 0x4, 0xa
};


const u16 sSamusOam_FullSuit_Left_Running_Speedboosting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_FullSuit_Left_Running_Speedboosting_Frame1[OAM_DATA_SIZE(7)] = {
	0x7,
	0xde, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	OBJ_SHAPE_VERTICAL | 0xde, 0x0, 0x6,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	0xe0, OBJ_SIZE_16x16 | 0x1f5, 0x4
};

const u16 sSamusOam_FullSuit_Left_Running_Speedboosting_Frame2[OAM_DATA_SIZE(7)] = {
	0x7,
	0xdc, OBJ_SIZE_16x16 | 0x1ee, 0x0,
	OBJ_SHAPE_VERTICAL | 0xdc, 0x1fe, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	OBJ_SHAPE_VERTICAL | 0xde, 0x1fd, 0x5
};

const u16 sSamusOam_FullSuit_Left_Running_Speedboosting_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1ee, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xe0, OBJ_SIZE_16x16 | 0x1f3, 0x4
};

const u16 sSamusOam_FullSuit_Left_Running_Speedboosting_Frame4[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a,
	0xe2, OBJ_SIZE_16x16 | 0x1f5, 0x4
};

const u16 sSamusOam_FullSuit_Left_Running_Speedboosting_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f9, 0x4
};

const u16 sSamusOam_FullSuit_Left_Running_Speedboosting_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe5, 0x1f5, 0x4
};

const u16 sSamusOam_FullSuit_Left_Running_Speedboosting_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18,
	0xde, OBJ_SIZE_16x16 | 0x1ec, 0x4
};

const u16 sSamusOam_FullSuit_Left_Running_Speedboosting_Frame8[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f5, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1ef, 0x6
};

const u16 sSamusOam_FullSuit_Left_Running_Speedboosting_Frame9[OAM_DATA_SIZE(7)] = {
	0x7,
	0xd8, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f5, 0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a,
	OBJ_SHAPE_HORIZONTAL | 0xe6, 0x1f5, 0x6
};


const u16 sSamusOam_FullSuit_Left_Forward_Running_Speedboosting_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xde, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	OBJ_SHAPE_VERTICAL | 0xde, 0x0, 0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Speedboosting_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1ee, 0x0,
	OBJ_SHAPE_VERTICAL | 0xdc, 0x1fe, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1ee, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Speedboosting_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Speedboosting_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Speedboosting_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f5, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14
};

const u16 sSamusOam_FullSuit_Left_Forward_Running_Speedboosting_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f5, 0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a
};


const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Speedboosting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Speedboosting_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xda, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f1, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Speedboosting_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Speedboosting_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xda, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Speedboosting_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Running_Speedboosting_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a
};


const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Speedboosting_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1f1, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x18,
	0xe8, 0xa, 0x1a
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Speedboosting_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Speedboosting_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Speedboosting_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Running_Speedboosting_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a
};


const u16 sSamusOam_FullSuit_Right_Running_Speedboosting_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xeb, 0x1fd, 0x4,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_FullSuit_Right_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1fe, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_Running_Speedboosting_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	OBJ_SHAPE_VERTICAL | 0xdc, 0x1fa, 0x4
};

const u16 sSamusOam_FullSuit_Right_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x2, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fd, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1ff, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_FullSuit_Right_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_FullSuit_Right_Running_Speedboosting_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe5, 0x1ff, 0x4
};

const u16 sSamusOam_FullSuit_Right_Running_Speedboosting_Frame7[OAM_DATA_SIZE(7)] = {
	0x7,
	0xe1, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd9, 0x1fe, 0x6,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18,
	0xe1, OBJ_SIZE_16x16 | 0x4, 0x4
};

const u16 sSamusOam_FullSuit_Right_Running_Speedboosting_Frame8[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdb, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xeb, 0x1fd, 0x6,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x2, 0x4
};

const u16 sSamusOam_FullSuit_Right_Running_Speedboosting_Frame9[OAM_DATA_SIZE(7)] = {
	0x7,
	0xdc, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xec, 0x1fb, 0x4,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a,
	0xe6, 0x3, 0x6
};


const u16 sSamusOam_FullSuit_Right_Forward_Running_Speedboosting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Speedboosting_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	OBJ_SHAPE_VERTICAL | 0xdc, 0x1fa, 0x4
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fd, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Speedboosting_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe5, 0x1ff, 0x4
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Speedboosting_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18,
	0xe1, OBJ_SIZE_16x16 | 0x4, 0x4
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Speedboosting_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x2, 0x4
};

const u16 sSamusOam_FullSuit_Right_Forward_Running_Speedboosting_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd9, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a,
	0xe6, 0x3, 0x4
};


const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Speedboosting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Speedboosting_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd7, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fd, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Speedboosting_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Speedboosting_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd7, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Speedboosting_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Running_Speedboosting_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a
};


const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Speedboosting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Speedboosting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Speedboosting_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Speedboosting_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fd, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Speedboosting_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ee, 0x1a
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Speedboosting_Frame6[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Speedboosting_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Speedboosting_Frame8[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Running_Speedboosting_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a
};


const u16 sSamusOam_FullSuit_Left_Skidding_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1ff, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xed, 0x1ff, 0xa,
	0xdd, OBJ_SIZE_16x16 | 0x1fe, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, 0xc,
	0xe7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x8
};

const u16 sSamusOam_FullSuit_Left_Skidding_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xee, 0x1f8, 0x8,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe8, OBJ_SIZE_16x16 | 0x1f9, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f9, 0xa,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f2, 0x6
};

const u16 sSamusOam_FullSuit_Left_Skidding_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xde, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xde, 0x5, 0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f1, 0x4
};

const u16 sSamusOam_FullSuit_Left_Armed_Skidding_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xde, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xee, 0x1f9, 0x8,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe8, OBJ_SIZE_16x16 | 0x1f9, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f9, 0xa,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f2, 0x6
};

const u16 sSamusOam_FullSuit_Left_Armed_Skidding_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xde, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xde, 0x5, 0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f1, 0x4
};


const u16 sSamusOam_FullSuit_Right_Skidding_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe7, OBJ_SIZE_16x16 | 0x1f0, 0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1f0, 0x6,
	0xdd, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f2, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1f8, 0xc,
	0xe3, OBJ_SIZE_16x16 | 0x1f7, 0xa
};

const u16 sSamusOam_FullSuit_Right_Skidding_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xde, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x4,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1f7, 0xa,
	0xe4, OBJ_SIZE_16x16 | 0x1fd, 0x8
};

const u16 sSamusOam_FullSuit_Right_Skidding_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe5, OBJ_SIZE_16x16 | 0x1ff, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};


const struct SamusAnimationData sSamusAnim_FullSuit_Left_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Forward_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_Forward_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Up_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Up_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Up_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Up_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Crouching[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_Crouching[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_Crouching[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_Crouching[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_Crouching[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_Crouching[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_GettingKnockedBack[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_GettingKnockedBack[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Forward_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Forward_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_Running_Speedboosting[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Skidding[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Armed_Skidding[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_Skidding[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Armed_Skidding[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const u8 sSamusGfx_Top_FullSuit_Left_DelayBeforeShinesparking_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DelayBeforeShinesparking_Frame0.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_MidAir_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_MidAir_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_MidAir_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_MidAir_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_MidAir_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_MidAir_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_MidAir_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_MidAir_Frame4.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_Landing_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Landing_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_None_Landing_Frame1[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_None_Landing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Left_Landing_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Left_Landing_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_None_Landing_Frame2[SAMUS_GFX_SIZE(7, 4)] = {
	7, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_None_Landing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Left_Landing_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Left_Landing_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Landing_Frame1[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Landing_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_DiagonalUp_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalUp_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_DiagonalDown_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalDown_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Up_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Up_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Down_MidAir_Frame0[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Down_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Left_Down_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Left_Down_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Left_Down_MidAir_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Left_Down_MidAir_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_DelayBeforeShinesparking_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_DelayBeforeShinesparking_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_None_Landing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_None_Landing_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_None_Landing_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_None_Landing_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Landing_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Landing_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_DiagonalUp_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalUp_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_DiagonalDown_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalDown_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Up_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Up_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Down_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Down_MidAir_Frame0.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_Right_Down_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Right_Down_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Right_Down_MidAir_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Right_Down_MidAir_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_StartingSpinJump_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_StartingSpinJump_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Spinning_Frame0[SAMUS_GFX_SIZE(6, 3)] = {
	6, 3,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Spinning_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Spinning_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Spinning_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Spinning_Frame2[SAMUS_GFX_SIZE(6, 3)] = {
	6, 3,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Spinning_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Spinning_Frame3[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Spinning_Frame3.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_StartingSpinJump_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_StartingSpinJump_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Spinning_Frame0[SAMUS_GFX_SIZE(6, 3)] = {
	6, 3,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Spinning_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Spinning_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Spinning_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Spinning_Frame2[SAMUS_GFX_SIZE(6, 3)] = {
	6, 3,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Spinning_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Spinning_Frame3[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Spinning_Frame3.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_DelayBeforeShinepsarking_Frame3[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DelayBeforeShinepsarking_Frame3.gfx")
};

const u8 sSamusGfx_Top_FullSuit_DelayBeforeShinepsarking_Frame3[SAMUS_GFX_SIZE(7, 4)] = {
	7, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_DelayBeforeShinepsarking_Frame3.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_StartingWallJump_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_StartingWallJump_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_StartingWallJump_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_StartingWallJump_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_StartingWallJump_Frame2[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_StartingWallJump_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_StartingWallJump_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_StartingWallJump_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_StartingWallJump_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_StartingWallJump_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_StartingWallJump_Frame2[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_StartingWallJump_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Shinesparking_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Shinesparking_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Shinesparking_Frame5[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Shinesparking_Frame5.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Shinesparking_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Shinesparking_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Shinesparking_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Shinesparking_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Shinesparking_Frame4[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Shinesparking_Frame4.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Shinesparking_Frame3[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Shinesparking_Frame3.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Shinesparking_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Shinesparking_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Shinesparking_Frame8[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Shinesparking_Frame8.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Shinesparking_Frame7[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Shinesparking_Frame7.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Shinesparking_Frame6[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Shinesparking_Frame6.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Sidewards_Shinesparking_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Sidewards_Shinesparking_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Sidewards_Shinesparking_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Sidewards_Shinesparking_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Sidewards_Shinesparking_Frame3[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Sidewards_Shinesparking_Frame3.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Sidewards_Shinesparking_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Sidewards_Shinesparking_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Sidewards_Shinesparking_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Sidewards_Shinesparking_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Sidewards_Shinesparking_Frame3[SAMUS_GFX_SIZE(9, 9)] = {
	9, 9,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Sidewards_Shinesparking_Frame3.gfx")
};


const u8 sSamusGfx_Top_FullSuit_SpaceJumping_Frame0[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SpaceJumping_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_SpaceJumping_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SpaceJumping_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_SpaceJumping_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SpaceJumping_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_SpaceJumping_Frame3[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SpaceJumping_Frame3.gfx")
};


const u16 sSamusOam_FullSuit_Left_DelayBeforeShinesparking_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	0xe1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x4
};

const u16 sSamusOam_FullSuit_Left_DelayBeforeShinesparking_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x4
};


const u16 sSamusOam_FullSuit_Left_None_Landing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xee, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x4
};

const u16 sSamusOam_FullSuit_Left_None_Landing_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe6, 0x1ef, 0x6,
	0xe6, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18,
	0xe7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f2, 0x4
};

const u16 sSamusOam_FullSuit_Left_None_Landing_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe1, 0x1ee, 0x6,
	0xe1, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1ee, 0x4
};


const u16 sSamusOam_FullSuit_Left_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_MidAir_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_MidAir_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_FullSuit_Left_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe6, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_Landing_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe5, 0x1ef, 0x4,
	0xe5, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Left_Landing_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, 0x1ee, 0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};


const u16 sSamusOam_FullSuit_Left_DiagonalUp_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_FullSuit_Left_DiagonalUp_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe2, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};


const u16 sSamusOam_FullSuit_Left_DiagonalDown_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_MidAir_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_FullSuit_Left_DiagonalDown_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};


const u16 sSamusOam_FullSuit_Left_Up_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd4, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_Up_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd5, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_Up_MidAir_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd4, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_Up_MidAir_Frame4[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd4, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_Up_MidAir_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd4, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_FullSuit_Left_Up_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe1, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Left_Up_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Left_Up_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};


const u16 sSamusOam_FullSuit_Left_Down_MidAir_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xf0, 0x1f7, 0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe1, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf1, OBJ_SIZE_16x16 | 0x1fc, 0x16
};


const u16 sSamusOam_FullSuit_DelayBeforeShinesparking_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x4,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_DelayBeforeShinesparking_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe2, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x4,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_FullSuit_Right_None_Landing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xee, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe8, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_None_Landing_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe8, OBJ_SIZE_16x16 | 0x1ff, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_None_Landing_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x2, 0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdd, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};


const u16 sSamusOam_FullSuit_Right_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Right_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Right_MidAir_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_FullSuit_Right_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdd, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};


const u16 sSamusOam_FullSuit_Right_DiagonalUp_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd5, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd6, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_MidAir_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd5, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_FullSuit_Right_DiagonalUp_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe2, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalUp_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdd, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};


const u16 sSamusOam_FullSuit_Right_DiagonalDown_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_MidAir_Frame4[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_FullSuit_Right_DiagonalDown_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdd, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};


const u16 sSamusOam_FullSuit_Right_Up_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd5, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Right_Up_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd6, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_FullSuit_Right_Up_Landing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe2, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_Up_Landing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_FullSuit_Right_Up_Landing_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdd, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};


const u16 sSamusOam_FullSuit_Right_Down_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe1, OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf1, OBJ_SIZE_16x16 | 0x1f4, 0x16
};


const u16 sSamusOam_FullSuit_Right_StartingSpinJump_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x4, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x5
};


const u16 sSamusOam_FullSuit_Left_Spinning_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1f5, 0x3,
	0xf3, 0x5, 0x5
};

const u16 sSamusOam_FullSuit_Left_Spinning_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f8, 0x4
};

const u16 sSamusOam_FullSuit_Left_Spinning_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1f3, 0x3,
	0xf3, 0x3, 0x5
};

const u16 sSamusOam_FullSuit_Left_Spinning_Frame3[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x1f0, 0x4
};

const u16 sSamusOam_FullSuit_Left_Spinning_Frame4[OAM_DATA_SIZE(4)] = {
	0x4,
	0xed, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_VERTICAL | 0xed, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe5, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fb, 0x3,
	0xe5, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f3, 0x5
};


const u16 sSamusOam_FullSuit_Spinning_Frame5[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f8, 0x4
};

const u16 sSamusOam_FullSuit_Spinning_Frame4[OAM_DATA_SIZE(4)] = {
	0x4,
	0xed, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1fd, 0x0,
	OBJ_SHAPE_VERTICAL | 0xed, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe5, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fd, 0x3,
	0xe5, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f5, 0x5
};

const u16 sSamusOam_FullSuit_Spinning_Frame7[OAM_DATA_SIZE(3)] = {
	0x3,
	0xf0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, OBJ_X_FLIP | OBJ_Y_FLIP | 0x8, 0x4
};


const u16 sSamusOam_FullSuit_StartingSpinJump_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x4, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x5
};


const u16 sSamusOam_FullSuit_Right_Spinning_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1f3, 0x3,
	0xf3, 0x3, 0x5
};

const u16 sSamusOam_FullSuit_Right_Spinning_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f8, 0x4
};

const u16 sSamusOam_FullSuit_Right_Spinning_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1f5, 0x3,
	0xf3, 0x5, 0x5
};

const u16 sSamusOam_FullSuit_Right_Spinning_Frame3[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x8, 0x4
};

const u16 sSamusOam_FullSuit_Right_Spinning_Frame6[OAM_DATA_SIZE(4)] = {
	0x4,
	0xed, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_VERTICAL | 0xed, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe5, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fb, 0x3,
	0xe5, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f3, 0x5
};

const u16 sSamusOam_FullSuit_Right_Spinning_Frame7[OAM_DATA_SIZE(3)] = {
	0x3,
	0xf0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f0, 0x4
};


const u16 sSamusOam_FullSuit_Left_DelayBeforeShinesparking_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe3, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xeb, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xfb, 0x1f7, 0x16,
	0xea, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x4
};

const u16 sSamusOam_FullSuit_Right_DelayBeforeShinesparking_Frame3[OAM_DATA_SIZE(6)] = {
	0x6,
	0xea, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_X_FLIP | 0x1f7, 0x4,
	0xeb, OBJ_X_FLIP | 0x1f7, 0x6,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xeb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xfb, OBJ_X_FLIP | 0x1f9, 0x16
};


const u16 sSamusOam_FullSuit_Right_StartingWallJump_Frame2[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x3
};

const u16 sSamusOam_FullSuit_Left_StartingWallJump_Frame2[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1fc, 0x3
};


const u16 sSamusOam_FullSuit_Shinesparking_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xd4, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x4
};

const u16 sSamusOam_FullSuit_Shinesparking_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd3, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd3, 0x4, 0x6,
	0xe3, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x4, 0x7,
	0xf3, OBJ_SIZE_16x16 | 0x1f4, 0x4
};

const u16 sSamusOam_FullSuit_Shinesparking_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd1, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd1, 0x3, 0x6,
	0xe1, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x3, 0x7,
	0xf1, OBJ_SIZE_16x16 | 0x1fb, 0x4
};

const u16 sSamusOam_FullSuit_Shinesparking_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd3, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd3, 0x4, 0x6,
	0xe3, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x4, 0x7,
	0xf3, OBJ_SIZE_16x16 | 0x1fc, 0x4
};

const u16 sSamusOam_FullSuit_Shinesparking_Frame7[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd1, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd1, 0x4, 0x6,
	0xe1, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x4, 0x7,
	0xf1, OBJ_SIZE_16x16 | 0x1f4, 0x4
};


const u16 sSamusOam_FullSuit_SpaceJumping_Frame0[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x4
};


const u16 sSamusOam_FullSuit_Left_Sidewards_Shinesparking_Frame2[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1eb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x16 | 0x1f3, 0x4
};

const u16 sSamusOam_FullSuit_Right_Sidewards_Shinesparking_Frame2[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x16 | 0x1ed, 0x4
};

const u16 sSamusOam_FullSuit_Right_Sidewards_Shinesparking_Frame3[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x16 | 0x1ed, 0x4,
	OBJ_SHAPE_VERTICAL | 0xf2, 0xd, 0x8
};


const u16 sSamusOam_FullSuit_Left_SpaceJumping_Frame4[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x4
};

const u16 sSamusOam_FullSuit_Right_SpaceJumping_Frame0[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x4
};

const u16 sSamusOam_FullSuit_Right_SpaceJumping_Frame4[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x4
};


const struct SamusAnimationData sSamusAnim_FullSuit_Left_None_MidAir[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_None_Landing[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_MidAir[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Landing[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_MidAir[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_Landing[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_MidAir[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_Landing[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Up_MidAir[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Up_Landing[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Down_MidAir[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_None_MidAir[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_None_Landing[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_MidAir[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Landing[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_MidAir[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_Landing[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_MidAir[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_Landing[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_Up_MidAir[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Up_Landing[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_Down_MidAir[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Spinning[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Spinning[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_StartingSpinJump[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_StartingSpinJump[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_DelayBeforeShinesparking[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DelayBeforeShinesparking[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_DelayAfterShinesparking[13] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[11] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[12] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DelayAfterShinesparking[13] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[11] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[12] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_StartingWallJump[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_StartingWallJump[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Shinesparking[10] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[9] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Shinesparking[10] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[9] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Sidewards_Shinesparking[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Sidewards_Shinesparking[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_ScrewAttacking[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_ScrewAttacking[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_SpaceJumping[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_SpaceJumping[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const u8 sSamusGfx_Top_FullSuit_Left_Morphing_Frame0[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Morphing_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Morphing_Frame0[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Morphing_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Morphball_Frame0[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Morphball_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Morphing_Frame1[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Morphing_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Morphball_Frame6[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Morphball_Frame6.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Morphball_Frame5[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Morphball_Frame5.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Morphball_Frame4[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Morphball_Frame4.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Morphball_Frame3[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Morphball_Frame3.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Morphball_Frame2[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Morphball_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Morphing_Frame1[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Morphing_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_TurningAround_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_TurningAround_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_TurningAround_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_TurningAround_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_TurningAround_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_TurningAround_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_DiagonalUp_TurningAround_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_DiagonalUp_TurningAround_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_DiagonalUp_TurningAround_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_DiagonalUp_TurningAround_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_DiagonalDown_TurningAround_Frame1[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_DiagonalDown_TurningAround_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_DiagonalDown_TurningAround_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_DiagonalDown_TurningAround_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Up_TurningAround_Frame1[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Up_TurningAround_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Up_TurningAround_Frame0[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Up_TurningAround_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_TurningAroundAndCrouching_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_TurningAroundAndCrouching_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_TurningAroundAndCrouching_Frame0[SAMUS_GFX_SIZE(3, 3)] = {
	3, 3,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_TurningAroundAndCrouching_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_TurningAroundAndCrouching_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_TurningAroundAndCrouching_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Down_TurningAroundMidAir_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Down_TurningAroundMidAir_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Down_TurningAroundMidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Down_TurningAroundMidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Down_TurningAroundMidAir_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Down_TurningAroundMidAir_Frame0.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_TurningAroundMidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_TurningAroundMidAir_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_FacingTheForeground_Frame0[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_FacingTheForeground_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_FacingTheForeground_Frame1[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_FacingTheForeground_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_FacingTheForeground_Frame2[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_FacingTheForeground_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_UsingAnElevator_Frame1[SAMUS_GFX_SIZE(12, 9)] = {
	12, 9,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_UsingAnElevator_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_TurningFromFacingTheForeground_Frame0[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_TurningFromFacingTheForeground_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_TurningFromFacingTheForeground_Frame0[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_TurningFromFacingTheForeground_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_TurningOnZipline_Frame1[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_TurningOnZipline_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_TurningOnZipline_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_TurningOnZipline_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_TurningOnZipline_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_TurningOnZipline_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_DiagonalDown_TurningOnZipline_Frame1[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_DiagonalDown_TurningOnZipline_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_DiagonalDown_TurningOnZipline_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_DiagonalDown_TurningOnZipline_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Down_TurningOnZipline_Frame1[SAMUS_GFX_SIZE(4, 3)] = {
	4, 3,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Down_TurningOnZipline_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Down_TurningOnZipline_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Down_TurningOnZipline_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_MorphballMotionless_Frame0[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_MorphballMotionless_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_MorphballMotionless_Frame1[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_MorphballMotionless_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_MorphballMotionless_Frame2[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_MorphballMotionless_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_MorphballMotionless_Frame3[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_MorphballMotionless_Frame3.gfx")
};


const u8 sSamusGfx_Top_FullSuit_SaveLoadingGame_Frame1[SAMUS_GFX_SIZE(10, 6)] = {
	10, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SaveLoadingGame_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_SaveLoadingGame_Frame2[SAMUS_GFX_SIZE(10, 6)] = {
	10, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SaveLoadingGame_Frame2.gfx")
};

const u8 sSamusGfx_Top_FullSuit_SaveLoadingGame_Frame3[SAMUS_GFX_SIZE(10, 6)] = {
	10, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SaveLoadingGame_Frame3.gfx")
};

const u8 sSamusGfx_Top_FullSuit_SaveLoadingGame_Frame4[SAMUS_GFX_SIZE(11, 6)] = {
	11, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SaveLoadingGame_Frame4.gfx")
};

const u8 sSamusGfx_Top_FullSuit_SaveLoadingGame_Frame5[SAMUS_GFX_SIZE(12, 6)] = {
	12, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SaveLoadingGame_Frame5.gfx")
};

const u8 sSamusGfx_Top_FullSuit_SaveLoadingGame_Frame6[SAMUS_GFX_SIZE(12, 6)] = {
	12, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SaveLoadingGame_Frame6.gfx")
};

const u8 sSamusGfx_Top_FullSuit_SaveLoadingGame_Frame7[SAMUS_GFX_SIZE(12, 6)] = {
	12, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SaveLoadingGame_Frame7.gfx")
};

const u8 sSamusGfx_Top_FullSuit_SaveLoadingGame_Frame8[SAMUS_GFX_SIZE(12, 6)] = {
	12, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SaveLoadingGame_Frame8.gfx")
};

const u8 sSamusGfx_Top_FullSuit_SaveLoadingGame_Frame9[SAMUS_GFX_SIZE(12, 6)] = {
	12, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SaveLoadingGame_Frame9.gfx")
};

const u8 sSamusGfx_Top_FullSuit_SaveLoadingGame_Frame10[SAMUS_GFX_SIZE(12, 6)] = {
	12, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_SaveLoadingGame_Frame10.gfx")
};


const u8 sSamusGfx_Top_FullSuit_DownloadingMapData_Frame0[SAMUS_GFX_SIZE(10, 8)] = {
	10, 8,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_DownloadingMapData_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DownloadingMapData_Frame0[SAMUS_GFX_SIZE(2, 0)] = {
	2, 0,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DownloadingMapData_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DownloadingMapData_Frame1[SAMUS_GFX_SIZE(3, 1)] = {
	3, 1,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DownloadingMapData_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DownloadingMapData_Frame2[SAMUS_GFX_SIZE(3, 3)] = {
	3, 3,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DownloadingMapData_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DownloadingMapData_Frame3[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DownloadingMapData_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DownloadingMapData_Frame4[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DownloadingMapData_Frame4.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DownloadingMapData_Frame5[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DownloadingMapData_Frame5.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DownloadingMapData_Frame6[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DownloadingMapData_Frame6.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_DownloadingMapData_Frame7[SAMUS_GFX_SIZE(4, 0)] = {
	4, 0,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_DownloadingMapData_Frame7.gfx")
};


const u16 sSamusOam_FullSuit_Left_Morphing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f6, 0x3,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x6, 0x2
};

const u16 sSamusOam_FullSuit_Left_Unmorphing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f6, 0x3,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x6, 0x2
};

const u16 sSamusOam_FullSuit_Rolling_Frame0[OAM_DATA_SIZE(2)] = {
	0x2,
	0xf0, 0x1f8, 0x2,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x0
};


const u16 sSamusOam_FullSuit_Right_Morphing_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	0xef, 0x1f8, 0x2,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x0
};


const u16 sSamusOam_FullSuit_Rolling_Frame6[OAM_DATA_SIZE(2)] = {
	0x2,
	0xee, 0x1f8, 0x2,
	0xee, OBJ_SIZE_16x16 | 0x1f8, 0x0
};

const u16 sSamusOam_FullSuit_Rolling_Frame5[OAM_DATA_SIZE(2)] = {
	0x2,
	0xef, 0x1f8, 0x2,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x0
};

const u16 sSamusOam_FullSuit_Rolling_Frame4[OAM_DATA_SIZE(2)] = {
	0x2,
	0xf0, 0x1f8, 0x2,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x0
};

const u16 sSamusOam_FullSuit_Rolling_Frame3[OAM_DATA_SIZE(2)] = {
	0x2,
	0xef, 0x1f8, 0x2,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x0
};

const u16 sSamusOam_FullSuit_Rolling_Frame2[OAM_DATA_SIZE(2)] = {
	0x2,
	0xee, 0x1f8, 0x2,
	0xee, OBJ_SIZE_16x16 | 0x1f8, 0x0
};


const u16 sSamusOam_FullSuit_Left_Morphing_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	0xef, 0x1f8, 0x2,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x0
};

const u16 sSamusOam_FullSuit_Right_Unmorphing_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fa, 0x3,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f2, 0x2
};

const u16 sSamusOam_FullSuit_Right_Morphing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fa, 0x3,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f2, 0x2
};


const u16 sSamusOam_FullSuit_TurningAround_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x16 | 0x1ee, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_TurningAround_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_DiagonalUp_TurningAround_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd7, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_DiagonalUp_TurningAround_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd7, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_DiagonalDown_TurningAround_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdb, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	0xeb, 0x1f7, 0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_DiagonalDown_TurningAround_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdb, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xeb, 0x1fa, 0x4,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_Up_TurningAround_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd4, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Up_TurningAround_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd4, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_FullSuit_TurningAroundAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_SIZE_32x16 | 0x1ee, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x16
};

const u16 sSamusOam_FullSuit_TurningAroundAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f4, 0x16
};


const u16 sSamusOam_FullSuit_DiagonalUp_TurningAroundAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x16
};

const u16 sSamusOam_FullSuit_DiagonalUp_TurningAroundAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f4, 0x16
};


const u16 sSamusOam_FullSuit_DiagonalDown_TurningAroundAndCrouching_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	0xf6, 0x1f7, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x16
};

const u16 sSamusOam_FullSuit_DiagonalDown_TurningAroundAndCrouching_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf6, 0x1fa, 0x4,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f4, 0x16
};


const u16 sSamusOam_FullSuit_Down_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xed, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_VERTICAL | 0xdd, 0x7, 0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fa, 0x16
};

const u16 sSamusOam_FullSuit_Down_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xed, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_VERTICAL | 0xdd, 0x1f1, 0x4,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x16
};


const u16 sSamusOam_FullSuit_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd9, OBJ_SIZE_32x16 | 0x1ee, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_FullSuit_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd9, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x16
};


const u16 sSamusOam_FullSuit_DiagonalUp_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd5, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_FullSuit_DiagonalUp_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd5, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x16
};


const u16 sSamusOam_FullSuit_DiagonalDown_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xd9, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe9, 0x1f8, 0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_FullSuit_DiagonalDown_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xd9, OBJ_SIZE_32x16 | 0x1f1, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f9, 0x4,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x16
};


const u16 sSamusOam_FullSuit_Up_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd1, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_FullSuit_Up_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd1, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x16
};


const u16 sSamusOam_FullSuit_FacingTheForeground_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x6,
	0xf8, 0x4, 0x8
};


const u16 sSamusOam_FullSuit_UsingAnElevator_Frame1[OAM_DATA_SIZE(8)] = {
	0x8,
	0xe8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f7, 0x9,
	0xf8, 0x7, 0xb,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f4, 0x4,
	OBJ_SHAPE_VERTICAL | 0xd9, 0x4, 0x6,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x1f4, 0x7,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x4, 0x8
};

const u16 sSamusOam_FullSuit_UsingAnElevator_Frame2[OAM_DATA_SIZE(8)] = {
	0x8,
	0xe8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f7, 0x9,
	0xf8, 0x7, 0xb,
	0xe5, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xd9, OBJ_SIZE_16x16 | 0x1f4, 0x4,
	OBJ_SHAPE_VERTICAL | 0xd9, 0x4, 0x6,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x1f4, 0x7,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x4, 0x8
};


const u16 sSamusOam_FullSuit_GoingUp_UsingAnElevator_Frame0[OAM_DATA_SIZE(8)] = {
	0x8,
	0xe8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f7, 0x9,
	0xf8, 0x7, 0xb,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xd7, OBJ_SIZE_16x16 | 0x1f4, 0x4,
	OBJ_SHAPE_VERTICAL | 0xd7, 0x4, 0x6,
	OBJ_SHAPE_VERTICAL | 0xe7, 0x1f4, 0x7,
	OBJ_SHAPE_VERTICAL | 0xe7, 0x4, 0x8
};


const u16 sSamusOam_FullSuit_Left_TurningFromFacingTheForeground_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x3, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x3, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f3, 0x6,
	0xf8, 0x3, 0x8
};

const u16 sSamusOam_FullSuit_Right_TurningFromFacingTheForeground_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x5, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x5, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f5, 0x6,
	0xf8, 0x5, 0x8
};


const u16 sSamusOam_FullSuit_TurningOnZipline_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fa, 0x4,
	0xe4, 0x1fa, 0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x2
};

const u16 sSamusOam_FullSuit_TurningOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1fe, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, OBJ_X_FLIP | 0x1fe, 0x4
};


const u16 sSamusOam_FullSuit_DiagonalDown_TurningOnZipline_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fa, 0x4,
	0xe4, 0x1fa, 0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f1, 0x2
};

const u16 sSamusOam_FullSuit_DiagonalDown_TurningOnZipline_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, 0x1ff, 0x5,
	0xe5, OBJ_SIZE_16x16 | 0x1ff, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, OBJ_X_FLIP | 0x1fe, 0x4
};


const u16 sSamusOam_FullSuit_Down_TurningOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fa, 0x2,
	0xe4, 0x1fa, 0x3,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f9, 0x16
};

const u16 sSamusOam_FullSuit_Down_TurningOnZipline_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1f8, 0x4,
	OBJ_SHAPE_VERTICAL | 0xe6, 0x0, 0x2,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, OBJ_X_FLIP | 0x1fe, 0x3
};


const u16 sSamusOam_FullSuit_MorphballMotionless_Frame3[OAM_DATA_SIZE(2)] = {
	0x2,
	0xf0, 0x1f8, 0x2,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x0
};


const u16 sSamusOam_FullSuit_Shinesparking_Frame4[OAM_DATA_SIZE(2)] = {
	0x2,
	0xf0, 0x1f8, 0x2,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x0
};

const u16 sSamusOam_FullSuit_Shinesparking_Frame2[OAM_DATA_SIZE(2)] = {
	0x2,
	0xf0, 0x1f8, 0x2,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x0
};


const u16 sSamusOam_FullSuit_SavingLoadingGame_Frame1[OAM_DATA_SIZE(8)] = {
	0x8,
	0xf8, 0x1f8, 0x1008,
	0xf8, OBJ_X_FLIP | 0x1, 0x1008,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x6,
	0xf8, 0x4, 0x9
};

const u16 sSamusOam_FullSuit_SavingLoadingGame_Frame3[OAM_DATA_SIZE(8)] = {
	0x8,
	0xf0, 0x1f9, 0x1008,
	0xf0, OBJ_X_FLIP | 0x0, 0x1008,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x6,
	0xf8, 0x4, 0x9
};

const u16 sSamusOam_FullSuit_SavingLoadingGame_Frame4[OAM_DATA_SIZE(7)] = {
	0x7,
	OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f6, 0x1006,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x8,
	0xf8, 0x4, 0xa
};

const u16 sSamusOam_FullSuit_SavingLoadingGame_Frame5[OAM_DATA_SIZE(8)] = {
	0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f4, 0x1006,
	0xe8, 0x4, 0x100a,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x8,
	0xf8, 0x4, 0xb
};

const u16 sSamusOam_FullSuit_SavingLoadingGame_Frame7[OAM_DATA_SIZE(8)] = {
	0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f4, 0x1006,
	0xe0, 0x4, 0x100a,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x8,
	0xf8, 0x4, 0xb
};

const u16 sSamusOam_FullSuit_SavingLoadingGame_Frame9[OAM_DATA_SIZE(8)] = {
	0x8,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f4, 0x1006,
	0xd8, 0x4, 0x100a,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x8,
	0xf8, 0x4, 0xb
};


const u16 sSamusOam_FullSuit_DownloadingMapData_Frame9[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1ee, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_FullSuit_DownloadingMapData_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1eb, 0x1015,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x1fb, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_FullSuit_DownloadingMapData_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f2, 0x1014,
	OBJ_SHAPE_VERTICAL | 0xdb, 0x2, 0x1016,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_FullSuit_DownloadingMapData_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x1016,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_FullSuit_DownloadingMapData_Frame4[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x1014,
	0xe9, OBJ_SIZE_16x16 | 0x1f7, 0x1016,
	0xf1, 0x1ef, 0x1018,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_FullSuit_DownloadingMapData_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x8 | 0x1f2, 0x1018,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_FullSuit_DownloadingMapData_Frame6[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};

const u16 sSamusOam_FullSuit_DownloadingMapData_Frame7[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f2, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f7, 0x8,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x4
};


const struct SamusAnimationData sSamusAnim_FullSuit_Left_Morphing[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Morphball[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Unmorphing[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_Morphing[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Morphball[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Unmorphing[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Up_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Up_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Down_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Down_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Up_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Up_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_FacingTheForeground[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_UsingAnElevator[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 255,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_GoingUp_UsingAnElevator[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 255,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_TurningFromFacingTheForeground[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_TurningFromFacingTheForeground[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_TurningOnZipline[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_TurningOnZipline[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Down_TurningOnZipline[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_TurningOnZipline[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_TurningOnZipline[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Down_TurningOnZipline[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_MorphballMotioness[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_Ballsparking[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Ballsparking[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_SavingLoadingGame[12] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[11] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_DownloadingMapData[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_27f430[12] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[11] = SAMUS_ANIM_TERMINATOR
};

const u8 sSamusGfx_Top_FullSuit_Left_HangingOnLedge_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_HangingOnLedge_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Left_HangingOnLedge_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Left_HangingOnLedge_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_HangingOnLedge_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_HangingOnLedge_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Left_HangingOnLedge_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Left_HangingOnLedge_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_HangingOnLedge_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_HangingOnLedge_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Left_HangingOnLedge_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Left_HangingOnLedge_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_PullingYourselfUpFromHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_PullingYourselfUpFromHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_PullingYourselfUpFromHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_PullingYourselfUpFromHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_PullingYourselfUpFromHanging_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_PullingYourselfUpFromHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_PullingYourselfUpFromHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_PullingYourselfUpFromHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_PullingYourselfUpFromHanging_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_PullingYourselfUpFromHanging_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_PullingYourselfUpFromHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_PullingYourselfUpFromHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_PullingYourselfUpForwardFromHanging_Frame0[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_PullingYourselfUpForwardFromHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_PullingYourselfUpForwardFromHanging_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_PullingYourselfUpForwardFromHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_PullingYourselfUpForwardFromHanging_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_PullingYourselfUpForwardFromHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_PullingYourselfUpForwardFromHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_PullingYourselfUpForwardFromHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_PullingYourselfUpForwardFromHanging_Frame2[SAMUS_GFX_SIZE(7, 4)] = {
	7, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_PullingYourselfUpForwardFromHanging_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_PullingYourselfUpForwardFromHanging_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_PullingYourselfUpForwardFromHanging_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_PullingYourselfUpForwardFromHanging_Frame3[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_PullingYourselfUpForwardFromHanging_Frame3.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_TurningToAimWhileHanging_Frame0[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_TurningToAimWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Right_TurningToAimWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Right_TurningToAimWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Right_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Right_AimingWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_DiagonalUp_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalUp_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_DiagonalDown_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalDown_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Up_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Up_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Down_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Down_AimingWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_HangingOnLedge_Frame0[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_HangingOnLedge_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Right_HangingOnLedge_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Right_HangingOnLedge_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_HangingOnLedge_Frame1[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_HangingOnLedge_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Right_HangingOnLedge_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Right_HangingOnLedge_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_HangingOnLedge_Frame2[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_HangingOnLedge_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Right_HangingOnLedge_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Right_HangingOnLedge_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_PullingYourselfUpFromHanging_Frame0[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_PullingYourselfUpFromHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_PullingYourselfUpFromHanging_Frame1[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_PullingYourselfUpFromHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_PullingYourselfUpFromHanging_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_PullingYourselfUpFromHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_PullingYourselfForwardFromHanging_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_PullingYourselfForwardFromHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_PullingYourselfForwardFromHanging_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_PullingYourselfForwardFromHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_TurningToAimWhileHanging_Frame0[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_TurningToAimWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Left_TurningToAimWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Left_TurningToAimWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Left_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Left_AimingWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_DiagonalUp_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalUp_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_DiagonalDown_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalDown_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Up_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Up_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Down_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Down_AimingWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_OnZipline_Frame0[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_OnZipline_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_OnZipline_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_OnZipline_Frame0.gfx")
};


const u8 sSamusGfx_Bottom_FullSuit_ShootingOnZipline_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_ShootingOnZipline_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_DiagonalDown_OnZipline_Frame0[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalDown_OnZipline_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Down_OnZipline_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Down_OnZipline_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Down_OnZipline_Frame0[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Down_OnZipline_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_OnZipline_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_OnZipline_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_DiagonalDown_OnZipline_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalDown_OnZipline_Frame0.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Down_OnZipline_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Down_OnZipline_Frame0.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Right_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Right_AimingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_AimingWhileHanging_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Right_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Right_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_DiagonalUp_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalUp_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_DiagonalUp_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalUp_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_DiagonalDown_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalDown_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_DiagonalDown_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_DiagonalDown_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Up_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Up_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Up_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Up_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Right_Down_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Down_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Right_Down_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Right_Down_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Left_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Left_AimingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_AimingWhileHanging_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_FullSuit_Left_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/full_suit/Bottom_Left_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_DiagonalUp_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalUp_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_DiagonalUp_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalUp_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_DiagonalDown_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalDown_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_DiagonalDown_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_DiagonalDown_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Up_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Up_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Up_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Up_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_FullSuit_Left_Down_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Down_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_FullSuit_Left_Down_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/full_suit/Top_Left_Down_AimingWhileHanging_Frame2.gfx")
};


const u16 sSamusOam_FullSuit_Left_HangingOnLedge_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xe7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x4
};


const u16 sSamusOam_FullSuit_Left_PullingYourselfUpFromHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x4
};

const u16 sSamusOam_FullSuit_Left_PullingYourselfUpFromHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe3, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xe1, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe8, OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf8, OBJ_SIZE_16x16 | 0x1fa, 0x16,
	0xeb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x4
};

const u16 sSamusOam_FullSuit_Left_PullingYourselfUpFromHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdf, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe1, OBJ_SIZE_16x16 | 0x1fd, 0x14,
	0xf1, OBJ_SIZE_16x16 | 0x1fd, 0x16,
	0xe9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x4
};


const u16 sSamusOam_FullSuit_Left_PullingYourselfUpForwardFromHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xec, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xfc, 0x0, 0x6,
	0xe8, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1fe, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x16 | 0x1f6, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x4
};

const u16 sSamusOam_FullSuit_Left_PullingYourselfUpForwardFromHanging_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1ed, 0x4
};

const u16 sSamusOam_FullSuit_Left_PullingYourselfUpForwardFromHanging_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe5, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xe5, 0x1ed, 0x6,
	0xe2, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1ec, 0x4
};

const u16 sSamusOam_FullSuit_Left_PullingYourselfUpForwardFromHanging_Frame3[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe0, 0x1ee, 0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1ed, 0x4
};


const u16 sSamusOam_FullSuit_Right_TurningToAimWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fe, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xef, OBJ_X_FLIP | 0x1fe, 0x6
};

const u16 sSamusOam_FullSuit_Right_AimingWhileHanging_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};


const u16 sSamusOam_FullSuit_Right_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};

const u16 sSamusOam_FullSuit_Right_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};


const u16 sSamusOam_FullSuit_Right_Up_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xdf, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};

const u16 sSamusOam_FullSuit_Right_Up_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdf, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};


const u16 sSamusOam_FullSuit_Right_Down_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};

const u16 sSamusOam_FullSuit_Right_Down_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16
};


const u16 sSamusOam_FullSuit_Right_HangingOnLedge_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xef, 0x1f7, 0x6,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x4
};


const u16 sSamusOam_FullSuit_Right_PullingYourselfUpFromHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xec, 0x1fa, 0x6,
	0xda, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xe1, OBJ_SIZE_16x16 | 0x0, 0x4
};

const u16 sSamusOam_FullSuit_Right_PullingYourselfUpFromHanging_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe3, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1fc, 0x6,
	0xe1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x16,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x4
};

const u16 sSamusOam_FullSuit_Right_PullingYourselfUpFromHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf1, 0x1fd, 0x4,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x14,
	0xf1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x16
};


const u16 sSamusOam_FullSuit_Right_PullingYourselfUpForwardFromHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xea, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xfa, 0x1fa, 0x4,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xea, OBJ_X_FLIP | 0x1f2, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ea, 0x14
};

const u16 sSamusOam_FullSuit_Right_PullingYourselfUpForwardFromHanging_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe9, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe9, 0xb, 0x4,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_PullingYourselfUpForwardFromHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x4, 0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_FullSuit_Right_PullingYourselfUpForwardFromHanging_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x3, 0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdd, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};


const u16 sSamusOam_FullSuit_Left_TurningToAimWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xef, 0x1f2, 0x6,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x4
};

const u16 sSamusOam_FullSuit_Left_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd9, 0x1f7, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};


const u16 sSamusOam_FullSuit_Left_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd9, 0x1f7, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_FullSuit_Left_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd9, 0x1f8, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1, 0x2
};


const u16 sSamusOam_FullSuit_Left_DiagonalUp_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x4
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x4
};

const u16 sSamusOam_FullSuit_Left_DiagonalUp_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xda, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1, 0x4
};


const u16 sSamusOam_FullSuit_Left_DiagonalDown_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xde, 0x1f7, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xde, 0x1f7, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_FullSuit_Left_DiagonalDown_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xdd, 0x1f8, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1, 0x2
};


const u16 sSamusOam_FullSuit_Left_Up_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xda, 0x1f9, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_FullSuit_Left_Up_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xda, 0x1f9, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdf, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_FullSuit_Left_Up_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xdb, 0x1f9, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdf, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1, 0x2
};


const u16 sSamusOam_FullSuit_Left_Down_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x1f9, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_FullSuit_Left_Down_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x1f9, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x2
};

const u16 sSamusOam_FullSuit_Left_Down_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xdf, 0x1f9, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1, 0x2
};


const u16 sSamusOam_FullSuit_Left_OnZipline_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, 0x1fd, 0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_ShootingOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, 0x1fd, 0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_ShootingOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, 0x1fe, 0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1fe, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_FullSuit_Left_DiagonalDown_OnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, 0x1fd, 0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_DiagonaDown_ShootingOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, 0x1fd, 0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_FullSuit_Left_DiagonaDown_ShootingOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, 0x1fe, 0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1fe, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1fc, 0x16
};


const u16 sSamusOam_FullSuit_Left_Down_OnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, 0x1fd, 0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_FullSuit_Left_Down_ShootingOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, 0x1fd, 0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_FullSuit_Left_Down_ShootingOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, 0x1fe, 0x4,
	0xdc, OBJ_SIZE_16x16 | 0x1fe, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1fd, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1fd, 0x16
};


const u16 sSamusOam_FullSuit_Right_OnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fb, 0x4
};

const u16 sSamusOam_FullSuit_Right_ShootingOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fb, 0x4
};

const u16 sSamusOam_FullSuit_Right_ShootingOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fa, 0x4
};


const u16 sSamusOam_FullSuit_Right_DiagonalDown_OnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fb, 0x4
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_ShootingOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fb, 0x4
};

const u16 sSamusOam_FullSuit_Right_DiagonalDown_ShootingOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fa, 0x4
};


const u16 sSamusOam_FullSuit_Right_Down_OnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fb, 0x4
};

const u16 sSamusOam_FullSuit_Right_Down_ShootingOnZipline_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fb, 0x4
};

const u16 sSamusOam_FullSuit_Right_Down_ShootingOnZipline_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd4, 0x1fa, 0x4
};


const struct SamusAnimationData sSamusAnim_FullSuit_Left_HangingOnLedge[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_PullingYourselfUpFromHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_PullingYourselfForwardFromHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_TurningToAimWhileHanging[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Up_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Down_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalUp_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Up_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Down_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_HangingOnLedge[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_PullingYourselfUpFromHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_PullingYourselfForwardFromHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_TurningToAimWhileHanging[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Up_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Down_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalUp_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Up_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Down_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_OnZipline[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_OnZipline[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Down_OnZipline[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Left_ShootingOnZipline[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_DiagonalDown_ShootingOnZipline[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Left_Down_ShootingOnZipline[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_OnZipline[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_OnZipline[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Down_OnZipline[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_FullSuit_Right_ShootingOnZipline[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_DiagonalDown_ShootingOnZipline[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_FullSuit_Right_Down_ShootingOnZipline[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const u8 sSamusEffectGfx_Speedboosting_Frame0[SAMUS_GFX_SIZE(5, 0)] = {
	5, 0,
	_INCBIN_U8("data/samus/graphics/effects/Speedboosting_Frame0.gfx")
};

const u8 sSamusEffectGfx_Speedboosting_Frame1[SAMUS_GFX_SIZE(5, 0)] = {
	5, 0,
	_INCBIN_U8("data/samus/graphics/effects/Speedboosting_Frame1.gfx")
};

const u8 sSamusEffectGfx_Speedboosting_Frame2[SAMUS_GFX_SIZE(5, 0)] = {
	5, 0,
	_INCBIN_U8("data/samus/graphics/effects/Speedboosting_Frame2.gfx")
};

const u8 sSamusEffectGfx_Speedboosting_Frame3[SAMUS_GFX_SIZE(6, 0)] = {
	6, 0,
	_INCBIN_U8("data/samus/graphics/effects/Speedboosting_Frame3.gfx")
};

const u8 sSamusEffectGfx_Speedboosting_Frame4[SAMUS_GFX_SIZE(5, 0)] = {
	5, 0,
	_INCBIN_U8("data/samus/graphics/effects/Speedboosting_Frame4.gfx")
};

const u8 sSamusEffectGfx_Speedboosting_Frame5[SAMUS_GFX_SIZE(6, 0)] = {
	6, 0,
	_INCBIN_U8("data/samus/graphics/effects/Speedboosting_Frame5.gfx")
};

const u8 sSamusEffectGfx_Speedboosting_Frame6[SAMUS_GFX_SIZE(6, 0)] = {
	6, 0,
	_INCBIN_U8("data/samus/graphics/effects/Speedboosting_Frame6.gfx")
};

const u8 sSamusEffectGfx_Speedboosting_Frame7[SAMUS_GFX_SIZE(4, 0)] = {
	4, 0,
	_INCBIN_U8("data/samus/graphics/effects/Speedboosting_Frame7.gfx")
};

const u8 sSamusEffectGfx_Speedboosting_Frame8[SAMUS_GFX_SIZE(4, 0)] = {
	4, 0,
	_INCBIN_U8("data/samus/graphics/effects/Speedboosting_Frame8.gfx")
};

const u8 sSamusEffectGfx_Speedboosting_Frame9[SAMUS_GFX_SIZE(4, 0)] = {
	4, 0,
	_INCBIN_U8("data/samus/graphics/effects/Speedboosting_Frame9.gfx")
};


const u8 sSamusEffectGfx_DelayBeforeBallsparking_Frame0[SAMUS_GFX_SIZE(1, 0)] = {
	1, 0,
	_INCBIN_U8("data/samus/graphics/effects/DelayBeforeBallsparking_Frame0.gfx")
};

const u8 sSamusEffectGfx_DelayBeforeBallsparking_Frame1[SAMUS_GFX_SIZE(2, 0)] = {
	2, 0,
	_INCBIN_U8("data/samus/graphics/effects/DelayBeforeBallsparking_Frame1.gfx")
};

const u8 sSamusEffectGfx_DelayBeforeBallsparking_Frame2[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/effects/DelayBeforeBallsparking_Frame2.gfx")
};

const u8 sSamusEffectGfx_DelayBeforeBallsparking_Frame3[SAMUS_GFX_SIZE(5, 2)] = {
	5, 2,
	_INCBIN_U8("data/samus/graphics/effects/DelayBeforeBallsparking_Frame3.gfx")
};

const u8 sSamusEffectGfx_DelayBeforeBallsparking_Frame4[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/effects/DelayBeforeBallsparking_Frame4.gfx")
};

const u8 sSamusEffectGfx_DelayBeforeBallsparking_Frame5[SAMUS_GFX_SIZE(10, 3)] = {
	10, 3,
	_INCBIN_U8("data/samus/graphics/effects/DelayBeforeBallsparking_Frame5.gfx")
};

const u8 sSamusEffectGfx_DelayBeforeBallsparking_Frame6[SAMUS_GFX_SIZE(6, 1)] = {
	6, 1,
	_INCBIN_U8("data/samus/graphics/effects/DelayBeforeBallsparking_Frame6.gfx")
};

const u8 sSamusEffectGfx_DelayBeforeBallsparking_Frame7[SAMUS_GFX_SIZE(3, 1)] = {
	3, 1,
	_INCBIN_U8("data/samus/graphics/effects/DelayBeforeBallsparking_Frame7.gfx")
};


const u8 sSamusEffectGfx_Sidewards_Shinesparking_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/effects/Sidewards_Shinesparking_Frame0.gfx")
};

const u8 sSamusEffectGfx_Sidewards_Shinesparking_Frame1[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/effects/Sidewards_Shinesparking_Frame1.gfx")
};

const u8 sSamusEffectGfx_Sidewards_Shinesparking_Frame2[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/effects/Sidewards_Shinesparking_Frame2.gfx")
};


const u8 sSamusEffectGfx_Diagonal_Shinesparking_Frame0[SAMUS_GFX_SIZE(9, 8)] = {
	9, 8,
	_INCBIN_U8("data/samus/graphics/effects/Diagonal_Shinesparking_Frame0.gfx")
};

const u8 sSamusEffectGfx_Diagonal_Shinesparking_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/effects/Diagonal_Shinesparking_Frame1.gfx")
};

const u8 sSamusEffectGfx_Diagonal_Shinesparking_Frame2[SAMUS_GFX_SIZE(7, 5)] = {
	7, 5,
	_INCBIN_U8("data/samus/graphics/effects/Diagonal_Shinesparking_Frame2.gfx")
};


const u8 sSamusEffectGfx_Up_Shinesparking_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/effects/Up_Shinesparking_Frame0.gfx")
};

const u8 sSamusEffectGfx_Up_Shinesparking_Frame1[SAMUS_GFX_SIZE(3, 3)] = {
	3, 3,
	_INCBIN_U8("data/samus/graphics/effects/Up_Shinesparking_Frame1.gfx")
};

const u8 sSamusEffectGfx_Up_Shinesparking_Frame2[SAMUS_GFX_SIZE(3, 3)] = {
	3, 3,
	_INCBIN_U8("data/samus/graphics/effects/Up_Shinesparking_Frame2.gfx")
};


const u8 sSamusEffectGfx_ScrewAttacking_Frame0[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/effects/ScrewAttacking_Frame0.gfx")
};

const u8 sSamusEffectGfx_ScrewAttacking_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/effects/ScrewAttacking_Frame2.gfx")
};

const u8 sSamusEffectGfx_ScrewAttacking_Frame4[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/effects/ScrewAttacking_Frame4.gfx")
};

const u8 sSamusEffectGfx_ScrewAttacking_Frame6[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/effects/ScrewAttacking_Frame6.gfx")
};


const u8 sSamusEffectGfx_StoringShinespark_Frame0[SAMUS_GFX_SIZE(2, 0)] = {
	2, 0,
	_INCBIN_U8("data/samus/graphics/effects/StoringShinespark_Frame0.gfx")
};

const u8 sSamusEffectGfx_StoringShinespark_Frame1[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/effects/StoringShinespark_Frame1.gfx")
};

const u8 sSamusEffectGfx_StoringShinespark_Frame2[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/effects/StoringShinespark_Frame2.gfx")
};

const u8 sSamusEffectGfx_StoringShinespark_Frame3[SAMUS_GFX_SIZE(4, 0)] = {
	4, 0,
	_INCBIN_U8("data/samus/graphics/effects/StoringShinespark_Frame3.gfx")
};

const u8 sSamusEffectGfx_StoringShinespark_Frame4[SAMUS_GFX_SIZE(2, 0)] = {
	2, 0,
	_INCBIN_U8("data/samus/graphics/effects/StoringShinespark_Frame4.gfx")
};

const u8 sSamusEffectGfx_StoringShinespark_Frame5[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/effects/StoringShinespark_Frame5.gfx")
};


const u16 sSamusEffectOam_Left_Speedboosting_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xd8, 0x1f8, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xf0, 0x8, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f0, 0x44
};

const u16 sSamusEffectOam_Left_Speedboosting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, 0x1f8, 0x44,
	0xf0, 0x18, 0x45,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f0, 0x42,
	0xe8, 0x0, 0x46
};

const u16 sSamusEffectOam_Left_Speedboosting_Frame2[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f8, 0x42,
	0xe0, 0x0, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x0, 0x44
};

const u16 sSamusEffectOam_Left_Speedboosting_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f8, 0x42,
	0xd8, 0x8, 0x44,
	0xe0, 0x0, 0x45,
	0xf8, 0x1f0, 0x46,
	0xe8, 0x10, 0x47
};

const u16 sSamusEffectOam_Left_Speedboosting_Frame4[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x8, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x0, 0x44,
	0xf8, 0x1f0, 0x46
};

const u16 sSamusEffectOam_Left_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x0, 0x42,
	0xe0, 0x10, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f0, 0x44,
	0xd8, 0x18, 0x47
};

const u16 sSamusEffectOam_Left_Speedboosting_Frame6[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf0, 0x1f8, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f0, 0x42,
	0xf8, 0x0, 0x47,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x10, 0x44
};

const u16 sSamusEffectOam_Left_Speedboosting_Frame7[OAM_DATA_SIZE(3)] = {
	0x3,
	0xf0, 0x1f8, 0x44,
	0xe0, 0x20, 0x45,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x0, 0x42
};

const u16 sSamusEffectOam_Left_Speedboosting_Frame8[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f8, 0x42,
	0xf8, 0x10, 0x44,
	0xe8, 0x1f0, 0x45
};

const u16 sSamusEffectOam_Left_Speedboosting_Frame9[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f8, 0x42,
	0xf0, 0x8, 0x44,
	0xe8, 0x1f0, 0x45
};


const u16 sSamusEffectOam_Right_Speedboosting_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	0xd8, OBJ_X_FLIP | 0x0, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | 0x1e8, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x0, 0x44
};

const u16 sSamusEffectOam_Right_Speedboosting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd8, OBJ_X_FLIP | 0x0, 0x44,
	0xf0, OBJ_X_FLIP | 0x1e0, 0x45,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x0, 0x42,
	0xe8, OBJ_X_FLIP | 0x1f8, 0x46
};

const u16 sSamusEffectOam_Right_Speedboosting_Frame2[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_X_FLIP | 0x1f8, 0x42,
	0xe0, OBJ_X_FLIP | 0x1f8, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f0, 0x44
};

const u16 sSamusEffectOam_Right_Speedboosting_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_X_FLIP | 0x1f8, 0x42,
	0xd8, OBJ_X_FLIP | 0x1f0, 0x44,
	0xe0, OBJ_X_FLIP | 0x1f8, 0x45,
	0xf8, OBJ_X_FLIP | 0x8, 0x46,
	0xe8, OBJ_X_FLIP | 0x1e8, 0x47
};

const u16 sSamusEffectOam_Right_Speedboosting_Frame4[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_X_FLIP | 0x1e8, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f0, 0x44,
	0xf8, OBJ_X_FLIP | 0x8, 0x46
};

const u16 sSamusEffectOam_Right_Speedboosting_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f0, 0x42,
	0xe0, OBJ_X_FLIP | 0x1e8, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x0, 0x44,
	0xd8, OBJ_X_FLIP | 0x1e0, 0x47
};

const u16 sSamusEffectOam_Right_Speedboosting_Frame6[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf0, OBJ_X_FLIP | 0x0, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x0, 0x42,
	0xf8, OBJ_X_FLIP | 0x1f8, 0x47,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1e0, 0x44
};

const u16 sSamusEffectOam_Right_Speedboosting_Frame7[OAM_DATA_SIZE(3)] = {
	0x3,
	0xf0, OBJ_X_FLIP | 0x0, 0x44,
	0xe0, OBJ_X_FLIP | 0x1d8, 0x45,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1f0, 0x42
};

const u16 sSamusEffectOam_Right_Speedboosting_Frame8[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | 0x1f8, 0x42,
	0xf8, OBJ_X_FLIP | 0x1e8, 0x44,
	0xe8, OBJ_X_FLIP | 0x8, 0x45
};

const u16 sSamusEffectOam_Right_Speedboosting_Frame9[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | 0x1f8, 0x42,
	0xf0, OBJ_X_FLIP | 0x1f0, 0x44,
	0xe8, OBJ_X_FLIP | 0x8, 0x45
};


const u16 sSamusEffectOam_DelayBeforeBallsparking_Frame0[OAM_DATA_SIZE(1)] = {
	0x1,
	0xe4, 0x1ec, 0x42
};

const u16 sSamusEffectOam_DelayBeforeBallsparking_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	0xe6, 0x1ee, 0x42,
	0xe4, OBJ_X_FLIP | 0xc, 0x43
};

const u16 sSamusEffectOam_DelayBeforeBallsparking_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f0, 0x42,
	0xe6, OBJ_X_FLIP | 0xa, 0x44,
	0x4, OBJ_Y_FLIP | 0x1ec, 0x45,
	0xf6, 0x10, 0x45
};

const u16 sSamusEffectOam_DelayBeforeBallsparking_Frame3[OAM_DATA_SIZE(7)] = {
	0x7,
	0xee, 0x1f6, 0x44,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, 0x42,
	0x2, OBJ_Y_FLIP | 0x1ee, 0x45,
	0x4, OBJ_X_FLIP | OBJ_Y_FLIP | 0xc, 0x46,
	0xf6, 0x1ec, 0x46,
	0xf2, OBJ_Y_FLIP | 0x1fd, 0x45,
	0xf2, OBJ_Y_FLIP | 0x15, 0x45
};

const u16 sSamusEffectOam_DelayBeforeBallsparking_Frame4[OAM_DATA_SIZE(6)] = {
	0x6,
	0xee, OBJ_X_FLIP | 0x2, 0x48,
	0xf8, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f0, 0x42,
	0x2, OBJ_X_FLIP | OBJ_Y_FLIP | 0xa, 0x49,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x44,
	0xf5, 0x1ee, 0x49,
	OBJ_SHAPE_HORIZONTAL | 0xf3, OBJ_X_FLIP | 0x0, 0x46
};

const u16 sSamusEffectOam_DelayBeforeBallsparking_Frame5[OAM_DATA_SIZE(9)] = {
	0x9,
	0xfa, OBJ_Y_FLIP | 0x1f6, 0x49,
	0xf8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x0, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xec, 0x1f4, 0x45,
	OBJ_SHAPE_VERTICAL | 0xf4, 0x1f4, 0x44,
	OBJ_SHAPE_VERTICAL | 0xec, OBJ_X_FLIP | OBJ_Y_FLIP | 0x4, 0x44,
	OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fc, 0x45,
	0xf5, 0x1fd, 0x4a,
	OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1f0, 0x47,
	0xf3, OBJ_X_FLIP | 0x2, 0x4b
};

const u16 sSamusEffectOam_DelayBeforeBallsparking_Frame6[OAM_DATA_SIZE(9)] = {
	0x9,
	0xf4, 0x1fc, 0x45,
	0xfa, OBJ_X_FLIP | OBJ_Y_FLIP | 0x2, 0x46,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x1f0, 0x42,
	OBJ_SHAPE_VERTICAL | 0xf8, OBJ_Y_FLIP | 0x1f0, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x43,
	OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_Y_FLIP | 0x1f8, 0x43,
	OBJ_SHAPE_VERTICAL | 0xe8, OBJ_X_FLIP | 0x8, 0x42,
	OBJ_SHAPE_VERTICAL | 0xf8, OBJ_X_FLIP | OBJ_Y_FLIP | 0x8, 0x42,
	0xf3, 0x1f6, 0x47
};

const u16 sSamusEffectOam_DelayBeforeBallsparking_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x1f0, 0x42,
	OBJ_SHAPE_VERTICAL | 0xf8, OBJ_Y_FLIP | 0x1f0, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x43,
	OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_Y_FLIP | 0x1f8, 0x43,
	OBJ_SHAPE_VERTICAL | 0xe8, OBJ_X_FLIP | 0x8, 0x42,
	OBJ_SHAPE_VERTICAL | 0xf8, OBJ_X_FLIP | OBJ_Y_FLIP | 0x8, 0x42
};


const u16 sSamusEffectOam_Left_Sidewards_Shinesparking_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ef, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x0, 0x1f7, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_Y_FLIP | 0x1f7, 0x46
};

const u16 sSamusEffectOam_Left_Sidewards_Shinesparking_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf1, OBJ_SIZE_16x16 | 0x1fb, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x1, 0x1fb, 0x44,
	0xdf, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xd7, OBJ_Y_FLIP | 0x1fb, 0x44
};

const u16 sSamusEffectOam_Left_Sidewards_Shinesparking_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf0, OBJ_SIZE_16x16 | 0x4, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x0, 0x4, 0x44,
	0xe0, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x4, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_Y_FLIP | 0x4, 0x44
};


const u16 sSamusEffectOam_Left_Diagonal_Shinesparking_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x1ef, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1ec, 0x46,
	0xfe, 0x1ec, 0x4a
};

const u16 sSamusEffectOam_Left_Diagonal_Shinesparking_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	0xf4, OBJ_SIZE_16x16 | 0x1ee, 0x42,
	0xe0, OBJ_SIZE_16x16 | 0x2, 0x44
};

const u16 sSamusEffectOam_Left_Diagonal_Shinesparking_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe1, OBJ_SIZE_16x16 | 0x7, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xf1, 0x7, 0x47,
	0xf9, OBJ_SIZE_16x16 | 0x1ef, 0x44,
	OBJ_SHAPE_VERTICAL | 0xf9, 0x1ff, 0x46
};


const u16 sSamusEffectOam_Up_Shinesparking_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xd6, 0x1f0, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x1e0, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xd6, OBJ_X_FLIP | 0x0, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x0, 0x42
};

const u16 sSamusEffectOam_Up_Shinesparking_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1e7, 0x42,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x1f7, 0x44,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x9, 0x42,
	OBJ_SHAPE_VERTICAL | 0xe3, OBJ_X_FLIP | 0x1, 0x44
};

const u16 sSamusEffectOam_Up_Shinesparking_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xec, OBJ_SIZE_16x16 | 0x1e8, 0x42,
	OBJ_SHAPE_VERTICAL | 0xec, 0x1f8, 0x44,
	0xec, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, 0x42,
	OBJ_SHAPE_VERTICAL | 0xec, OBJ_X_FLIP | 0x0, 0x44
};


const u16 sSamusEffectOam_Right_Sidewards_Shinesparking_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f1, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x1f9, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f1, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f9, 0x46
};

const u16 sSamusEffectOam_Right_Sidewards_Shinesparking_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x1, OBJ_X_FLIP | 0x1f5, 0x44,
	0xdf, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xd7, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f5, 0x44
};

const u16 sSamusEffectOam_Right_Sidewards_Shinesparking_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1ec, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x1ec, 0x44,
	0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1ec, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1ec, 0x44
};


const u16 sSamusEffectOam_Right_Diagonal_Shinesparking_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f1, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f4, 0x46,
	0xfe, OBJ_X_FLIP | 0xc, 0x4a
};

const u16 sSamusEffectOam_Right_Diagonal_Shinesparking_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x2, 0x42,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1ee, 0x44
};

const u16 sSamusEffectOam_Right_Diagonal_Shinesparking_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1e9, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | 0x1e9, 0x47,
	0xf9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1, 0x44,
	OBJ_SHAPE_VERTICAL | 0xf9, OBJ_X_FLIP | 0x1f9, 0x46
};


const u16 sSamusEffectOam_ScrewAttacking_Frame0[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1f0, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x46
};

const u16 sSamusEffectOam_ScrewAttacking_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x46
};


const u16 sSamusEffectOam_StoringShinespark_Frame0[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf7, 0x1e4, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xf7, OBJ_X_FLIP | 0xc, 0x42
};

const u16 sSamusEffectOam_StoringShinespark_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1e4, 0x42,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xc, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xff, 0x1ed, 0x44,
	OBJ_SHAPE_HORIZONTAL | 0xff, OBJ_X_FLIP | 0x3, 0x44
};

const u16 sSamusEffectOam_StoringShinespark_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1e8, 0x42,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xff, 0x1ef, 0x44,
	OBJ_SHAPE_HORIZONTAL | 0xff, OBJ_X_FLIP | 0x1, 0x44
};

const u16 sSamusEffectOam_StoringShinespark_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1ec, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x4, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xff, 0x1f1, 0x44,
	OBJ_SHAPE_HORIZONTAL | 0xff, OBJ_X_FLIP | 0x1ff, 0x44
};

const u16 sSamusEffectOam_StoringShinespark_Frame4[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f0, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x0, 0x42
};

const u16 sSamusEffectOam_StoringShinespark_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, 0x44,
	0xf0, OBJ_SIZE_16x16 | 0x1e8, 0x42,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x0, 0x1f0, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x0, 0x46
};


const struct SamusEffectAnimationData sSamusEffectAnim_Left_Speedboosting[11] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame0,
		.pOam = sSamusEffectOam_Left_Speedboosting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame1,
		.pOam = sSamusEffectOam_Left_Speedboosting_Frame1,
		.timer = 1,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame2,
		.pOam = sSamusEffectOam_Left_Speedboosting_Frame2,
		.timer = 2,
	},
	[3] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame3,
		.pOam = sSamusEffectOam_Left_Speedboosting_Frame3,
		.timer = 1,
	},
	[4] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame4,
		.pOam = sSamusEffectOam_Left_Speedboosting_Frame4,
		.timer = 2,
	},
	[5] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame5,
		.pOam = sSamusEffectOam_Left_Speedboosting_Frame5,
		.timer = 1,
	},
	[6] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame6,
		.pOam = sSamusEffectOam_Left_Speedboosting_Frame6,
		.timer = 2,
	},
	[7] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame7,
		.pOam = sSamusEffectOam_Left_Speedboosting_Frame7,
		.timer = 1,
	},
	[8] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame8,
		.pOam = sSamusEffectOam_Left_Speedboosting_Frame8,
		.timer = 2,
	},
	[9] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame9,
		.pOam = sSamusEffectOam_Left_Speedboosting_Frame9,
		.timer = 1,
	},
	[10] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_Right_Speedboosting[11] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame0,
		.pOam = sSamusEffectOam_Right_Speedboosting_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame1,
		.pOam = sSamusEffectOam_Right_Speedboosting_Frame1,
		.timer = 1,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame2,
		.pOam = sSamusEffectOam_Right_Speedboosting_Frame2,
		.timer = 2,
	},
	[3] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame3,
		.pOam = sSamusEffectOam_Right_Speedboosting_Frame3,
		.timer = 1,
	},
	[4] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame4,
		.pOam = sSamusEffectOam_Right_Speedboosting_Frame4,
		.timer = 2,
	},
	[5] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame5,
		.pOam = sSamusEffectOam_Right_Speedboosting_Frame5,
		.timer = 1,
	},
	[6] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame6,
		.pOam = sSamusEffectOam_Right_Speedboosting_Frame6,
		.timer = 2,
	},
	[7] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame7,
		.pOam = sSamusEffectOam_Right_Speedboosting_Frame7,
		.timer = 1,
	},
	[8] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame8,
		.pOam = sSamusEffectOam_Right_Speedboosting_Frame8,
		.timer = 2,
	},
	[9] = {
		.pGraphics = sSamusEffectGfx_Speedboosting_Frame9,
		.pOam = sSamusEffectOam_Right_Speedboosting_Frame9,
		.timer = 1,
	},
	[10] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_DelayBeforeBallsparking[9] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_DelayBeforeBallsparking_Frame0,
		.pOam = sSamusEffectOam_DelayBeforeBallsparking_Frame0,
		.timer = 3,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_DelayBeforeBallsparking_Frame1,
		.pOam = sSamusEffectOam_DelayBeforeBallsparking_Frame1,
		.timer = 3,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_DelayBeforeBallsparking_Frame2,
		.pOam = sSamusEffectOam_DelayBeforeBallsparking_Frame2,
		.timer = 3,
	},
	[3] = {
		.pGraphics = sSamusEffectGfx_DelayBeforeBallsparking_Frame3,
		.pOam = sSamusEffectOam_DelayBeforeBallsparking_Frame3,
		.timer = 3,
	},
	[4] = {
		.pGraphics = sSamusEffectGfx_DelayBeforeBallsparking_Frame4,
		.pOam = sSamusEffectOam_DelayBeforeBallsparking_Frame4,
		.timer = 3,
	},
	[5] = {
		.pGraphics = sSamusEffectGfx_DelayBeforeBallsparking_Frame5,
		.pOam = sSamusEffectOam_DelayBeforeBallsparking_Frame5,
		.timer = 3,
	},
	[6] = {
		.pGraphics = sSamusEffectGfx_DelayBeforeBallsparking_Frame6,
		.pOam = sSamusEffectOam_DelayBeforeBallsparking_Frame6,
		.timer = 3,
	},
	[7] = {
		.pGraphics = sSamusEffectGfx_DelayBeforeBallsparking_Frame7,
		.pOam = sSamusEffectOam_DelayBeforeBallsparking_Frame7,
		.timer = 3,
	},
	[8] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_Left_Sidewards_Shinesparking[4] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_Sidewards_Shinesparking_Frame0,
		.pOam = sSamusEffectOam_Left_Sidewards_Shinesparking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_Sidewards_Shinesparking_Frame1,
		.pOam = sSamusEffectOam_Left_Sidewards_Shinesparking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_Sidewards_Shinesparking_Frame2,
		.pOam = sSamusEffectOam_Left_Sidewards_Shinesparking_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_Left_Diagonal_Shinesparking[4] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_Diagonal_Shinesparking_Frame0,
		.pOam = sSamusEffectOam_Left_Diagonal_Shinesparking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_Diagonal_Shinesparking_Frame1,
		.pOam = sSamusEffectOam_Left_Diagonal_Shinesparking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_Diagonal_Shinesparking_Frame2,
		.pOam = sSamusEffectOam_Left_Diagonal_Shinesparking_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_Up_Shinesparking[4] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_Up_Shinesparking_Frame0,
		.pOam = sSamusEffectOam_Left_Up_Shinesparking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_Up_Shinesparking_Frame1,
		.pOam = sSamusEffectOam_Left_Up_Shinesparking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_Up_Shinesparking_Frame2,
		.pOam = sSamusEffectOam_Left_Up_Shinesparking_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_Right_Sidewards_Shinesparking[4] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_Sidewards_Shinesparking_Frame0,
		.pOam = sSamusEffectOam_Right_Sidewards_Shinesparking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_Sidewards_Shinesparking_Frame1,
		.pOam = sSamusEffectOam_Right_Sidewards_Shinesparking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_Sidewards_Shinesparking_Frame2,
		.pOam = sSamusEffectOam_Right_Sidewards_Shinesparking_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_Right_Diagonal_Shinesparking[4] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_Diagonal_Shinesparking_Frame0,
		.pOam = sSamusEffectOam_Right_Diagonal_Shinesparking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_Diagonal_Shinesparking_Frame1,
		.pOam = sSamusEffectOam_Right_Diagonal_Shinesparking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_Diagonal_Shinesparking_Frame2,
		.pOam = sSamusEffectOam_Right_Diagonal_Shinesparking_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_ScrewAttacking[9] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_ScrewAttacking_Frame0,
		.pOam = sSamusEffectOam_ScrewAttacking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_ScrewAttacking_Frame0,
		.pOam = sSamusEffectOam_ScrewAttacking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_ScrewAttacking_Frame2,
		.pOam = sSamusEffectOam_ScrewAttacking_Frame0,
		.timer = 2,
	},
	[3] = {
		.pGraphics = sSamusEffectGfx_ScrewAttacking_Frame2,
		.pOam = sSamusEffectOam_ScrewAttacking_Frame1,
		.timer = 2,
	},
	[4] = {
		.pGraphics = sSamusEffectGfx_ScrewAttacking_Frame4,
		.pOam = sSamusEffectOam_ScrewAttacking_Frame0,
		.timer = 2,
	},
	[5] = {
		.pGraphics = sSamusEffectGfx_ScrewAttacking_Frame4,
		.pOam = sSamusEffectOam_ScrewAttacking_Frame1,
		.timer = 2,
	},
	[6] = {
		.pGraphics = sSamusEffectGfx_ScrewAttacking_Frame6,
		.pOam = sSamusEffectOam_ScrewAttacking_Frame0,
		.timer = 2,
	},
	[7] = {
		.pGraphics = sSamusEffectGfx_ScrewAttacking_Frame6,
		.pOam = sSamusEffectOam_ScrewAttacking_Frame1,
		.timer = 2,
	},
	[8] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_StoringShinespark[7] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_StoringShinespark_Frame0,
		.pOam = sSamusEffectOam_StoringShinespark_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_StoringShinespark_Frame1,
		.pOam = sSamusEffectOam_StoringShinespark_Frame1,
		.timer = 2,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_StoringShinespark_Frame2,
		.pOam = sSamusEffectOam_StoringShinespark_Frame2,
		.timer = 2,
	},
	[3] = {
		.pGraphics = sSamusEffectGfx_StoringShinespark_Frame3,
		.pOam = sSamusEffectOam_StoringShinespark_Frame3,
		.timer = 2,
	},
	[4] = {
		.pGraphics = sSamusEffectGfx_StoringShinespark_Frame4,
		.pOam = sSamusEffectOam_StoringShinespark_Frame4,
		.timer = 2,
	},
	[5] = {
		.pGraphics = sSamusEffectGfx_StoringShinespark_Frame5,
		.pOam = sSamusEffectOam_StoringShinespark_Frame5,
		.timer = 2,
	},
	[6] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const u16 sSamusEffectOam_Left_Sidewards_Ballsparking_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x16 | 0x1f6, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x8, 0x1fe, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f6, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_Y_FLIP | 0x1fe, 0x46
};

const u16 sSamusEffectOam_Left_Sidewards_Ballsparking_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf9, OBJ_SIZE_16x16 | 0x2, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x9, 0x2, 0x44,
	0xe7, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x2, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xdf, OBJ_Y_FLIP | 0x2, 0x44
};

const u16 sSamusEffectOam_Left_Sidewards_Ballsparking_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf8, OBJ_SIZE_16x16 | 0xb, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x8, 0xb, 0x44,
	0xe8, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0xb, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_Y_FLIP | 0xb, 0x44
};


const u16 sSamusEffectOam_Left_Diagonal_Ballsparking_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xea, OBJ_SIZE_32x16 | 0x1f6, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xfa, OBJ_SIZE_32x16 | 0x1f3, 0x46,
	0xa, 0x1f3, 0x4a
};

const u16 sSamusEffectOam_Left_Diagonal_Ballsparking_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	0x0, OBJ_SIZE_16x16 | 0x1f5, 0x42,
	0xec, OBJ_SIZE_16x16 | 0x9, 0x44
};

const u16 sSamusEffectOam_Left_Diagonal_Ballsparking_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xed, OBJ_SIZE_16x16 | 0xe, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xfd, 0xe, 0x47,
	0x5, OBJ_SIZE_16x16 | 0x1f6, 0x44,
	OBJ_SHAPE_VERTICAL | 0x5, 0x6, 0x46
};


const u16 sSamusEffectOam_Up_Ballsparking_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xed, 0x1f0, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xf5, OBJ_SIZE_32x16 | 0x1e0, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xed, OBJ_X_FLIP | 0x0, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xf5, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x0, 0x42
};

const u16 sSamusEffectOam_Up_Ballsparking_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xfa, OBJ_SIZE_16x16 | 0x1e7, 0x42,
	OBJ_SHAPE_VERTICAL | 0xfa, 0x1f7, 0x44,
	0xfa, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x9, 0x42,
	OBJ_SHAPE_VERTICAL | 0xfa, OBJ_X_FLIP | 0x1, 0x44
};

const u16 sSamusEffectOam_Up_Ballsparking_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0x3, OBJ_SIZE_16x16 | 0x1e8, 0x42,
	OBJ_SHAPE_VERTICAL | 0x3, 0x1f8, 0x44,
	0x3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, 0x42,
	OBJ_SHAPE_VERTICAL | 0x3, OBJ_X_FLIP | 0x0, 0x44
};


const u16 sSamusEffectOam_Right_Sidewards_Ballsparking_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ea, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x8, OBJ_X_FLIP | 0x1f2, 0x46,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1ea, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f2, 0x46
};

const u16 sSamusEffectOam_Right_Sidewards_Ballsparking_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1ee, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x9, OBJ_X_FLIP | 0x1ee, 0x44,
	0xe7, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1ee, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xdf, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1ee, 0x44
};

const u16 sSamusEffectOam_Right_Sidewards_Ballsparking_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1e5, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0x8, OBJ_X_FLIP | 0x1e5, 0x44,
	0xe8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1e5, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1e5, 0x44
};


const u16 sSamusEffectOam_Right_Diagonal_Ballsparking_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xea, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ea, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xfa, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ed, 0x46,
	0xa, OBJ_X_FLIP | 0x5, 0x4a
};

const u16 sSamusEffectOam_Right_Diagonal_Ballsparking_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	0x0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x42,
	0xec, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1e7, 0x44
};

const u16 sSamusEffectOam_Right_Diagonal_Ballsparking_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xed, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1e2, 0x42,
	OBJ_SHAPE_HORIZONTAL | 0xfd, OBJ_X_FLIP | 0x1e2, 0x47,
	0x5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x44,
	OBJ_SHAPE_VERTICAL | 0x5, OBJ_X_FLIP | 0x1f2, 0x46
};


const struct SamusEffectAnimationData sSamusEffectAnim_Left_Sidewards_Ballsparking[4] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_Sidewards_Shinesparking_Frame0,
		.pOam = sSamusEffectOam_Left_Sidewards_Ballsparking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_Sidewards_Shinesparking_Frame1,
		.pOam = sSamusEffectOam_Left_Sidewards_Ballsparking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_Sidewards_Shinesparking_Frame2,
		.pOam = sSamusEffectOam_Left_Sidewards_Ballsparking_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_Left_Diagonal_Ballsparking[4] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_Diagonal_Shinesparking_Frame0,
		.pOam = sSamusEffectOam_Left_Diagonal_Ballsparking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_Diagonal_Shinesparking_Frame1,
		.pOam = sSamusEffectOam_Left_Diagonal_Ballsparking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_Diagonal_Shinesparking_Frame2,
		.pOam = sSamusEffectOam_Left_Diagonal_Ballsparking_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_Up_Ballsparking[4] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_Up_Shinesparking_Frame0,
		.pOam = sSamusEffectOam_Up_Ballsparking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_Up_Shinesparking_Frame1,
		.pOam = sSamusEffectOam_Up_Ballsparking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_Up_Shinesparking_Frame2,
		.pOam = sSamusEffectOam_Up_Ballsparking_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_Right_Sidewards_Ballsparking[4] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_Sidewards_Shinesparking_Frame0,
		.pOam = sSamusEffectOam_Right_Sidewards_Ballsparking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_Sidewards_Shinesparking_Frame1,
		.pOam = sSamusEffectOam_Right_Sidewards_Ballsparking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_Sidewards_Shinesparking_Frame2,
		.pOam = sSamusEffectOam_Right_Sidewards_Ballsparking_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_EFFECT_ANIM_TERMINATOR
};

const struct SamusEffectAnimationData sSamusEffectAnim_Right_Diagonal_Ballsparking[4] = {
	[0] = {
		.pGraphics = sSamusEffectGfx_Diagonal_Shinesparking_Frame0,
		.pOam = sSamusEffectOam_Right_Diagonal_Ballsparking_Frame0,
		.timer = 2,
	},
	[1] = {
		.pGraphics = sSamusEffectGfx_Diagonal_Shinesparking_Frame1,
		.pOam = sSamusEffectOam_Right_Diagonal_Ballsparking_Frame1,
		.timer = 2,
	},
	[2] = {
		.pGraphics = sSamusEffectGfx_Diagonal_Shinesparking_Frame2,
		.pOam = sSamusEffectOam_Right_Diagonal_Ballsparking_Frame2,
		.timer = 2,
	},
	[3] = SAMUS_EFFECT_ANIM_TERMINATOR
};


const u8 sSamusGfx_Top_Suitless_Left_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Running_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Running_Frame1[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Running_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Running_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Running_Frame2[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Running_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Running_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Running_Frame3[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Running_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Running_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Running_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Running_Frame4.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Running_Frame4[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Running_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Running_Frame5.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Running_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Running_Frame5.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Running_Frame6[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Running_Frame6.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Running_Frame6[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Running_Frame6.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Running_Frame7[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Running_Frame7.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Running_Frame7[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Running_Frame7.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Running_Frame8[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Running_Frame8.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Running_Frame8[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Running_Frame8.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Running_Frame9[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Running_Frame9.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Running_Frame9[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Running_Frame9.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_Running_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Running_Frame1[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Running_Frame2[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Running_Frame3[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Running_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Running_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Running_Frame5.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Running_Frame6[SAMUS_GFX_SIZE(5, 4)] = {
	5, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Running_Frame6.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Running_Frame7[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Running_Frame7.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Running_Frame8[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Running_Frame8.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Running_Frame9[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Running_Frame9.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Forward_Running_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Forward_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Forward_Running_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Forward_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Forward_Running_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Forward_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Forward_Running_Frame3[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Forward_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Forward_Running_Frame4[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Forward_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Forward_Running_Frame5[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Forward_Running_Frame5.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_DiagonaUp_Running_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonaUp_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonaUp_Running_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonaUp_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonaUp_Running_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonaUp_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonaUp_Running_Frame3[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonaUp_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonaUp_Running_Frame4[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonaUp_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonaUp_Running_Frame5[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonaUp_Running_Frame5.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_DiagonaDown_Running_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonaDown_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonaDown_Running_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonaDown_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonaDown_Running_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonaDown_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonaDown_Running_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonaDown_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonaDown_Running_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonaDown_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonaDown_Running_Frame5[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonaDown_Running_Frame5.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_Forward_Running_Frame0[SAMUS_GFX_SIZE(5, 2)] = {
	5, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Forward_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Forward_Running_Frame1[SAMUS_GFX_SIZE(5, 2)] = {
	5, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Forward_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Forward_Running_Frame2[SAMUS_GFX_SIZE(5, 2)] = {
	5, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Forward_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Forward_Running_Frame3[SAMUS_GFX_SIZE(5, 2)] = {
	5, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Forward_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Forward_Running_Frame4[SAMUS_GFX_SIZE(5, 2)] = {
	5, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Forward_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Forward_Running_Frame5[SAMUS_GFX_SIZE(5, 2)] = {
	5, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Forward_Running_Frame5.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_DiagonaUp_Running_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonaUp_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonaUp_Running_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonaUp_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonaUp_Running_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonaUp_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonaUp_Running_Frame3[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonaUp_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonaUp_Running_Frame4[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonaUp_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonaUp_Running_Frame5[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonaUp_Running_Frame5.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_DiagonaDown_Running_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonaDown_Running_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonaDown_Running_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonaDown_Running_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonaDown_Running_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonaDown_Running_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonaDown_Running_Frame3[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonaDown_Running_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonaDown_Running_Frame4[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonaDown_Running_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonaDown_Running_Frame5[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonaDown_Running_Frame5.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Standing_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_Standing_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Shooting_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Shooting_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Shooting_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Shooting_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Shooting_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_DiagonalUp_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DiagonalUp_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_DiagonalUp_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DiagonalUp_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_DiagonalUp_Standing_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DiagonalUp_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_DiagonalUp_Shooting_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalUp_Shooting_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalUp_Shooting_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalUp_Shooting_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_DiagonalUp_Shooting_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_DiagonalUp_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_DiagonalDown_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DiagonalDown_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_DiagonalDown_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DiagonalDown_Standing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_DiagonalDown_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DiagonalDown_Standing_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_DiagonalDown_Shooting_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalDown_Shooting_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalDown_Shooting_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalDown_Shooting_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_DiagonalDown_Shooting_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_DiagonalDown_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Up_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_Standing_Frame0.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_Up_Standing_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Up_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Up_Standing_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Up_Standing_Frame1.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_Right_Up_Standing_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_Up_Standing_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Up_Shooting_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_Shooting_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Up_Shooting_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_Left_Up_Shooting_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_Up_Shooting_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_Standing_Frame0[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Shooting_Frame0[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Shooting_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Shooting_Frame1[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_DiagonalUp_Shooting_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalUp_Shooting_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalUp_Shooting_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalUp_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_DiagonalDown_Shooting_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalDown_Shooting_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalDown_Shooting_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalDown_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_Up_Standing_Frame0[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_Standing_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Up_Shooting_Frame0[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_Shooting_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Up_Shooting_Frame1[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_Shooting_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Crouching_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Crouching_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_CrouchingSuitless_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_CrouchingSuitless_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Right_Crouching_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_Crouching_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Right_Crouching_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_Crouching_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_ShootingAndCrouching_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_ShootingAndCrouching_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_ShootingAndCrouching_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_ShootingAndCrouching_Frame1.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_ShootingAndCrouching_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_ShootingAndCrouching_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_Crouching_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Crouching_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_ShootingAndCrouching_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_ShootingAndCrouching_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_ShootingAndCrouching_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_ShootingAndCrouching_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_GettingKnockedBack_Frame0[SAMUS_GFX_SIZE(11, 8)] = {
	11, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_GettingKnockedBack_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_GettingKnockedBack_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_GettingKnockedBack_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_GettingKnockedBack_Frame0[SAMUS_GFX_SIZE(10, 6)] = {
	10, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_GettingKnockedBack_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_GettingKnockedBack_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_GettingKnockedBack_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_CrouchingSuitless_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_CrouchingSuitless_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_CrouchingSuitless_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_CrouchingSuitless_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_CrouchingSuitless_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_CrouchingSuitless_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_CrouchingSuitless_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_CrouchingSuitless_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_CrouchingSuitless_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_CrouchingSuitless_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_UncrouchingSuitless_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_UncrouchingSuitless_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_UncrouchingSuitless_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_UncrouchingSuitless_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_UncrouchingSuitless_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_UncrouchingSuitless_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_UncrouchingSuitless_Frame3[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_UncrouchingSuitless_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_UncrouchingSuitless_Frame4[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_UncrouchingSuitless_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_CrouchingSuitless_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_CrouchingSuitless_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_CrouchingSuitless_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_CrouchingSuitless_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_CrouchingSuitless_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_CrouchingSuitless_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_CrouchingSuitless_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_CrouchingSuitless_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_CrouchingSuitless_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_CrouchingSuitless_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_UncrouchingSuitless_Frame0[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_UncrouchingSuitless_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_UncrouchingSuitless_Frame1[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_UncrouchingSuitless_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_UncrouchingSuitless_Frame2[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_UncrouchingSuitless_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_UncrouchingSuitless_Frame3[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_UncrouchingSuitless_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_UncrouchingSuitless_Frame4[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_UncrouchingSuitless_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Up_UncrouchingSuitless_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_UncrouchingSuitless_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Up_UncrouchingSuitless_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_UncrouchingSuitless_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Up_UncrouchingSuitless_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_UncrouchingSuitless_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Up_UncrouchingSuitless_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_UncrouchingSuitless_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Up_UncrouchingSuitless_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_UncrouchingSuitless_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_Up_UncrouchingSuitless_Frame0[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_UncrouchingSuitless_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Up_UncrouchingSuitless_Frame1[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_UncrouchingSuitless_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Up_UncrouchingSuitless_Frame2[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_UncrouchingSuitless_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Up_UncrouchingSuitless_Frame3[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_UncrouchingSuitless_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Up_UncrouchingSuitless_Frame4[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_UncrouchingSuitless_Frame4.gfx")
};


const u16 sSamusOam_Suitless_Left_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16
};

const u16 sSamusOam_Suitless_Left_Running_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	0xe0, 0x1fe, 0x4
};

const u16 sSamusOam_Suitless_Left_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdb, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	0xe0, 0x0, 0x4
};

const u16 sSamusOam_Suitless_Left_Running_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xe1, 0x1fc, 0x4
};

const u16 sSamusOam_Suitless_Left_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	0xe8, 0x9, 0x1a
};

const u16 sSamusOam_Suitless_Left_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_Suitless_Left_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18,
	0xdf, OBJ_SIZE_16x16 | 0x1f5, 0x4
};

const u16 sSamusOam_Suitless_Left_Running_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdb, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18,
	0xdc, OBJ_SIZE_16x16 | 0x1ef, 0x4
};

const u16 sSamusOam_Suitless_Left_Running_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14,
	0xde, OBJ_SIZE_16x16 | 0x1f3, 0x4
};

const u16 sSamusOam_Suitless_Left_Running_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	0xde, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1f6, 0x4
};


const u16 sSamusOam_Suitless_Right_Running_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_Suitless_Right_Running_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdd, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	0xe0, OBJ_X_FLIP | 0x1fa, 0x4
};

const u16 sSamusOam_Suitless_Right_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd9, OBJ_SIZE_16x16 | 0x0, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	0xe0, OBJ_X_FLIP | 0x1f8, 0x4
};

const u16 sSamusOam_Suitless_Right_Running_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xe1, OBJ_X_FLIP | 0x1fc, 0x4
};

const u16 sSamusOam_Suitless_Right_Running_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ef, 0x1a
};

const u16 sSamusOam_Suitless_Right_Running_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_Suitless_Right_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe1, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18,
	0xe3, 0x1fe, 0x4
};

const u16 sSamusOam_Suitless_Right_Running_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18,
	OBJ_SHAPE_VERTICAL | 0xdf, 0x1, 0x4
};

const u16 sSamusOam_Suitless_Right_Running_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x2, 0x4
};

const u16 sSamusOam_Suitless_Right_Running_Frame9[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a
};


const u16 sSamusOam_Suitless_Left_Forward_Running_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f4, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16,
	0xdd, OBJ_SIZE_16x16 | 0x1ef, 0x2
};

const u16 sSamusOam_Suitless_Left_Forward_Running_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1f3, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	0xdc, OBJ_SIZE_16x16 | 0x1ee, 0x2
};

const u16 sSamusOam_Suitless_Left_Forward_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f2, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	0xdb, OBJ_SIZE_16x16 | 0x1ed, 0x2
};

const u16 sSamusOam_Suitless_Left_Forward_Running_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1f1, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xdc, OBJ_SIZE_16x16 | 0x1ec, 0x2
};

const u16 sSamusOam_Suitless_Left_Forward_Running_Frame4[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1f3, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	0xe8, 0x9, 0x1a,
	0xdc, OBJ_SIZE_16x16 | 0x1ee, 0x2
};

const u16 sSamusOam_Suitless_Left_Forward_Running_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f4, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16,
	0xdd, OBJ_SIZE_16x16 | 0x1ef, 0x2
};

const u16 sSamusOam_Suitless_Left_Forward_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1f4, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18,
	0xdc, OBJ_SIZE_16x16 | 0x1ef, 0x2
};

const u16 sSamusOam_Suitless_Left_Forward_Running_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f3, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18,
	0xdb, OBJ_SIZE_16x16 | 0x1ee, 0x2
};

const u16 sSamusOam_Suitless_Left_Forward_Running_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f2, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14,
	0xdb, OBJ_SIZE_16x16 | 0x1ed, 0x2
};

const u16 sSamusOam_Suitless_Left_Forward_Running_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1f3, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a,
	0xdc, OBJ_SIZE_16x16 | 0x1ee, 0x2
};


const u16 sSamusOam_Suitless_Left_DiagonalUp_Running_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f5, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd6, OBJ_SIZE_16x16 | 0x1f0, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Running_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1f4, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd5, OBJ_SIZE_16x16 | 0x1ef, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1f3, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd4, OBJ_SIZE_16x16 | 0x1ee, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Running_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1f2, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd5, OBJ_SIZE_16x16 | 0x1ed, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Running_Frame4[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	0xe8, 0x9, 0x1a,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1f4, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd5, OBJ_SIZE_16x16 | 0x1ef, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Running_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f5, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd6, OBJ_SIZE_16x16 | 0x1f0, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1f5, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xd5, OBJ_SIZE_16x16 | 0x1f0, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Running_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1f4, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd4, OBJ_SIZE_16x16 | 0x1ef, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Running_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1f3, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd4, OBJ_SIZE_16x16 | 0x1ee, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Running_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1f4, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xd5, OBJ_SIZE_16x16 | 0x1ef, 0x2
};


const u16 sSamusOam_Suitless_Left_DiagonalDown_Running_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fb, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe1, OBJ_SIZE_16x16 | 0x1f0, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Running_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	0xdd, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1ef, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x18,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1ee, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Running_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xdd, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1ed, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Running_Frame4[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	0xe8, 0x9, 0x1a,
	0xdd, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1ef, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Running_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe1, OBJ_SIZE_16x16 | 0x1f0, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x9, 0x18,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f0, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Running_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, 0x8, 0x18,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1ef, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Running_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f1, 0x14,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1ee, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Running_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fa, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f2, 0x1a,
	0xdd, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1ef, 0x4
};


const u16 sSamusOam_Suitless_Right_Forward_Running_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1fb, 0x2,
	0xe1, 0xb, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16
};

const u16 sSamusOam_Suitless_Right_Forward_Running_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fc, 0x2,
	0xe0, 0xc, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_Suitless_Right_Forward_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fd, 0x2,
	0xdf, 0xd, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_Suitless_Right_Forward_Running_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fe, 0x2,
	0xe0, 0xe, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_Forward_Running_Frame4[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fc, 0x2,
	0xe0, 0xc, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ef, 0x1a
};

const u16 sSamusOam_Suitless_Right_Forward_Running_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1fb, 0x2,
	0xe1, 0xb, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};

const u16 sSamusOam_Suitless_Right_Forward_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fb, 0x2,
	0xe0, 0xb, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18
};

const u16 sSamusOam_Suitless_Right_Forward_Running_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fc, 0x2,
	0xdf, 0xc, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18
};

const u16 sSamusOam_Suitless_Right_Forward_Running_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fd, 0x2,
	0xdf, 0xd, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14
};

const u16 sSamusOam_Suitless_Right_Forward_Running_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fc, 0x2,
	0xe0, 0xc, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a
};


const u16 sSamusOam_Suitless_Right_DiagonalUp_Running_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x9, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Running_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	0xd7, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd7, 0xa, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	0xd6, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd6, 0xb, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Running_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xd7, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd7, 0xc, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Running_Frame4[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ef, 0x1a,
	0xd7, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd7, 0xa, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Running_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x9, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18,
	0xd7, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd7, 0x9, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f6, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Running_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18,
	0xd6, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd6, 0xa, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Running_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xd6, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd6, 0xb, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Running_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a,
	0xd7, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd7, 0xa, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2
};


const u16 sSamusOam_Suitless_Right_DiagonalDown_Running_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, 0x16,
	0xe1, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x8, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_Running_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x9, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_Running_Frame2[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f0, 0x18,
	0xdf, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_VERTICAL | 0xdf, 0xa, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_Running_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xe0, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0xb, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_Running_Frame4[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	0xe8, OBJ_X_FLIP | 0x1ef, 0x1a,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x9, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_Running_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16,
	0xe1, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x8, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_Running_Frame6[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1ef, 0x18,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x8, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_Running_Frame7[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16,
	OBJ_SHAPE_VERTICAL | 0xef, OBJ_X_FLIP | 0x1f0, 0x18,
	0xdf, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_VERTICAL | 0xdf, 0x9, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_Running_Frame8[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x14,
	0xdf, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_VERTICAL | 0xdf, 0xa, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f9, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_Running_Frame9[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ee, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_X_FLIP | 0x1f6, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1fe, 0x1a,
	0xe0, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x9, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f8, 0x2
};


const u16 sSamusOam_Suitless_Left_UncrouchingSuitless_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f5, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xdd, OBJ_SIZE_16x16 | 0x1f0, 0x2
};


const u16 sSamusOam_Suitless_Left_Standing_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f5, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xdd, OBJ_SIZE_16x16 | 0x1f0, 0x2
};

const u16 sSamusOam_Suitless_Left_Shooting_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f6, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	0xdd, OBJ_SIZE_16x16 | 0x1f1, 0x2
};

const u16 sSamusOam_Suitless_Left_Shooting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f6, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xdd, OBJ_SIZE_16x16 | 0x1f2, 0x2
};


const u16 sSamusOam_Suitless_Left_DiagonalUp_Standing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f6, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xd6, OBJ_SIZE_16x16 | 0x1f1, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Shooting_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f7, 0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xd7, OBJ_SIZE_16x16 | 0x1f2, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Shooting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f7, 0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xd8, OBJ_SIZE_16x16 | 0x1f3, 0x2
};


const u16 sSamusOam_Suitless_Left_DiagonalDown_Standing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe1, OBJ_SIZE_16x16 | 0x1f1, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Shooting_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f2, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Shooting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdd, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xdf, OBJ_SIZE_16x16 | 0x1f3, 0x4
};


const u16 sSamusOam_Suitless_Left_Up_Standing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xd4, OBJ_SIZE_16x16 | 0x1f6, 0x4
};

const u16 sSamusOam_Suitless_Left_Up_Shooting_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xd5, OBJ_SIZE_16x16 | 0x1f6, 0x4
};

const u16 sSamusOam_Suitless_Left_Up_Shooting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xd6, OBJ_SIZE_16x16 | 0x1f6, 0x4
};


const u16 sSamusOam_Suitless_Right_Standing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe1, OBJ_SIZE_32x8 | 0x1fa, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_Standing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe1, OBJ_SIZE_32x8 | 0x1fa, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_Suitless_Right_Shooting_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe1, OBJ_SIZE_32x8 | 0x1f9, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_Shooting_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe1, OBJ_SIZE_32x8 | 0x1f8, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_Suitless_Right_DiagonalUp_Standing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x8, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Shooting_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd9, 0x7, 0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Shooting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_VERTICAL | 0xda, 0x6, 0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_Suitless_Right_DiagonalDown_Standing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x7, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_Shooting_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x6, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_Shooting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_VERTICAL | 0xdf, 0x5, 0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_Suitless_Right_Up_Standing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd0, 0x1ff, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f7, 0x3,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Right_Up_Shooting_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd1, 0x1ff, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1f7, 0x3,
	0xdb, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Right_Up_Shooting_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd2, 0x1ff, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f7, 0x3,
	0xdb, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_Suitless_Left_CrouchingSuitless_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xed, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe5, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xea, OBJ_SIZE_16x16 | 0x1f1, 0x4
};

const u16 sSamusOam_Suitless_Left_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xed, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xea, OBJ_SIZE_16x16 | 0x1f2, 0x4
};

const u16 sSamusOam_Suitless_Left_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xed, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xea, OBJ_SIZE_16x16 | 0x1f3, 0x4
};


const u16 sSamusOam_Suitless_Left_DiagonalUp_CrouchingSuitless_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1f5, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe5, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe1, OBJ_SIZE_16x16 | 0x1f0, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xeb, 0x1f6, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe6, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1f1, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xeb, 0x1f6, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe6, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xe3, OBJ_SIZE_16x16 | 0x1f2, 0x2
};


const u16 sSamusOam_Suitless_Left_DiagonalDown_CrouchingSuitless_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe9, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe5, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xec, OBJ_SIZE_16x16 | 0x1f0, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe4, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xeb, OBJ_SIZE_16x16 | 0x1f1, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe4, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xea, OBJ_SIZE_16x16 | 0x1f2, 0x4
};


const u16 sSamusOam_Suitless_Right_CrouchingSuitless_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xed, OBJ_SIZE_32x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe5, OBJ_SIZE_16x16 | 0x1f7, 0x4
};

const u16 sSamusOam_Suitless_Right_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xed, OBJ_SIZE_32x16 | 0x1fa, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe5, OBJ_SIZE_16x16 | 0x1f6, 0x4
};

const u16 sSamusOam_Suitless_Right_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xed, OBJ_SIZE_32x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe5, OBJ_SIZE_16x16 | 0x1f6, 0x4
};


const u16 sSamusOam_Suitless_Right_DiagonalUp_CrouchingSuitless_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x9, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe5, OBJ_SIZE_16x16 | 0x1f6, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe4, 0x8, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe6, OBJ_SIZE_16x16 | 0x1f5, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe5, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe5, 0x7, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe6, OBJ_SIZE_16x16 | 0x1f5, 0x2
};


const u16 sSamusOam_Suitless_Right_DiagonalDown_CrouchingSuitless_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xec, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xec, 0x8, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe5, OBJ_SIZE_16x16 | 0x1f7, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_ShootingAndCrouching_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xeb, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_VERTICAL | 0xeb, 0x7, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe4, OBJ_SIZE_16x16 | 0x1f6, 0x2
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_ShootingAndCrouching_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xea, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_VERTICAL | 0xea, 0x6, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe4, OBJ_SIZE_16x16 | 0x1f6, 0x2
};


const u16 sSamusOam_Suitless_Left_GettingKnockedBack_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe9, OBJ_SIZE_16x16 | 0x1f9, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf9, 0x1f1, 0x8,
	0xe2, OBJ_X_FLIP | 0x1fd, 0xa,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1ed, 0x6
};

const u16 sSamusOam_Suitless_Left_GettingKnockedBack_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x1eb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1eb, 0x4
};


const u16 sSamusOam_Suitless_Right_GettingKnockedBack_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe1, 0x1f9, 0x8,
	0xe1, OBJ_SIZE_16x16 | 0x1, 0x0,
	0xd9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf9, OBJ_X_FLIP | 0x1ff, 0x6,
	0xe2, 0x4, 0x9
};

const u16 sSamusOam_Suitless_Right_GettingKnockedBack_Frame1[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1f5, 0x4
};


const struct SamusAnimationData sSamusAnim_Suitless_Left_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_Forward_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_Forward_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_Running[11] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Up_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Up_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Up_Standing[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Up_Shooting[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_Crouching[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_Crouching[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_Crouching[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_Crouching[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_Crouching[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_Crouching[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_ShootingAndCrouching[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_GettingKnockedBack[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_GettingKnockedBack[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_CrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_CrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_CrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_UncrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_UncrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_UncrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_CrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_CrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_CrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_UncrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_UncrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_UncrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_Up_UncrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Up_UncrouchingSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const u8 sSamusGfx_Top_Suitless_Left_MidAir_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_MidAir_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_MidAir_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_MidAir_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_MidAir_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_MidAir_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_MidAir_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_MidAir_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_MidAir_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_MidAir_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_MidAir_Frame3[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_MidAir_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_MidAir_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_MidAir_Frame3.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_MidAir_Frame4[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_MidAir_Frame4.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_MidAir_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_MidAir_Frame4.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_Landing_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Landing_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Landing_Frame1[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Landing_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Landing_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Landing_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Landing_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Landing_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Landing_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Landing_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_Landing_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Landing_Frame3.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Landing_Frame4[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Landing_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Landing_Frame5[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Landing_Frame5.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_DiagonalUp_MidAir_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalUp_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalUp_MidAir_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalUp_MidAir_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalUp_MidAir_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalUp_MidAir_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalUp_MidAir_Frame3[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalUp_MidAir_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalUp_MidAir_Frame4[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalUp_MidAir_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalUp_Landing_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalUp_Landing_Frame3.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_DiagonalDown_MidAir_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalDown_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalDown_MidAir_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalDown_MidAir_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalDown_MidAir_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalDown_MidAir_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalDown_MidAir_Frame3[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalDown_MidAir_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalDown_MidAir_Frame4[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalDown_MidAir_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalDown_Landing_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalDown_Landing_Frame3.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Up_MidAir_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Up_MidAir_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_MidAir_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Up_MidAir_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_MidAir_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Up_MidAir_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_MidAir_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Up_MidAir_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_MidAir_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Up_Landing_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_Landing_Frame3.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Down_MidAir_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Down_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Down_MidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Down_MidAir_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Down_MidAir_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Down_MidAir_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Down_MidAir_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Down_MidAir_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_MidAir_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_MidAir_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_MidAir_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_MidAir_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_MidAir_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_MidAir_Frame3[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_MidAir_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_MidAir_Frame4[SAMUS_GFX_SIZE(8, 6)] = {
	8, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_MidAir_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_Landing_Frame1[SAMUS_GFX_SIZE(7, 2)] = {
	7, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Landing_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Landing_Frame2[SAMUS_GFX_SIZE(5, 2)] = {
	5, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Landing_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Landing_Frame3[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Landing_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Right_Landing_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_Landing_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Landing_Frame4[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Landing_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Landing_Frame5[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Landing_Frame5.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_DiagonalUp_MidAir_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalUp_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalUp_MidAir_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalUp_MidAir_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalUp_MidAir_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalUp_MidAir_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalUp_MidAir_Frame3[SAMUS_GFX_SIZE(7, 5)] = {
	7, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalUp_MidAir_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalUp_MidAir_Frame4[SAMUS_GFX_SIZE(7, 5)] = {
	7, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalUp_MidAir_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_DiagonalDown_MidAir_Frame0[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalDown_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalDown_MidAir_Frame1[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalDown_MidAir_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalDown_MidAir_Frame2[SAMUS_GFX_SIZE(5, 5)] = {
	5, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalDown_MidAir_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalDown_MidAir_Frame3[SAMUS_GFX_SIZE(7, 5)] = {
	7, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalDown_MidAir_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalDown_MidAir_Frame4[SAMUS_GFX_SIZE(7, 5)] = {
	7, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalDown_MidAir_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_Up_MidAir_Frame0[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Up_MidAir_Frame1[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_MidAir_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Up_MidAir_Frame2[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_MidAir_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Up_MidAir_Frame3[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_MidAir_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Up_MidAir_Frame4[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_MidAir_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_Down_MidAir_Frame0[SAMUS_GFX_SIZE(4, 3)] = {
	4, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Down_MidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Down_MidAir_Frame1[SAMUS_GFX_SIZE(4, 3)] = {
	4, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Down_MidAir_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_StartingSpinJump_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_StartingSpinJump_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Spinning_Frame0[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Spinning_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Spinning_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Spinning_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Spinning_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Spinning_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Spinning_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Spinning_Frame3.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_StartingSpinJump_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_StartingSpinJump_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Spinning_Frame0[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Spinning_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Spinning_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Spinning_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Spinning_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Spinning_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Spinning_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Spinning_Frame3.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_StartingWallJump_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_StartingWallJump_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_StartingWallJump_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_StartingWallJump_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_StartingWallJump_Frame2[SAMUS_GFX_SIZE(6, 3)] = {
	6, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_StartingWallJump_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_StartingWallJump_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_StartingWallJump_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_StartingWallJump_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_StartingWallJump_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_StartingWallJump_Frame2[SAMUS_GFX_SIZE(6, 3)] = {
	6, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_StartingWallJump_Frame2.gfx")
};


const u16 sSamusOam_Suitless_Left_MidAir_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd7, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x4
};

const u16 sSamusOam_Suitless_Left_MidAir_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	0xdd, OBJ_SIZE_16x16 | 0x1f3, 0x4
};

const u16 sSamusOam_Suitless_Left_MidAir_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xd7, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x4
};

const u16 sSamusOam_Suitless_Left_MidAir_Frame3[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdf, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xcf, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fb, 0x6,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x4
};


const u16 sSamusOam_Suitless_Left_Landing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xed, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xed, 0x1fb, 0x6,
	0xea, OBJ_SIZE_16x16 | 0x1f3, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Left_Landing_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1f6, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1fb, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18,
	0xe5, OBJ_SIZE_16x16 | 0x1f1, 0x2
};

const u16 sSamusOam_Suitless_Left_Landing_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe5, 0x1f5, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18,
	0xe0, OBJ_SIZE_16x16 | 0x1f0, 0x2
};

const u16 sSamusOam_Suitless_Left_Landing_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f5, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xdd, OBJ_SIZE_16x16 | 0x1f0, 0x2
};

const u16 sSamusOam_Suitless_Left_Landing_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f5, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xdd, OBJ_SIZE_16x16 | 0x1f0, 0x2
};

const u16 sSamusOam_Suitless_Left_Landing_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f5, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xdd, OBJ_SIZE_16x16 | 0x1f0, 0x2
};


const u16 sSamusOam_Suitless_Left_DiagonalUp_MidAir_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdc, 0x1f7, 0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xd3, OBJ_SIZE_16x16 | 0x1f2, 0x2,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_MidAir_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1f7, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xd4, OBJ_SIZE_16x16 | 0x1f2, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_MidAir_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdc, 0x1f7, 0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xd3, OBJ_SIZE_16x16 | 0x1f2, 0x2,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_MidAir_Frame3[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xdc, 0x1f7, 0x4,
	0xcf, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fc, 0x6,
	0xd3, OBJ_SIZE_16x16 | 0x1f2, 0x2,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_Suitless_Left_DiagonalUp_Landing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1f7, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xed, 0x1fc, 0x6,
	0xe1, OBJ_SIZE_16x16 | 0x1f2, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Landing_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe7, 0x1f7, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1fc, 0x6,
	0xde, OBJ_SIZE_16x16 | 0x1f2, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Landing_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f6, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xd9, OBJ_SIZE_16x16 | 0x1f1, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Landing_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f6, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xd6, OBJ_SIZE_16x16 | 0x1f1, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Landing_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f6, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xd6, OBJ_SIZE_16x16 | 0x1f1, 0x2
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_Landing_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f6, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xd6, OBJ_SIZE_16x16 | 0x1f1, 0x2
};


const u16 sSamusOam_Suitless_Left_DiagonalDown_MidAir_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd7, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xde, OBJ_SIZE_16x16 | 0x1f2, 0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_MidAir_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f2, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_MidAir_Frame3[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xcf, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fb, 0x6,
	0xde, OBJ_SIZE_16x16 | 0x1f2, 0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_MidAir_Frame5[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xcf, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1fb, 0x6,
	0xde, OBJ_SIZE_16x16 | 0x1f2, 0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_Suitless_Left_DiagonalDown_Landing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe9, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xed, 0x1fb, 0x6,
	0xec, OBJ_SIZE_16x16 | 0x1f2, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Landing_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe6, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1fb, 0x6,
	0xe9, OBJ_SIZE_16x16 | 0x1f2, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Landing_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f1, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Landing_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe1, OBJ_SIZE_16x16 | 0x1f1, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_Landing_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe1, OBJ_SIZE_16x16 | 0x1f1, 0x4
};


const u16 sSamusOam_Suitless_Left_Up_MidAir_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd7, OBJ_SIZE_16x16 | 0x1fd, 0x2,
	0xd1, OBJ_SIZE_16x16 | 0x1f7, 0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Left_Up_MidAir_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd5, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1fd, 0x2,
	0xd2, OBJ_SIZE_16x16 | 0x1f7, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Left_Up_MidAir_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd7, OBJ_SIZE_16x16 | 0x1fd, 0x2,
	0xd1, OBJ_SIZE_16x16 | 0x1f7, 0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Left_Up_MidAir_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd7, OBJ_SIZE_16x16 | 0x1fd, 0x2,
	0xd1, OBJ_SIZE_16x16 | 0x1f7, 0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Left_Up_MidAir_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd4, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xd7, OBJ_SIZE_16x16 | 0x1fd, 0x2,
	0xd1, OBJ_SIZE_16x16 | 0x1f7, 0x4,
	0xe3, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_Suitless_Left_Up_Landing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe2, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1fd, 0x2,
	0xdf, OBJ_SIZE_16x16 | 0x1f7, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Left_Up_Landing_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1fd, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Left_Up_Landing_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xd7, OBJ_SIZE_16x16 | 0x1f6, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Left_Up_Landing_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xd4, OBJ_SIZE_16x16 | 0x1f6, 0x4
};

const u16 sSamusOam_Suitless_Left_Up_Landing_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xd4, OBJ_SIZE_16x16 | 0x1f6, 0x4
};

const u16 sSamusOam_Suitless_Left_Up_Landing_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd7, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xd4, OBJ_SIZE_16x16 | 0x1f6, 0x4
};


const u16 sSamusOam_Suitless_Left_Down_MidAir_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xe2, 0x1fd, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xe7, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1fc, 0x16
};

const u16 sSamusOam_Suitless_Left_Down_MidAir_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xe2, 0x1fd, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xe7, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe2, OBJ_SIZE_16x16 | 0x1fc, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1fc, 0x16
};


const u16 sSamusOam_Suitless_Right_MidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, OBJ_SIZE_32x16 | 0x1f9, 0x0,
	0xd7, OBJ_SIZE_16x16 | 0x1f5, 0x4,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Right_MidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x16 | 0x1f9, 0x0,
	0xd8, OBJ_SIZE_16x16 | 0x1f5, 0x4,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Right_MidAir_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, OBJ_SIZE_32x16 | 0x1f9, 0x0,
	0xd7, OBJ_SIZE_16x16 | 0x1f5, 0x4,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Right_MidAir_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, OBJ_SIZE_32x16 | 0x1f9, 0x0,
	0xcf, OBJ_SIZE_16x16 | 0x1f5, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f5, 0x6,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Right_MidAir_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, OBJ_SIZE_32x16 | 0x1f9, 0x0,
	0xcf, OBJ_SIZE_16x16 | 0x1f5, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f5, 0x6,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Right_MidAir_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xdf, OBJ_SIZE_32x16 | 0x1f9, 0x0,
	0xcf, OBJ_SIZE_16x16 | 0x1f5, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f5, 0x6,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_Suitless_Right_Landing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xed, OBJ_SIZE_32x16 | 0x1f9, 0x0,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xed, 0x1f5, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Right_Landing_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f9, 0x2,
	0xe9, 0x9, 0x6,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1f5, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_Landing_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1fa, 0x2,
	0xe4, 0xa, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_Landing_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe1, OBJ_SIZE_32x8 | 0x1fa, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_Landing_Frame4[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe1, OBJ_SIZE_32x8 | 0x1fa, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_Landing_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe1, OBJ_SIZE_32x8 | 0x1fa, 0x2,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18
};


const u16 sSamusOam_Suitless_Right_DiagonalUp_MidAir_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd5, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd5, 0x7, 0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_MidAir_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd6, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd6, 0x7, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_MidAir_Frame3[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd5, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd5, 0x7, 0x4,
	0xcf, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f4, 0x5,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_Suitless_Right_DiagonalUp_Landing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe3, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe3, 0x7, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xed, 0x1f4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Landing_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe0, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x7, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1f4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Landing_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xdb, 0x8, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Landing_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x8, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Landing_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x8, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Landing_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x8, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_Suitless_Right_DiagonalUp_MidAir_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_VERTICAL | 0xde, 0x6, 0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_MidAir_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdf, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_VERTICAL | 0xdf, 0x6, 0x4,
	0xd8, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_MidAir_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xde, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_VERTICAL | 0xde, 0x6, 0x4,
	0xd7, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_MidAir_Frame3[OAM_DATA_SIZE(6)] = {
	0x6,
	0xde, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_VERTICAL | 0xde, 0x6, 0x4,
	0xcf, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xdf, 0x1f5, 0x5,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_Suitless_Right_DiagonalUp_Landing_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xec, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_VERTICAL | 0xec, 0x6, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xed, 0x1f5, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Landing_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe9, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe9, 0x6, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xea, 0x1f5, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Landing_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe4, 0x7, 0x4,
	0xdd, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_Landing_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x7, 0x4,
	0xda, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_Suitless_Right_Up_MidAir_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xcd, 0x1fe, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xdd, 0x1f6, 0x3,
	0xd7, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xe3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Right_Up_MidAir_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xce, 0x1fe, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1f6, 0x3,
	0xd8, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xe4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const u16 sSamusOam_Suitless_Right_Up_Landing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_VERTICAL | 0xdb, 0x1fe, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xeb, 0x1f6, 0x3,
	0xe5, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Right_Up_Landing_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x1fe, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f6, 0x3,
	0xe2, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_Up_Landing_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd3, 0x1ff, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe3, 0x1f7, 0x3,
	0xdd, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18
};

const u16 sSamusOam_Suitless_Right_Up_Landing_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xd0, 0x1ff, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f7, 0x3,
	0xda, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_Suitless_Right_Down_MidAir_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x1fd, 0x2,
	0xf1, 0x1fd, 0x3,
	0xdd, OBJ_SIZE_16x16 | 0x1fb, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x16
};


const u16 sSamusOam_Suitless_Left_StartingSpinJump_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x4, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x5
};


const u16 sSamusOam_Suitless_Left_Spinning_Frame0[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x16 | 0x1f1, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf3, OBJ_SIZE_32x8 | 0x1f1, 0x4
};

const u16 sSamusOam_Suitless_Left_Spinning_Frame1[OAM_DATA_SIZE(1)] = {
	0x1,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f0, 0x0
};

const u16 sSamusOam_Suitless_Left_Spinning_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	OBJ_SHAPE_VERTICAL | 0xdf, 0x3, 0x4,
	0xef, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_VERTICAL | 0xef, 0x3, 0x5
};

const u16 sSamusOam_Suitless_Spinning_Frame3[OAM_DATA_SIZE(2)] = {
	0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x2
};

const u16 sSamusOam_Suitless_Left_Spinning_Frame4[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xed, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe5, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x1ef, 0x4
};

const u16 sSamusOam_Suitless_Left_Spinning_Frame5[OAM_DATA_SIZE(1)] = {
	0x1,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x0
};

const u16 sSamusOam_Suitless_Left_Spinning_Frame6[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf1, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1fd, 0x0,
	OBJ_SHAPE_VERTICAL | 0xf1, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f5, 0x4,
	0xe1, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1fd, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe1, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f5, 0x5
};

const u16 sSamusOam_Suitless_Left_Spinning_Frame7[OAM_DATA_SIZE(2)] = {
	0x2,
	0xf0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2
};


const u16 sSamusOam_Suitless_Right_StartingSpinJump_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x4, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x5
};


const u16 sSamusOam_Suitless_Right_Spinning_Frame0[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf3, OBJ_SIZE_32x8 | 0x1ef, 0x4
};

const u16 sSamusOam_Suitless_Right_Spinning_Frame1[OAM_DATA_SIZE(1)] = {
	0x1,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f0, 0x0
};

const u16 sSamusOam_Suitless_Right_Spinning_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdf, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	OBJ_SHAPE_VERTICAL | 0xdf, 0x5, 0x4,
	0xef, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	OBJ_SHAPE_VERTICAL | 0xef, 0x5, 0x5
};

const u16 sSamusOam_Suitless_Right_Spinning_Frame4[OAM_DATA_SIZE(2)] = {
	0x2,
	OBJ_SHAPE_HORIZONTAL | 0xed, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f1, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe5, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x8 | 0x1f1, 0x4
};

const u16 sSamusOam_Suitless_Right_Spinning_Frame5[OAM_DATA_SIZE(1)] = {
	0x1,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x0
};

const u16 sSamusOam_Suitless_Right_Spinning_Frame6[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf1, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x0,
	OBJ_SHAPE_VERTICAL | 0xf1, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f3, 0x4,
	0xe1, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe1, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f3, 0x5
};

const u16 sSamusOam_Suitless_Right_Spinning_Frame7[OAM_DATA_SIZE(2)] = {
	0x2,
	0xf0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x2
};


const u16 sSamusOam_Suitless_Right_StartingWallJump_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x2, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f2, 0x2,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x2, 0x5
};

const u16 sSamusOam_Suitless_Right_StartingWallJump_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x0, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f0, 0x2,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x0, 0x5
};

const u16 sSamusOam_Suitless_Right_StartingWallJump_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x0, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f0, 0x3,
	0xf8, 0x0, 0x5
};


const u16 sSamusOam_Suitless_Left_StartingWallJump_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x6, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x6, 0x5
};

const u16 sSamusOam_Suitless_Left_StartingWallJump_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x8, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x8, 0x5
};

const u16 sSamusOam_Suitless_Left_StartingWallJump_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x8, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, 0x3,
	0xf8, 0x8, 0x5
};


const struct SamusAnimationData sSamusAnim_Suitless_Left_MidAir[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Landing[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_MidAir[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_Landing[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_MidAir[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_Landing[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Up_MidAir[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Up_Landing[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Down_MidAir[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_MidAir[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Landing[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_MidAir[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_Landing[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_MidAir[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_Landing[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Up_MidAir[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Up_Landing[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Down_MidAir[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_Spinning[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Spinning[9] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 1,
	},
	[8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_StartingSpinJump[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_StartingSpinJump[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_StartingWallJump[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_StartingWallJump[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const u8 sSamusGfx_Top_Suitless_Left_HangingOnLedge_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_HangingOnLedge_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_HangingOnLedgeSuitless_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_HangingOnLedgeSuitless_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_HangingOnLedge_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_HangingOnLedge_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_HangingOnLedge_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_HangingOnLedge_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_PullingYourselfUpFromHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_PullingYourselfUpFromHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_PullingYourselfUpFromHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_PullingYourselfUpFromHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_PullingYourselfUpFromHanging_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_PullingYourselfUpFromHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_PullingYourselfUpFromHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_PullingYourselfUpFromHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_PullingYourselfUpFromHanging_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_PullingYourselfUpFromHanging_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_PullingYourselfUpFromHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_PullingYourselfUpFromHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_PullingYourselfForwardFromHanging_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_PullingYourselfForwardFromHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_PullingYourselfForwardFromHanging_Frame0[SAMUS_GFX_SIZE(5, 3)] = {
	5, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_PullingYourselfForwardFromHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_PullingYourselfForwardFromHanging_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_PullingYourselfForwardFromHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_PullingYourselfForwardFromHanging_Frame1[SAMUS_GFX_SIZE(3, 2)] = {
	3, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_PullingYourselfForwardFromHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_PullingYourselfForwardFromHanging_Frame2[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_PullingYourselfForwardFromHanging_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_PullingYourselfForwardFromHanging_Frame2[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_PullingYourselfForwardFromHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_PullingYourselfForwardFromHanging_Frame3[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_PullingYourselfForwardFromHanging_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_PullingYourselfForwardFromHanging_Frame3[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_PullingYourselfForwardFromHanging_Frame3.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_TurningToAimWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_TurningToAimWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Right_TurningToAimWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_TurningToAimWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Right_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Right_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Right_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_ShootingWhileHanging_Frame0[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_ShootingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_ShootingWhileHanging_Frame1[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_ShootingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_DiagonalUp_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalUp_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalUp_ShootingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalUp_ShootingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalUp_ShootingWhileHanging_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalUp_ShootingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_DiagonalDown_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalDown_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalDown_ShootingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalDown_ShootingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_DiagonalDown_ShootingWhileHanging_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_DiagonalDown_ShootingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_Up_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Up_ShootingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_ShootingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Up_ShootingWhileHanging_Frame1[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Up_ShootingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_Down_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Down_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Down_ShootingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Down_ShootingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Down_ShootingWhileHanging_Frame1[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Down_ShootingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_HangingOnLedge_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_HangingOnLedge_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Right_HangingOnLedgeSuitless_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_HangingOnLedgeSuitless_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Right_HangingOnLedge_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_HangingOnLedge_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Right_HangingOnLedge_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_HangingOnLedge_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_PullingYourselfUpFromHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_PullingYourselfUpFromHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_PullingYourselfUpFromHanging_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_PullingYourselfUpFromHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_PullingYourselfUpFromHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_PullingYourselfUpFromHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_PullingYourselfForwardFromHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_PullingYourselfForwardFromHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_PullingYourselfForwardFromHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_PullingYourselfForwardFromHanging_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_PullingYourselfForwardFromHanging_Frame2[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_PullingYourselfForwardFromHanging_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_PullingYourselfForwardFromHanging_Frame3[SAMUS_GFX_SIZE(6, 2)] = {
	6, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_PullingYourselfForwardFromHanging_Frame3.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_TurningToAimWhileHanging_Frame0[SAMUS_GFX_SIZE(7, 7)] = {
	7, 7,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_TurningToAimWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_TurningToAimWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_TurningToAimWhileHanging_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_AimingWhileHanging_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_AimingWhileHanging_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_AimingWhileHanging_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_AimingWhileHanging_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_ShootingWhileHanging_Frame0[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_ShootingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_ShootingWhileHanging_Frame1[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_ShootingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_DiagonalUp_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalUp_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalUp_ShootingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalUp_ShootingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalUp_ShootingWhileHanging_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalUp_ShootingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_DiagonalDown_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalDown_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalDown_ShootingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalDown_ShootingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_DiagonalDown_ShootingWhileHanging_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_DiagonalDown_ShootingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Up_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Up_ShootingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_ShootingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Up_ShootingWhileHanging_Frame1[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Up_ShootingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Down_AimingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Down_AimingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Down_ShootingWhileHanging_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Down_ShootingWhileHanging_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_Down_ShootingWhileHanging_Frame1[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Down_ShootingWhileHanging_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_HangingOnLedgeSuitless_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_HangingOnLedgeSuitless_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_HangingOnLedgeSuitless_Frame1[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_HangingOnLedgeSuitless_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_HangingOnLedgeSuitless_Frame2[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_HangingOnLedgeSuitless_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_HangingOnLedgeSuitless_Frame3[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_HangingOnLedgeSuitless_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_HangingOnLedgeSuitless_Frame4[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_HangingOnLedgeSuitless_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_HangingOnLedgeSuitless_Frame0[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_HangingOnLedgeSuitless_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_HangingOnLedgeSuitless_Frame1[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_HangingOnLedgeSuitless_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_HangingOnLedgeSuitless_Frame2[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_HangingOnLedgeSuitless_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_HangingOnLedgeSuitless_Frame3[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_HangingOnLedgeSuitless_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_HangingOnLedgeSuitless_Frame4[SAMUS_GFX_SIZE(6, 5)] = {
	6, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_HangingOnLedgeSuitless_Frame4.gfx")
};


const u16 sSamusOam_Suitless_Right_HangingOnLedgeSuitless_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe1, OBJ_X_FLIP | 0x1fe, 0x4,
	0xf1, OBJ_X_FLIP | 0x1fe, 0x5
};


const u16 sSamusOam_Suitless_Right_PulingYourselfUpFromHanging_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xde, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xe2, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xd9, OBJ_SIZE_16x16 | 0x1f6, 0x2
};

const u16 sSamusOam_Suitless_Right_PulingYourselfUpFromHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe5, OBJ_SIZE_16x16 | 0x1f5, 0x0,
	0xe8, OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf8, OBJ_SIZE_16x16 | 0x1fa, 0x16,
	0xe0, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	0xe7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x4
};

const u16 sSamusOam_Suitless_Right_PulingYourselfUpFromHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe1, OBJ_SIZE_16x16 | 0x1fd, 0x14,
	0xf1, OBJ_SIZE_16x16 | 0x1fd, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	0xe6, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x4
};


const u16 sSamusOam_Suitless_Right_PulingYourselfForwardFromHanging_Frame0[OAM_DATA_SIZE(7)] = {
	0x7,
	OBJ_SHAPE_VERTICAL | 0xed, 0x1ff, 0x4,
	0xfd, 0x1ff, 0x5,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xea, OBJ_SIZE_16x16 | 0x1fe, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xfa, 0x1fe, 0x17,
	OBJ_SHAPE_VERTICAL | 0xf2, 0x1f6, 0x16,
	0xef, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x2
};

const u16 sSamusOam_Suitless_Right_PulingYourselfForwardFromHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xea, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf8, 0x8, 0x16,
	0xe4, OBJ_SIZE_16x16 | 0x1f5, 0x2,
	0xeb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f4, 0x4
};

const u16 sSamusOam_Suitless_Right_PulingYourselfForwardFromHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1ee, 0x4
};

const u16 sSamusOam_Suitless_Right_PulingYourselfForwardFromHanging_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1f5, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x18,
	0xdc, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1f0, 0x4
};


const u16 sSamusOam_Suitless_Right_TurningToAimWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x3, 0x4
};


const u16 sSamusOam_Suitless_Right_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x8 | 0x1ff, 0x4
};

const u16 sSamusOam_Suitless_Right_AimingWhileHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x8 | 0x1ff, 0x4
};

const u16 sSamusOam_Suitless_Right_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x8 | 0x1fe, 0x4
};

const u16 sSamusOam_Suitless_Right_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x8 | 0x1fd, 0x4
};


const u16 sSamusOam_Suitless_Right_DiagonalUp_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1, 0x4
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_AimingWhileHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1, 0x4
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xdc, OBJ_SIZE_16x16 | 0x0, 0x4
};

const u16 sSamusOam_Suitless_Right_DiagonalUp_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xdc, OBJ_SIZE_16x16 | 0x1ff, 0x4
};


const u16 sSamusOam_Suitless_Right_DiagonalDown_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xe2, OBJ_SIZE_16x16 | 0x0, 0x4
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_AimingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xe2, OBJ_SIZE_16x16 | 0x0, 0x4
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_AimingWhileHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xe2, OBJ_SIZE_16x16 | 0x0, 0x4
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xe1, OBJ_SIZE_16x16 | 0x1ff, 0x4
};

const u16 sSamusOam_Suitless_Right_DiagonalDown_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	0xe0, OBJ_SIZE_16x16 | 0x1fe, 0x4
};


const u16 sSamusOam_Suitless_Right_Up_AimingWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd0, 0x1fe, 0x4,
	0xe0, 0x1fe, 0x5
};

const u16 sSamusOam_Suitless_Right_Up_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd1, 0x1fe, 0x4,
	0xe1, 0x1fe, 0x5
};

const u16 sSamusOam_Suitless_Right_Up_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xd2, 0x1fe, 0x4,
	0xe2, 0x1fe, 0x5
};


const u16 sSamusOam_Suitless_Right_Down_AimingWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xdb, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xe2, 0x1ff, 0x4,
	0xf2, 0x1ff, 0x5
};

const u16 sSamusOam_Suitless_Right_Down_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x1ff, 0x4,
	0xf1, 0x1ff, 0x5
};

const u16 sSamusOam_Suitless_Right_Down_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	0xdc, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xda, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe4, OBJ_SIZE_16x16 | 0x1f7, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f7, 0x16,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x1ff, 0x4,
	0xf0, 0x1ff, 0x5
};


const u16 sSamusOam_Suitless_Right_HangingOnLedge_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x1fa, 0x4,
	0xf1, 0x1fa, 0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x2
};


const u16 sSamusOam_Suitless_Right_PullingYourselfUpFromHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xe2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xd9, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xde, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x4
};

const u16 sSamusOam_Suitless_Right_PullingYourselfUpFromHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe7, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x16,
	0xe0, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xe5, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fb, 0x4
};

const u16 sSamusOam_Suitless_Right_PullingYourselfUpFromHanging_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xe6, OBJ_SIZE_16x16 | 0x1fd, 0x0,
	0xe1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x14,
	0xf1, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x16,
	0xde, OBJ_SIZE_16x16 | 0x1fd, 0x2
};


const u16 sSamusOam_Suitless_Right_PullingYourselfForwardFromHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xef, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xe8, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	0xea, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f2, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xfa, OBJ_X_FLIP | 0x1f2, 0x17,
	OBJ_SHAPE_VERTICAL | 0xf2, OBJ_X_FLIP | 0x2, 0x16
};

const u16 sSamusOam_Suitless_Right_PullingYourselfForwardFromHanging_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xeb, OBJ_SIZE_16x16 | 0x1fc, 0x0,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x14,
	0xf8, OBJ_X_FLIP | 0x1f0, 0x16,
	0xe4, OBJ_SIZE_16x16 | 0x1fb, 0x2
};

const u16 sSamusOam_Suitless_Right_PullingYourselfForwardFromHanging_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe7, OBJ_SIZE_32x8 | 0x1fc, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x0
};

const u16 sSamusOam_Suitless_Right_PullingYourselfForwardFromHanging_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x8 | 0x1fa, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f8, 0x18,
	0xdc, OBJ_SIZE_16x16 | 0x1f6, 0x0
};


const u16 sSamusOam_Suitless_Left_TurningToAimWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xe2, OBJ_SIZE_16x16 | 0x1ed, 0x0,
	OBJ_SHAPE_VERTICAL | 0xe2, 0x1fd, 0x6,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x4
};


const u16 sSamusOam_Suitless_Left_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x8 | 0x1eb, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x2
};

const u16 sSamusOam_Suitless_Left_AimingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x8 | 0x1eb, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x2
};

const u16 sSamusOam_Suitless_Left_AimingWhileHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x8 | 0x1eb, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x2
};

const u16 sSamusOam_Suitless_Left_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x8 | 0x1ec, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x2
};

const u16 sSamusOam_Suitless_Left_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x8 | 0x1ed, 0x4,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1fa, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fd, 0x2
};


const u16 sSamusOam_Suitless_Left_DiagonalUp_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1ef, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_AimingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1ef, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_AimingWhileHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdb, OBJ_SIZE_16x16 | 0x1ef, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalUp_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xdc, OBJ_SIZE_16x16 | 0x1f1, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fd, 0x4
};


const u16 sSamusOam_Suitless_Left_DiagonalDown_AimingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe2, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_AimingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe2, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_AimingWhileHanging_Frame2[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe2, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, OBJ_SIZE_16x16 | 0x1f1, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x4
};

const u16 sSamusOam_Suitless_Left_DiagonalDown_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, OBJ_SIZE_16x16 | 0x1f2, 0x0,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xda, OBJ_SIZE_16x16 | 0x1fa, 0x2,
	0xdc, OBJ_SIZE_16x16 | 0x1fd, 0x4
};


const u16 sSamusOam_Suitless_Left_Up_AimingWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xd0, 0x1fa, 0x4,
	0xe0, 0x1fa, 0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x2
};

const u16 sSamusOam_Suitless_Left_Up_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xd1, 0x1fa, 0x4,
	0xe1, 0x1fa, 0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x2
};

const u16 sSamusOam_Suitless_Left_Up_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xd2, 0x1fa, 0x4,
	0xe2, 0x1fa, 0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdc, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fd, 0x2
};


const u16 sSamusOam_Suitless_Left_Down_AimingWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xe2, 0x1fa, 0x4,
	0xf2, 0x1fa, 0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x2
};

const u16 sSamusOam_Suitless_Left_Down_ShootingWhileHanging_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x1fa, 0x4,
	0xf1, 0x1fa, 0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x2
};

const u16 sSamusOam_Suitless_Left_Down_ShootingWhileHanging_Frame1[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x1fa, 0x4,
	0xf0, 0x1fa, 0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xda, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fd, 0x2
};


const u16 sSamusOam_Suitless_Right_HangingOnLedgeSuitless_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	OBJ_SHAPE_VERTICAL | 0xe1, 0x1fa, 0x4,
	0xf1, 0x1fa, 0x5,
	0xe4, OBJ_SIZE_16x16 | 0x1f9, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1f9, 0x16,
	0xdb, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xdc, OBJ_SIZE_16x16 | 0x1fc, 0x2
};


const struct SamusAnimationData sSamusAnim_Suitless_Left_HangingOnLedge[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_PullingYourselfUpFromHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_PullingYourselfForwardFromHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_TurningToAimWhileHanging[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Up_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Down_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Up_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Down_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_HangingOnLedge[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_PullingYourselfUpFromHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_PullingYourselfForwardFromHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_TurningToAimWhileHanging[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Up_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Down_AimingWhileHanging[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Up_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Down_ShootingWhileHanging[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_HangingOnLedgeSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_HangingOnLedgeSuitless[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const u8 sSamusGfx_Top_Suitless_TurningAround_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_TurningAround_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_TurningAround_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_TurningAround_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_TurningAround_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_TurningAround_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_DiagonalUp_TurningAround_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_DiagonalUp_TurningAround_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_DiagonalUp_TurningAround_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_DiagonalUp_TurningAround_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_DiagonalDown_TurningAround_Frame0[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_DiagonalDown_TurningAround_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_DiagonalDown_TurningAround_Frame1[SAMUS_GFX_SIZE(6, 4)] = {
	6, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_DiagonalDown_TurningAround_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Up_TurningAround_Frame0[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Up_TurningAround_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Up_TurningAround_Frame1[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Up_TurningAround_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_TurningAroundAndCrouching_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_TurningAroundAndCrouching_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_TurningAroundAndCrouching_Frame1[SAMUS_GFX_SIZE(3, 3)] = {
	3, 3,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_TurningAroundAndCrouching_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_TurningAroundMidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_TurningAroundMidAir_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Down_TurningAroundMidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Down_TurningAroundMidAir_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Down_TurningAroundMidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Down_TurningAroundMidAir_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Down_TurningAroundMidAir_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Down_TurningAroundMidAir_Frame1.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_TurningAroundMidAir_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_TurningAroundMidAir_Frame0.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_FacingTheForeground_Frame0[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_FacingTheForeground_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_FacingTheForeground_Frame1[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_FacingTheForeground_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_FacingTheForeground_Frame2[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_FacingTheForeground_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_Left_TurningFromFacingTheForeground_Frame0[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_TurningFromFacingTheForeground_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Right_TurningFromFacingTheForeground_Frame0[SAMUS_GFX_SIZE(9, 6)] = {
	9, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_TurningFromFacingTheForeground_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_SavingLoadingGame_Frame1[SAMUS_GFX_SIZE(11, 6)] = {
	11, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_SavingLoadingGame_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_SavingLoadingGame_Frame2[SAMUS_GFX_SIZE(11, 6)] = {
	11, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_SavingLoadingGame_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_SavingLoadingGame_Frame3[SAMUS_GFX_SIZE(10, 6)] = {
	10, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_SavingLoadingGame_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_SavingLoadingGame_Frame4[SAMUS_GFX_SIZE(11, 6)] = {
	11, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_SavingLoadingGame_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_SavingLoadingGame_Frame5[SAMUS_GFX_SIZE(11, 6)] = {
	11, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_SavingLoadingGame_Frame5.gfx")
};

const u8 sSamusGfx_Top_Suitless_SavingLoadingGame_Frame6[SAMUS_GFX_SIZE(11, 6)] = {
	11, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_SavingLoadingGame_Frame6.gfx")
};

const u8 sSamusGfx_Top_Suitless_SavingLoadingGame_Frame7[SAMUS_GFX_SIZE(11, 6)] = {
	11, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_SavingLoadingGame_Frame7.gfx")
};

const u8 sSamusGfx_Top_Suitless_SavingLoadingGame_Frame8[SAMUS_GFX_SIZE(11, 6)] = {
	11, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_SavingLoadingGame_Frame8.gfx")
};

const u8 sSamusGfx_Top_Suitless_SavingLoadingGame_Frame9[SAMUS_GFX_SIZE(10, 6)] = {
	10, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_SavingLoadingGame_Frame9.gfx")
};

const u8 sSamusGfx_Top_Suitless_SavingLoadingGame_Frame10[SAMUS_GFX_SIZE(10, 6)] = {
	10, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_SavingLoadingGame_Frame10.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_CrouchingToCrawl_Frame0[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_CrouchingToCrawl_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_CrouchingToCrawl_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_CrouchingToCrawl_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_CrouchingToCrawl_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_CrouchingToCrawl_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_CrouchingToCrawl_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_CrouchingToCrawl_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_CrouchingToCrawl_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_CrouchingToCrawl_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_CrouchingToCrawl_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_CrouchingToCrawl_Frame2.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_CrouchingToCrawl_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_CrouchingToCrawl_Frame3.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_CrawlingStopped_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_CrawlingStopped_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_CrawlingStopped_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_CrawlingStopped_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_CrawlingStopped_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_CrawlingStopped_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_CrawlingStopped_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_CrawlingStopped_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_ShootingWhileCrawling_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_ShootingWhileCrawling_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_ShootingWhileCrawling_Frame0[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_ShootingWhileCrawling_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_ShootingWhileCrawling_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_ShootingWhileCrawling_Frame1.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_ShootingWhileCrawling_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_ShootingWhileCrawling_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Crawling_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Crawling_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_Crawling_Frame1[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_Crawling_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Crawling_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Crawling_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_Crawling_Frame2[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_Crawling_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Crawling_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Crawling_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_Crawling_Frame3[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_Crawling_Frame3.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Crawling_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Crawling_Frame4.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_Crawling_Frame4[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_Crawling_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_Crawling_Frame5[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_Crawling_Frame5.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_Crawling_Frame5[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_Crawling_Frame5.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_CrouchingToCrawl_Frame0[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_CrouchingToCrawl_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_CrouchingToCrawl_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_CrouchingToCrawl_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_CrouchingToCrawl_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_CrouchingToCrawl_Frame2.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_CrawlingStopped_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_CrawlingStopped_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_ShootingWhileCrawling_Frame2[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_ShootingWhileCrawling_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_ShootingWhileCrawling_Frame0[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_ShootingWhileCrawling_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_ShootingWhileCrawling_Frame1[SAMUS_GFX_SIZE(8, 8)] = {
	8, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_ShootingWhileCrawling_Frame1.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_Crawling_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Crawling_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Crawling_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Crawling_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Crawling_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Crawling_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Crawling_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Crawling_Frame4.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_Crawling_Frame5[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_Crawling_Frame5.gfx")
};


const u8 sSamusGfx_Top_Suitless_Left_StartingToCrawl_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_StartingToCrawl_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_StartingToCrawl_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_StartingToCrawl_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_StartingToCrawl_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_StartingToCrawl_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_StartingToCrawl_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_StartingToCrawl_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Left_StartingToCrawl_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Left_StartingToCrawl_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_TurningAroundWhileCrawling_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_TurningAroundWhileCrawling_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_TurningAroundWhileCrawling_Frame0[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_TurningAroundWhileCrawling_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_TurningAroundWhileCrawling_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_TurningAroundWhileCrawling_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_TurningAroundWhileCrawling_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_TurningAroundWhileCrawling_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_TurningAroundWhileCrawling_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_TurningAroundWhileCrawling_Frame0.gfx")
};


const u8 sSamusGfx_Top_Suitless_Right_StartingToCrawl_Frame0[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_StartingToCrawl_Frame0.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_StartingToCrawl_Frame1[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_StartingToCrawl_Frame1.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_StartingToCrawl_Frame2[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_StartingToCrawl_Frame2.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_StartingToCrawl_Frame3[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_StartingToCrawl_Frame3.gfx")
};

const u8 sSamusGfx_Top_Suitless_Right_StartingToCrawl_Frame4[SAMUS_GFX_SIZE(6, 6)] = {
	6, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Top_Right_StartingToCrawl_Frame4.gfx")
};


const u8 sSamusGfx_Top_Suitless_DownloadingMapData_Frame0[SAMUS_GFX_SIZE(12, 8)] = {
	12, 8,
	_INCBIN_U8("data/samus/graphics/suitless/Top_DownloadingMapData_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_DownloadingMapData_Frame0[SAMUS_GFX_SIZE(2, 0)] = {
	2, 0,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DownloadingMapData_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_DownloadingMapData_Frame1[SAMUS_GFX_SIZE(3, 1)] = {
	3, 1,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DownloadingMapData_Frame1.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_DownloadingMapData_Frame2[SAMUS_GFX_SIZE(2, 2)] = {
	2, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DownloadingMapData_Frame2.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_DownloadingMapData_Frame3[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DownloadingMapData_Frame3.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_DownloadingMapData_Frame4[SAMUS_GFX_SIZE(4, 2)] = {
	4, 2,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DownloadingMapData_Frame4.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_DownloadingMapData_Frame5[SAMUS_GFX_SIZE(8, 4)] = {
	8, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DownloadingMapData_Frame5.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_DownloadingMapData_Frame6[SAMUS_GFX_SIZE(4, 4)] = {
	4, 4,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DownloadingMapData_Frame6.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_DownloadingMapData_Frame7[SAMUS_GFX_SIZE(4, 0)] = {
	4, 0,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_DownloadingMapData_Frame7.gfx")
};


const u8 sSamusGfx_Bottom_Suitless_FacingTheBackground_Frame0[SAMUS_GFX_SIZE(7, 6)] = {
	7, 6,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_FacingTheBackground_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Left_TurningFromFacingTheBackground_Frame0[SAMUS_GFX_SIZE(7, 5)] = {
	7, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Left_TurningFromFacingTheBackground_Frame0.gfx")
};

const u8 sSamusGfx_Bottom_Suitless_Right_TurningFromFacingTheBackground_Frame0[SAMUS_GFX_SIZE(7, 5)] = {
	7, 5,
	_INCBIN_U8("data/samus/graphics/suitless/Bottom_Right_TurningFromFacingTheBackground_Frame0.gfx")
};


const u16 sSamusOam_Suitless_TurningAround_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xdc, OBJ_SIZE_32x16 | 0x1ee, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_TurningAround_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xdc, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_DiagonalUp_TurningAround_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd7, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_DiagonalUp_TurningAround_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd7, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_DiagonalDown_TurningAround_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdb, OBJ_SIZE_32x16 | 0x1f1, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xeb, 0x1f1, 0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_DiagonalDown_TurningAround_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xdb, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xeb, 0x1ff, 0x4,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Up_TurningAround_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xce, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f0, 0x14
};

const u16 sSamusOam_Suitless_Up_TurningAround_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xce, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xde, 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x18,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, 0x14
};


const u16 sSamusOam_Suitless_TurningAroundAndCrouhing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_SIZE_32x16 | 0x1ed, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x16
};

const u16 sSamusOam_Suitless_TurningAroundAndCrouhing_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_SIZE_32x16 | 0x1f3, 0x0,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f4, 0x16
};

const u16 sSamusOam_Suitless_DiagonalUp_TurningAroundAndCrouhing_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x16
};

const u16 sSamusOam_Suitless_DiagonalUp_TurningAroundAndCrouhing_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1f1, 0x0,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f4, 0x16
};

const u16 sSamusOam_Suitless_DiagonalDown_TurningAroundAndCrouhing_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_SIZE_32x16 | 0x1f1, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf6, 0x1f1, 0x4,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x16
};

const u16 sSamusOam_Suitless_DiagonalDown_TurningAroundAndCrouhing_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_SIZE_32x16 | 0x1ef, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf6, 0x1ff, 0x4,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x14,
	OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1f4, 0x16
};


const u16 sSamusOam_Suitless_Down_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	0xe9, OBJ_SIZE_16x16 | 0x1f7, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1fa, 0x16
};

const u16 sSamusOam_Suitless_Down_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xd9, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	0xe9, OBJ_SIZE_16x16 | 0x1f9, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_Suitless_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd9, OBJ_SIZE_32x16 | 0x1ee, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_Suitless_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd9, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x16
};

const u16 sSamusOam_Suitless_DiagonalUp_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd5, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_Suitless_DiagonalUp_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xd5, OBJ_SIZE_32x16 | 0x1f0, 0x0,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x16
};

const u16 sSamusOam_Suitless_DiagonalDown_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xd9, OBJ_SIZE_32x16 | 0x1f2, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f2, 0x4,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_Suitless_DiagonalDown_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xd9, OBJ_SIZE_32x16 | 0x1ee, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1fe, 0x4,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x16
};

const u16 sSamusOam_Suitless_Up_TurningAroundMidAir_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xcc, OBJ_SIZE_16x16 | 0x1f9, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xdc, 0x1f9, 0x2,
	0xe0, OBJ_SIZE_16x16 | 0x1f6, 0x14,
	0xf0, OBJ_SIZE_16x16 | 0x1f6, 0x16
};

const u16 sSamusOam_Suitless_Up_TurningAroundMidAir_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xcc, OBJ_SIZE_16x16 | 0x1f7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xdc, 0x1f7, 0x2,
	0xe0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x14,
	0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fa, 0x16
};


const u16 sSamusOam_Suitless_FacingTheForeground_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x6,
	0xf8, 0x4, 0x8
};

const u16 sSamusOam_Suitless_Left_TurningFromFacingTheForeground_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1f0, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x0, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f0, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x0, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f0, 0x6,
	0xf8, 0x0, 0x8
};

const u16 sSamusOam_Suitless_Right_TurningFromFacingTheForeground_Frame0[OAM_DATA_SIZE(6)] = {
	0x6,
	0xd8, OBJ_SIZE_16x16 | 0x1f8, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x8, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f8, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x8, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, 0x6,
	0xf8, 0x8, 0x8
};


const u16 sSamusOam_Suitless_SavingLoadingGame_Frame1[OAM_DATA_SIZE(7)] = {
	0x7,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, 0x1006,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x8,
	0xf8, 0x4, 0xa
};

const u16 sSamusOam_Suitless_SavingLoadingGame_Frame3[OAM_DATA_SIZE(7)] = {
	0x7,
	0xf0, 0x1fd, 0x1008,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x6,
	0xf8, 0x4, 0x9
};

const u16 sSamusOam_Suitless_SavingLoadingGame_Frame4[OAM_DATA_SIZE(7)] = {
	0x7,
	OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f6, 0x1006,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x8,
	0xf8, 0x4, 0xa
};

const u16 sSamusOam_Suitless_SavingLoadingGame_Frame5[OAM_DATA_SIZE(7)] = {
	0x7,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, 0x1006,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x8,
	0xf8, 0x4, 0xa
};

const u16 sSamusOam_Suitless_SavingLoadingGame_Frame7[OAM_DATA_SIZE(7)] = {
	0x7,
	OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f8, 0x1006,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x8,
	0xf8, 0x4, 0xa
};

const u16 sSamusOam_Suitless_SavingLoadingGame_Frame9[OAM_DATA_SIZE(7)] = {
	0x7,
	0xd8, 0x1fc, 0x1008,
	0xd8, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	OBJ_SHAPE_VERTICAL | 0xd8, 0x4, 0x4,
	0xe8, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_VERTICAL | 0xe8, 0x4, 0x5,
	OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, 0x6,
	0xf8, 0x4, 0x9
};


const u16 sSamusOam_Suitless_Left_CrouchingToCrawl_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xee, OBJ_SIZE_16x16 | 0x1f4, 0x4,
	0xe5, OBJ_SIZE_16x16 | 0x1f9, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f6, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xeb, OBJ_SIZE_32x16 | 0x1ef, 0x0
};

const u16 sSamusOam_Suitless_Left_CrouchingToCrawl_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xef, OBJ_SIZE_16x16 | 0x1f1, 0x4,
	0xe7, OBJ_SIZE_16x16 | 0x1f6, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f4, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xed, OBJ_SIZE_32x16 | 0x1eb, 0x0
};

const u16 sSamusOam_Suitless_Left_CrouchingToCrawl_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf2, OBJ_SIZE_16x16 | 0x1f3, 0x4,
	0xea, OBJ_SIZE_16x16 | 0x1f3, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f3, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1ec, 0x0
};

const u16 sSamusOam_Suitless_Left_CrouchingToCrawl_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf4, OBJ_SIZE_16x16 | 0x1f0, 0x4,
	0xec, OBJ_SIZE_16x16 | 0x1f0, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f6, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x16 | 0x1ea, 0x0
};


const u16 sSamusOam_Suitless_Left_CrawlingStopped_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf3, OBJ_SIZE_16x16 | 0x1f4, 0x0,
	0xef, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1fa, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1ec, 0x4
};

const u16 sSamusOam_Suitless_Left_ShootingWhileCrawling_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf3, OBJ_SIZE_16x16 | 0x1f4, 0x4,
	0xef, OBJ_SIZE_16x16 | 0x1f3, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1fa, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1e9, 0x0
};

const u16 sSamusOam_Suitless_Left_ShootingWhileCrawling_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf3, OBJ_SIZE_16x16 | 0x1f4, 0x4,
	0xef, OBJ_SIZE_16x16 | 0x1f4, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1fa, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1ea, 0x0
};

const u16 sSamusOam_Suitless_Left_ShootingWhileCrawling_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf3, OBJ_SIZE_16x16 | 0x1f5, 0x4,
	0xef, OBJ_SIZE_16x16 | 0x1f4, 0x6,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1fa, 0x14,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1eb, 0x0
};


const u16 sSamusOam_Suitless_Left_Crawling_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf2, OBJ_SIZE_16x16 | 0x1ee, 0x0,
	0xef, OBJ_SIZE_16x16 | 0x1f2, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1fa, 0x14,
	0xf5, OBJ_SIZE_16x16 | 0x1ef, 0x4
};

const u16 sSamusOam_Suitless_Left_Crawling_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf4, OBJ_SIZE_16x16 | 0x1eb, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f2, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1fa, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1f1, 0x4
};

const u16 sSamusOam_Suitless_Left_Crawling_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf5, OBJ_SIZE_16x16 | 0x1ef, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f3, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1fa, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1ef, 0x4
};

const u16 sSamusOam_Suitless_Left_Crawling_Frame4[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf4, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1fa, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1eb, 0x4
};

const u16 sSamusOam_Suitless_Left_Crawling_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf4, OBJ_SIZE_16x16 | 0x1f3, 0x0,
	0xef, OBJ_SIZE_16x16 | 0x1f4, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1fa, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1ea, 0x4
};


const u16 sSamusOam_Suitless_Right_CrouchingToCrawl_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1fd, 0x0,
	0xe5, OBJ_SIZE_16x16 | 0x1f7, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ea, 0x14,
	0xee, OBJ_SIZE_16x16 | 0x1fc, 0x6
};

const u16 sSamusOam_Suitless_Right_CrouchingToCrawl_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1, 0x0,
	0xe7, OBJ_SIZE_16x16 | 0x1fa, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ec, 0x14,
	0xef, OBJ_SIZE_16x16 | 0x1ff, 0x6
};

const u16 sSamusOam_Suitless_Right_CrouchingToCrawl_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xef, OBJ_SIZE_16x16 | 0x4, 0x0,
	0xea, OBJ_SIZE_16x16 | 0x1fd, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ed, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x1fd, 0x4
};

const u16 sSamusOam_Suitless_Right_CrouchingToCrawl_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf1, OBJ_SIZE_16x16 | 0x6, 0x0,
	0xec, OBJ_SIZE_16x16 | 0x0, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ea, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x0, 0x4
};


const u16 sSamusOam_Suitless_CrawlingStopped_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf4, OBJ_SIZE_16x16 | 0x4, 0x0,
	0xef, OBJ_SIZE_16x16 | 0x1fd, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1e6, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1fc, 0x4
};

const u16 sSamusOam_Suitless_Right_ShootingWhileCrawling_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x16 | 0x3, 0x0,
	0xef, OBJ_SIZE_16x16 | 0x1fd, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1e6, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1fc, 0x6
};

const u16 sSamusOam_Suitless_Right_ShootingWhileCrawling_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x16 | 0x2, 0x0,
	0xef, OBJ_SIZE_16x16 | 0x1fc, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1e6, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1fc, 0x6
};

const u16 sSamusOam_Suitless_Right_ShootingWhileCrawling_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x16 | 0x1, 0x0,
	0xef, OBJ_SIZE_16x16 | 0x1fc, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1e6, 0x14,
	0xf3, OBJ_SIZE_16x16 | 0x1fb, 0x6
};


const u16 sSamusOam_Suitless_Right_Crawling_Frame1[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf2, OBJ_SIZE_16x16 | 0x1, 0x0,
	0xef, OBJ_SIZE_16x16 | 0x1fe, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1e6, 0x14,
	0xf2, OBJ_SIZE_16x16 | 0x2, 0x4
};

const u16 sSamusOam_Suitless_Right_Crawling_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf3, OBJ_SIZE_16x16 | 0x1ff, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1fe, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1e6, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x5, 0x4
};

const u16 sSamusOam_Suitless_Right_Crawling_Frame3[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf4, OBJ_SIZE_16x16 | 0x1, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1fd, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1e6, 0x14,
	0xf5, OBJ_SIZE_16x16 | 0x1, 0x4
};

const u16 sSamusOam_Suitless_Right_Crawling_Frame4[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf2, OBJ_SIZE_16x16 | 0x5, 0x0,
	0xf0, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1e6, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1fd, 0x4
};

const u16 sSamusOam_Suitless_Right_Crawling_Frame5[OAM_DATA_SIZE(4)] = {
	0x4,
	0xf2, OBJ_SIZE_16x16 | 0x6, 0x0,
	0xef, OBJ_SIZE_16x16 | 0x1fc, 0x2,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1e6, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1fd, 0x4
};


const u16 sSamusOam_Suitless_TurningAroundWhileCrawling_Frame3[OAM_DATA_SIZE(3)] = {
	0x3,
	0xf3, OBJ_SIZE_16x16 | 0x1f8, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1e7, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1fc, 0x14
};

const u16 sSamusOam_Suitless_TurningAroundWhileCrawling_Frame2[OAM_DATA_SIZE(3)] = {
	0x3,
	0xf4, OBJ_SIZE_16x16 | 0x1fa, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1ea, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1fa, 0x14
};

const u16 sSamusOam_Suitless_TurningAroundWhileCrawling_Frame1[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1f6, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1e6, 0x14,
	0xf4, OBJ_SIZE_16x16 | 0x1ff, 0x4
};

const u16 sSamusOam_Suitless_TurningAroundWhileCrawling_Frame0[OAM_DATA_SIZE(3)] = {
	0x3,
	OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_SIZE_32x16 | 0x1f9, 0x0,
	0xf3, OBJ_SIZE_16x16 | 0x1fb, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1e4, 0x14
};


const u16 sSamusOam_Suitless_DownloadingMapData_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1ee, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x16 | 0x1ea, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1ea, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1ea, 0x8
};

const u16 sSamusOam_Suitless_DownloadingMapData_Frame1[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1ec, 0x1015,
	OBJ_SHAPE_VERTICAL | 0xda, 0x1fc, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x16 | 0x1ea, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1ea, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1ea, 0x8
};

const u16 sSamusOam_Suitless_DownloadingMapData_Frame2[OAM_DATA_SIZE(4)] = {
	0x4,
	0xdb, OBJ_SIZE_16x16 | 0x1f6, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x16 | 0x1ea, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1ea, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1ea, 0x8
};

const u16 sSamusOam_Suitless_DownloadingMapData_Frame3[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, OBJ_SIZE_16x16 | 0x1fa, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1fa, 0x1016,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x16 | 0x1ea, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1ea, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1ea, 0x8
};

const u16 sSamusOam_Suitless_DownloadingMapData_Frame4[OAM_DATA_SIZE(5)] = {
	0x5,
	0xe1, OBJ_SIZE_16x16 | 0x1f7, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xf1, 0x1f7, 0x1016,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x16 | 0x1ea, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1ea, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1ea, 0x8
};

const u16 sSamusOam_Suitless_DownloadingMapData_Frame5[OAM_DATA_SIZE(5)] = {
	0x5,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x8 | 0x1f2, 0x1018,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x16 | 0x1ea, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1ea, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1ea, 0x8
};

const u16 sSamusOam_Suitless_DownloadingMapData_Frame6[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1f2, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x16 | 0x1ea, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1ea, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1ea, 0x8
};

const u16 sSamusOam_Suitless_DownloadingMapData_Frame7[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f2, 0x1014,
	OBJ_SHAPE_HORIZONTAL | 0xd8, OBJ_SIZE_32x16 | 0x1ea, 0x0,
	OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1ea, 0x4,
	OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1ea, 0x8
};


const u16 sSamusOam_Suitless_FacingTheBackground_Frame0[OAM_DATA_SIZE(5)] = {
	0x5,
	0xd8, 0x1fc, 0x1a,
	0xe0, OBJ_SIZE_16x16 | 0x1f4, 0x14,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x4, 0x18,
	0xf0, OBJ_SIZE_16x16 | 0x1f4, 0x16,
	OBJ_SHAPE_VERTICAL | 0xf0, 0x4, 0x19
};

const u16 sSamusOam_Suitless_Left_TurningFromFacingTheBackground_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f8, 0x19,
	0xe0, OBJ_SIZE_16x16 | 0x1f0, 0x14,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x0, 0x18,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16
};

const u16 sSamusOam_Suitless_Right_TurningFromFacingTheBackground_Frame0[OAM_DATA_SIZE(4)] = {
	0x4,
	OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f8, 0x19,
	0xe0, OBJ_SIZE_16x16 | 0x1f8, 0x14,
	OBJ_SHAPE_VERTICAL | 0xe0, 0x8, 0x18,
	0xf0, OBJ_SIZE_16x16 | 0x1f8, 0x16
};


const struct SamusAnimationData sSamusAnim_Suitless_Right_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Up_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Up_TurningAround[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Down_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_TurningAroundAndCrouching[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Down_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalUp_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_DiagonalDown_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Up_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalUp_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_DiagonalDown_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Up_TurningAroundMidAir[3] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_FacingTheForeground[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_TurningFromFacingTheForeground[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_TurningFromFacingTheForeground[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 6,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_SavingLoadingGame[12] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[6] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[7] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[8] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[9] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[10] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[11] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_CrouchingToCrawl[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_CrawlingStopped[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_PistolUp_CrawlingStopped[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_ShootingWhileCrawling[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_Crawling[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_UncrouchingFromCrawling[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Right_CrouchingToCrawl[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_CrawlingStopped[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_PistolUp_CrawlingStopped[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 16,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_ShootingWhileCrawling[4] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_Crawling[7] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[5] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[6] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_UncrouchingFromCrawling[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_Left_TurningAroundWhileCrawling[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_TurningAroundWhileCrawling[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_StartingToCrawl[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_StartingToCrawl[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 4,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_DownloadingMapData[6] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[4] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[5] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_2b0bf4[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 3,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Suitless_FacingTheBackground[5] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 0,
	},
	[1] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 255,
	},
	[2] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 0,
	},
	[3] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 255,
	},
	[4] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Left_TurningFromFacingTheBackground[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};
const struct SamusAnimationData sSamusAnim_Suitless_Right_TurningFromFacingTheBackground[2] = {
	[0] = {
		.pTopGfx = ,
		.pBottomGfx = ,
		.pOam = ,
		.timer = 2,
	},
	[1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Padding[2] = {
	[0] = SAMUS_ANIM_TERMINATOR,
	[1] = SAMUS_ANIM_TERMINATOR
};

#endif
