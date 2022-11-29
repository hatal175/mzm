#define PROJECTILE_CATEGORY_NONE 0x0
#define PROJECTILE_CATEGORY_BEAM 0x1
#define PROJECTILE_CATEGORY_MISSILE 0x2
#define PROJECTILE_CATEGORY_SUPER_MISSILE 0x3
#define PROJECTILE_CATEGORY_BOMB 0x4
#define PROJECTILE_CATEGORY_POWER_BOMB 0x5
#define PROJECTILE_CATEGORY_CHARGED_BEAM 0x6

#define PROJ_STATUS_NONE 0x0
#define PROJ_STATUS_EXISTS 0x1
#define PROJ_STATUS_ON_SCREEN 0x2
#define PROJ_STATUS_NOT_DRAWN 0x4
#define PROJ_STATUS_HIGH_PRIORITY 0x8
#define PROJ_STATUS_CAN_AFFECT_ENVIRONMENT 0x10
#define PROJ_STATUS_YFLIP 0x20
#define PROJ_STATUS_XFLIP 0x40
#define PROJ_STATUS_UNKNOWN 0x80

#define PROJ_TYPE_BEAM 0x0
#define PROJ_TYPE_LONG_BEAM 0x1
#define PROJ_TYPE_ICE_BEAM 0x2
#define PROJ_TYPE_WAVE_BEAM 0x3
#define PROJ_TYPE_PLASMA_BEAM 0x4
#define PROJ_TYPE_PISTOL 0x5
#define PROJ_TYPE_CHARGED_BEAM 0x6
#define PROJ_TYPE_CHARGED_LONG_BEAM 0x7
#define PROJ_TYPE_CHARGED_ICE_BEAM 0x8
#define PROJ_TYPE_CHARGED_WAVE_BEAM 0x9
#define PROJ_TYPE_CHARGED_PLASMA_BEAM 0xA
#define PROJ_TYPE_CHARGED_PISTOL 0xB
#define PROJ_TYPE_MISSILE 0xC
#define PROJ_TYPE_SUPER_MISSILE 0xD
#define PROJ_TYPE_BOMB 0xE
#define PROJ_TYPE_POWER_BOMB 0xF

// Normal beam

#define NORMAL_BEAM_DAMAGE 2
#define CHARGED_NORMAL_BEAM_DAMAGE 8

// Long beam

#define LONG_BEAM_DAMAGE 3
#define CHARGED_LONG_BEAM_DAMAGE 12

// Ice beam

#define ICE_BEAM_DAMAGE 3 // Ice
#define ICE_LONG_BEAM_DAMAGE 4 // Ice | Long

// Wave beam damage

#define WAVE_BEAM_DAMAGE 3 // Wave
#define WAVE_LONG_BEAM_DAMAGE 4 // Wave | Long
#define WAVE_ICE_BEAM_DAMAGE 4 // Wave | Ice
#define WAVE_ICE_LONG_BEAM_DAMAGE 5 // Wave | Ice | Long

// Plasma beam

#define PLASMA_BEAM_DAMAGE 3 // Plasma
#define PLASMA_LONG_BEAM_DAMAGE 4 // Plasma | Long
#define PLASMA_ICE_BEAM_DAMAGE 4 // Plasma | Ice
#define PLASMA_WAVE_BEAM_DAMAGE 4 // Plasma | Wave
#define PLASMA_ICE_LONG_BEAM_DAMAGE 5 // Plasma | Ice | Long
#define PLASMA_WAVE_LONG_BEAM_DAMAGE 5 // Plasma | Wave | Long
#define PLASMA_WAVE_ICE_BEAM_DAMAGE 5 // Plasma | Wave | Ice
#define PLASMA_WAVE_ICE_LONG_BEAM_DAMAGE 6 // Plasma | Wave | Ice | Long

// Pistol

#define CHARGED_PISTOL_DAMAGE 12

// Missile

#define MISSILE_DAMAGE 20

// Super missile

#define SUPER_MISSILE_DAMAGE 100

// Bomb

#define BOMB_DAMAGE 8

#define BOMB_STAGE_INIT 0x0
#define BOMB_STAGE_FIRST_SPIN 0x1
#define BOMB_STAGE_FAST_SPIN 0x2
#define BOMB_STAGE_EXPLODING 0x3
#define BOMB_STAGE_PLACED_ON_LAUNCHER 0x4
#define BOMB_STAGE_FIRST_SPIN_ON_LAUNCHER 0x5
#define BOMB_STAGE_FAST_SPIN_ON_LAUNCHER 0x6
#define BOMB_STAGE_EXPLODING_ON_LAUNCHER 0x7

// Power bomb

#define POWER_BOMB_DAMAGE 50

