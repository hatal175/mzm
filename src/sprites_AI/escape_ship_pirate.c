#include "escape_ship_pirate.h"
#include "space_pirate.h"
#include "../../data/data.h"
#include "../globals.h"

/**
 * @brief 2dc78 | 60 | Initializes an escape ship space pirate sprite
 * 
 */
void EscapeShipSpacePirateInit(void)
{
    gCurrentSprite.drawDistanceTopOffset = 0x40;
    gCurrentSprite.drawDistanceBottomOffset = 0x8;
    gCurrentSprite.drawDistanceHorizontalOffset = 0x28;

    gCurrentSprite.hitboxTopOffset = -0xA0;
    gCurrentSprite.hitboxBottomOffset = 0x0;

    gCurrentSprite.health = 0x0;
    gCurrentSprite.oamScaling = 0x100;
    gCurrentSprite.workVariable2 = 0x0;
    gCurrentSprite.oamRotation = 0x0;
    gCurrentSprite.samusCollision = SSC_NONE;

    gCurrentSprite.pOam = sSpacePirateOAM_Jumping;
    gCurrentSprite.currentAnimationFrame = 0x6;
    gCurrentSprite.animationDurationCounter = 0x0;

    gCurrentSprite.pose = ESCAPE_SHIP_SPACE_PIRATE_SPAWN;
    SpacePirateFlip();
}

/**
 * @brief 2dcd8 | 44 | Spawns an escape ship space pirate
 * 
 */
void EscapeShipSpacePirateSpawn(void)
{
    gCurrentSprite.status &= ~SPRITE_STATUS_NOT_DRAWN;
    gCurrentSprite.timer = 0x6;
    gCurrentSprite.pose = ESCAPE_SHIP_SPACE_PIRATE_DELAY_BEFORE_JUMPING;

    gCurrentSprite.samusCollision = SSC_SPACE_PIRATE;
    gCurrentSprite.health = sPrimarySpriteStats[gCurrentSprite.spriteID][0];

    gCurrentSprite.drawOrder = 0xC;
}

/**
 * @brief 2dd1c | 7c | 
 * 
 */
void EscapeShipSpacePirateDelayBeforeJumping(void)
{
    gCurrentSprite.timer--;

    if (gCurrentSprite.timer == 0x0)
    {
        gCurrentSprite.drawOrder = 0x4;
        gCurrentSprite.pose = SPACE_PIRATE_POSE_JUMPING;

        gCurrentSprite.workVariable = 0x3;

        gCurrentSprite.arrayOffset = 0x0;
        gCurrentSprite.timer = 0x0;

        gCurrentSprite.status &= ~SPRITE_STATUS_DOUBLE_SIZE;

        if (gCurrentSprite.status & SPRITE_STATUS_FACING_RIGHT)
        {
            if (gSamusData.xPosition < gCurrentSprite.xPosition)
                gCurrentSprite.workVariable2 = 0x0;
        }
        else
        {
            if (gSamusData.xPosition > gCurrentSprite.xPosition)
                gCurrentSprite.workVariable2 = 0x0;
        }
    }
}

/**
 * @brief 2dd98 | 458 | Escape ship space priate AI
 * 
 */
void EscapeShipSpacePirate(void)
{
    u8 alerted;
    u8 freezeTimer;

    if (gCurrentSprite.status & SPRITE_STATUS_UNKNOWN2)
        alerted = TRUE;
    else
        alerted = FALSE;

    if (gCurrentSprite.pose < 0x62)
    {
        if (gCurrentSprite.freezeTimer != 0x0)
        {
            if (gEquipment.suitType == SUIT_SUITLESS)
            {
                if (gFrameCounter8Bit & 0x1)
                    gCurrentSprite.freezeTimer--;

                freezeTimer = gCurrentSprite.freezeTimer;
                
                if (freezeTimer == 0x0)
                    gCurrentSprite.animationDurationCounter--;

                if (freezeTimer < 0x2E)
                {
                    if (freezeTimer & 0x1)
                    {
                        gCurrentSprite.paletteRow = 0x1;
                        gCurrentSprite.absolutePaletteRow = 0x1;
                    }
                    else
                    {
                        gCurrentSprite.paletteRow = 0x0;
                        gCurrentSprite.absolutePaletteRow = 0x0;
                    }
                }
                gCurrentSprite.ignoreSamusCollisionTimer = 0x1;
            }
            else
                SpriteUtilUpdateFreezeTimer();
            
            SpacePirateCheckCollidingWithLaser();
            return;
        }
        else
        {
            SpacePirateSamusDetection();

            if (gCurrentSprite.status & SPRITE_STATUS_UNKNOWN2)
            {
                if (gSpriteDrawOrder[2] == TRUE)
                    gAlarmTimer = 0x1E0;
                else if (gAlarmTimer == 0x0)
                    gCurrentSprite.status &= ~SPRITE_STATUS_UNKNOWN2;
            }
            else
            {
                if (gAlarmTimer != 0x0 && gCurrentSprite.pose != 0x0)
                    gCurrentSprite.status |= SPRITE_STATUS_UNKNOWN2;
            }

            SpacePirateCheckCollidingWithLaser();
        }
    }

    switch (gCurrentSprite.pose)
    {
        case 0x0:
            EscapeShipSpacePirateInit();
            break;

        case ESCAPE_SHIP_SPACE_PIRATE_SPAWN:
            EscapeShipSpacePirateSpawn();
            break;

        case ESCAPE_SHIP_SPACE_PIRATE_DELAY_BEFORE_JUMPING:
            EscapeShipSpacePirateDelayBeforeJumping();
            break;

        case SPACE_PIRATE_POSE_WALKING_INIT:
            SpacePirateWalkingInit();
            break;

        case SPACE_PIRATE_POSE_WALKING:
            SpacePirateWalking();
            break;

        case 0x27:
            SpacePirateIdleAnim();
            break;

        case 0x28:
            unk_2aa30();
            break;

        case SPACE_PIRATE_POSE_WAITING_AT_DOOR:
            SpacePirateWaitingAtDoor();
            break;

        case SPACE_PIRATE_POSE_SHOOTING_AFTER_WAITING_AT_DOOR:
            SpacePirateShootingAfterWaitingAtDoor();
            break;

        case 0x2A:
            unk_2aa5c();
            break;

        case 0x2B:
            unk_2aa88();
            break;

        case SPACE_PIRATE_POSE_FALLING_INIT:
            SpacePirateFallingInit();

        case SPACE_PIRATE_POSE_FALLING:
            SpacePirateFalling();
            break;

        case 0x1A:
            unk_2a794();
            unk_2a7c0();
            break;

        case 0xE:
            unk_2a768();
            unk_2a7c0();
            break;

        case 0xF:
            unk_2a7c0();
            break;
        
        case 0x1C:
            unk_2ab34();
            SpacePirateCheckTurningAnimEnded();
            break;

        case 0x10:
            unk_2aaec();
            SpacePirateCheckTurningAnimEnded();
            break;

        case 0x11:
            SpacePirateCheckTurningAnimEnded();
            break;

        case 0x16:
            unk_2ab10();
            SpacePirateCheckTurningAnimEnded();
            break;

        case SPACE_PIRATE_POSE_TURNING_AROUND_INIT:
            SpacePirateTurningAroundInit();

        case SPACE_PIRATE_POSE_TURNING_AROUND_FIRST_PART:
            SpacePirateTurningAroundFirstPart();
            break;

        case SPACE_PIRATE_POSE_TURNING_AROUND_SECOND_PART:
            SpacePirateTurningAroundSecondPart();
            break;

        case SPACE_PIRATE_POSE_WALKING_ALERTED_INIT:
            SpacePirateWalkingAlertedInit();

        case SPACE_PIRATE_POSE_WALKING_ALERTED:
            SpacePirateWalkingAlertedInit();
            break;

        case SPACE_PIRATE_POSE_CHARGING_LASER_INIT:
            SpacePirateChargingLaserInit();

        case SPACE_PIRATE_POSE_CHARGING_LASER:
            SpacePirateChargingLaser();
            break;

        case SPACE_PIRATE_POSE_SHOOTING_LASER_INIT:
            SpacePirateShootingLaserInit();

        case SPACE_PIRATE_POSE_SHOOTING_LASER:
            SpacePirateShootingLaser();
            break;

        case SPACE_PIRATE_POSE_JUMPING_INIT:
            SpacePirateJumpingInit();

        case SPACE_PIRATE_POSE_JUMPING:
        case SPACE_PIRATE_POSE_WALL_JUMPING:
            SpacePirateJumping();
            break;

        case SPACE_PIRATE_POSE_TURNING_AROUND_ALERTED_INIT:
            SpacePirateTurningAroundAlertedInit();

        case SPACE_PIRATE_POSE_TURNING_AROUND_ALERTED_FIRST_PART:
            SpacePirateTurningAroundFirstPartAlerted();
            break;

        case SPACE_PIRATE_POSE_TURNING_AROUND_ALERTED_SECOND_PART:
            SpacePirateTurningAroundSecondPartAlerted();
            break;

        case SPACE_PIRATE_POSE_CLIMBING_UP_INIT:
            SpacePirateClimbingUpInit();

        case SPACE_PIRATE_POSE_CLIMBING_UP:
            SpacePirateClimbingUp();
            break;

        case SPACE_PIRATE_POSE_CLIMBING_DOWN_INIT:
            SpacePirateClimbingDownInit();

        case SPACE_PIRATE_POSE_CLIMBING_DOWN:
            SpacePirateClimbingDown();
            break;

        case 0x18:
            unk_2ba7c();

        case 0x19:
            unk_2ba98();
            break;

        case SPACE_PIRATE_POSE_CLIMBING_CHARGING_LASER_INIT:
            SpacePirateClimbingChargingLaserInit();

        case SPACE_PIRATE_POSE_CLIMBING_CHARGING_LASER:
            SpacePirateClimbingChargingLaser();
            break;

        case SPACE_PIRATE_POSE_CLIMBING_SHOOTING_LASER_INIT:
            SpacePirateClimbingShootingLaserInit();

        case SPACE_PIRATE_POSE_CLIMBING_SHOOTING_LASER:
            SpacePirateClimbingShootingLaser();
            break;

        case SPACE_PIRATE_POSE_TURNING_AROUND_TO_WALL_JUMP_INIT:
            SpacePirateTurningAroundToWallJumpInit();

        case SPACE_PIRATE_POSE_TURNING_AROUND_TO_WALL_JUMP:
            SpacePirateTurningAroundToWallJump();
            break;

        case SPACE_PIRATE_POSE_DELAY_BEFORE_LAUNCHING_FROM_WALL:
            SpacePirateDelayBeforeLaunchingFromWall();
            break;

        case SPACE_PIRATE_POSE_LAUNCHING_FROM_WALL_INIT:
            SpacePirateLaunchingFromWallInit();

        case SPACE_PIRATE_POSE_LAUNCHING_FROM_WALL:
            SpacePirateLaunchingFromWall();
            break;

        case SPACE_PIRATE_POSE_STARTING_TO_CRAWL_INIT:
            SpacePirateStartingToCrawlInit();

        case SPACE_PIRATE_POSE_STARTING_TO_CRAWL:
            SpacePirateStartingToCrawl();
            break;

        case SPACE_PIRATE_POSE_CRAWLING:
            SpacePirateCrawling();
            break;

        case SPACE_PIRATE_POSE_TURNING_AROUND_WHILE_CRAWLING_INIT:
            SpacePirateTurningAroundWhileCrawlingInit();
            break;

        case SPACE_PIRATE_POSE_TURNING_AROUND_WHILE_CRAWLING_FIRST_PART:
            SpacePirateTurningWhileCrawlingFirstPart();
            break;

        case SPACE_PIRATE_POSE_TURNING_AROUND_WHILE_CRAWLING_SECOND_PART:
            SpacePirateTurningWhileCrawlingSecondPart();
            break;

        case SPACE_PIRATE_POSE_STANDING_UP_INIT:
            SpacePirateStandingUpInit();

        case SPACE_PIRATE_POSE_STANDING_UP:
            SpacePirateStandingUp();
            break;

        case SPACE_PIRATE_POSE_CRAWLING_STOPPED_INIT:
            SpacePirateCrawlingStoppedInit();

        case SPACE_PIRATE_POSE_CRAWLING_STOPPED:
            SpacePirateCrawlingStopped();
            break;

        case SPACE_PIRATE_POSE_FALLING_WHILE_CRAWLING_INIT:
            SpacePirateFallingWhileCrawlingInit();

        case SPACE_PIRATE_POSE_FALLING_WHILE_CRAWLING:
            SpacePirateFallingWhileCrawling();
            break;

        case SPACE_PIRATE_POSE_HIT_BY_LASER_INIT:
            SpacePirateHitByLaserInit();

        case SPACE_PIRATE_POSE_HIT_BY_LASER:
            SpacePirateHitByLaser();
            break;

        default:
            SpacePirateDeath(TRUE);
    }

    if (!alerted && (gCurrentSprite.status & (SPRITE_STATUS_EXISTS | SPRITE_STATUS_ONSCREEN | SPRITE_STATUS_UNKNOWN2 | SPRITE_STATUS_IGNORE_PROJECTILES)) == (SPRITE_STATUS_EXISTS | SPRITE_STATUS_ONSCREEN | SPRITE_STATUS_UNKNOWN2))
        SoundPlayNotAlreadyPlaying(0x169);
}