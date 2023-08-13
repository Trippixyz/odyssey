#pragma once

#include <math/seadVector.h>

namespace al {
class HitSensor;
class ComboCounter;
class LiveActor;
class SensorMsg;

bool sendMsgPlayerAttackTrample(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerTrampleReflect(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerReflectOrTrample(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerHipDrop(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerObjHipDrop(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerObjHipDropReflect(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerObjHipDropHighJump(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerHipDropKnockDown(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerStatueDrop(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerObjStatueDrop(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerObjStatueDropReflect(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerObjStatueDropReflectNoCondition(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerStatueTouch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerUpperPunch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerObjUpperPunch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerRollingAttack(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerRollingReflect(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerObjRollingAttack(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerObjRollingAttackFailure(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerInvincibleAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerFireBallAttack(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerRouteDokanFireBallAttack(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerTailAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerTouch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerKick(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerCatch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerSlidingAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerBoomerangAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerBoomerangAttackCollide(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerBoomerangReflect(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerBoomerangBreak(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerBodyAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerBodyLanding(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerBodyAttackReflect(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerClimbAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerSpinAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerGiantAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerCooperationHipDrop(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerClimbSlidingAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerClimbRollingAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerGiantHipDrop(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPlayerDisregard(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerItemGet(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerPutOnEquipment(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerReleaseEquipment(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerReleaseEquipmentGoal(al::HitSensor* receiver, al::HitSensor* sender, u32);
bool sendMsgPlayerFloorTouch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerDamageTouch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerCarryFront(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerCarryFrontWallKeep(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerCarryUp(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerCarryKeepDemo(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerCarryWarp(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerLeave(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerRelease(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerReleaseBySwing(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerReleaseDamage(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerReleaseDead(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerReleaseDemo(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerToss(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerInvincibleTouch(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgEnemyAttack(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgEnemyAttackBoomerang(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgEnemyAttackFire(al::HitSensor* receiver, al::HitSensor* sender, const char*);
bool sendMsgEnemyAttackNeedle(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgEnemyFloorTouch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgEnemyItemGet(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgEnemyRouteDokanAttack(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgEnemyRouteDokanFire(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgEnemyTouch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgEnemyUpperPunch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgEnemyTrample(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgMapObjTrample(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPressureDeath(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgNpcTouch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgExplosion(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgExplosionCollide(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgPush(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPushStrong(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPushVeryStrong(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgHit(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgHitStrong(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgHitVeryStrong(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKnockDown(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgMapPush(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgVanish(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgChangeAlpha(al::LiveActor* receiver, f32 alpha);
bool sendMsgShowModel(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgHideModel(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgRestart(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgNeedleBallAttack(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPunpunFloorTouch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgInvalidateFootPrint(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKickKouraAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgKickKouraAttackCollide(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgKickKouraGetItem(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKickKouraReflect(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKickKouraCollideNoReflect(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKickKouraBreak(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKickKouraBlow(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKickStoneAttack(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKickStoneAttackCollide(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKickStoneAttackHold(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKickStoneAttackReflect(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKickStoneTrample(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKillerAttack(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgLiftGeyser(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgWarpStart(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgWarpEnd(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgHoldCancel(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgHoleIn(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgJumpInhibit(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgGoalKill(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgGoal(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBindStart(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBindInit(al::HitSensor* receiver, al::HitSensor* sender, u32);
bool sendMsgBindEnd(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBindCancel(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBindCancelByDemo(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBindDamage(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBindSteal(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBindGiant(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBallAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgBallRouteDokanAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgBallAttackHold(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBallAttackDRCHold(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBallAttackCollide(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBallTrample(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgBallTrampleCollide(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBallItemGet(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgFireBalCollide(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgFireBallFloorTouch(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgDokanBazookaAttack(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgRideAllPlayerItemGet(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgHideModel(al::LiveActor* receiver);
bool sendMsgShowModel(al::LiveActor* receiver);
bool sendMsgRestart(al::LiveActor* receiver);
bool sendMsgCollisionImpulse(al::HitSensor* receiver, al::HitSensor* sender, sead::Vector3f*, const sead::Vector3f&, const f32, sead::Vector3f&, f32);
bool sendMsgSwitchOn(al::LiveActor* receiver);
bool sendMsgSwitchOnInit(al::LiveActor* receiver);
bool sendMsgSwitchOffInit(al::LiveActor* receiver);
bool sendMsgSwitchKillOn(al::LiveActor* receiver);
bool sendMsgSwitchKillOnInit(al::LiveActor* receiver);
bool sendMsgSwitchKillOffInit(al::LiveActor* receiver);
bool sendMsgPlayerFloorTouchToColliderGround(al::LiveActor* receiver, al::HitSensor* sender);
bool sendMsgPlayerUpperPunchToColliderCeiling(al::LiveActor* receiver, al::HitSensor* sender);
bool sendMsgEnemyFloorTouchToColliderGround(al::LiveActor* receiver, al::HitSensor* sender);
bool sendMsgEnemyUpperPunchToColliderCeiling(al::LiveActor* receiver, al::HitSensor* sender);
bool sendMsgAskSafetyPoint(al::HitSensor* receiver, al::HitSensor* sender, sead::Vector3f**);
bool sendMsgAskSafetyPointToColliderGround(al::LiveActor* receiver, al::HitSensor* sender, sead::Vector3f**);
bool sendMsgTouchAssist(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgTouchAssistTrig(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgTouchStroke(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgScreenPointInvalidCollisionParts(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgBlockUpperPunch(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgBlockLowerPunch(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgBlockItemGet(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKillerItemGet(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerKouraAttack(al::HitSensor* receiver, al::HitSensor* sender, al::ComboCounter* comboCounter);
bool sendMsgLightFlash(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgForceAbyss(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgIsNerveSupportFreeze(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgOnSyncSupportFreeze(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgOffSyncSupportFreeze(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgSwordAttackHighLeft(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgSwordAttackLowLeft(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgSwordAttackHighRight(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgSwordAttackLowRight(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgSwordAttackJumpUnder(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgSwordBeamAttack(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgSwordBeamReflectAttack(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgShieldGuard(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgEnemyAttackKnockDown(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgAskMultiPlayerEnemy(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgItemGettable(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgKikkiThrow(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgIsKikkiThrowTarget(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerCloudGet(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgAutoJump(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerTouchShadow(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerPullOutShadow(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerAttackShadow(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerAttackShadowStrong(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgPlayerAttackChangePos(al::HitSensor* receiver, al::HitSensor* sender, sead::Vector3f* pos);
bool sendMsgAtmosOnlineLight(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgLightBurn(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgMoonLightBurn(al::HitSensor* receiver, al::HitSensor* sender);
bool sendMsgString(al::HitSensor* receiver, al::HitSensor* sender, const char* str);
bool sendMsgStringV4fPtr(al::HitSensor* receiver, al::HitSensor* sender, const char* str, sead::Vector4f* vec);
bool sendMsgStringV4fSensorPtr(al::HitSensor* receiver, al::HitSensor* sender, const char* str, sead::Vector4f* vec);
bool sendMsgStringVoidPtr(al::HitSensor* receiver, al::HitSensor* sender, const char* str, void* ptr);

bool isMsgPushAll(const al::SensorMsg* msg);
bool isMsgPush(const al::SensorMsg* msg);
bool isMsgPushStrong(const al::SensorMsg* msg);
bool isMsgPushVeryStrong(const al::SensorMsg* msg);
bool isMsgHoldReleaseAll(const al::SensorMsg* msg);
bool isMsgHoldCancel(const al::SensorMsg* msg);
bool isMsgPlayerRelease(const al::SensorMsg* msg);
bool isMsgPlayerReleaseBySwing(const al::SensorMsg* msg);
bool isMsgPlayerReleaseDead(const al::SensorMsg* msg);
bool isMsgPlayerReleaseDamage(const al::SensorMsg* msg);
bool isMsgPlayerReleaseDemo(const al::SensorMsg* msg);
bool isMsgItemGetDirectAll(const al::SensorMsg* msg);
bool isMsgPlayerItemGet(const al::SensorMsg* msg);
bool isMsgRideAllPlayerItemGet(const al::SensorMsg* msg);
bool isMsgPlayerTailAttack(const al::SensorMsg* msg);
bool isMsgItemGetByObjAll(const al::SensorMsg* msg);
bool isMsgBallItemGet(const al::SensorMsg* msg);
bool isMsgKickKouraItemGet(const al::SensorMsg* msg);
bool isMsgKillerItemGet(const al::SensorMsg* msg);
bool isMsgItemGetAll(const al::SensorMsg* msg);
bool isMsgFloorTouch(const al::SensorMsg* msg);
bool isMsgPlayerFloorTouch(const al::SensorMsg* msg);
bool isMsgEnemyFloorTouch(const al::SensorMsg* msg);
bool isMsgUpperPunch(const al::SensorMsg* msg);
bool isMsgPlayerUpperPunch(const al::SensorMsg* msg);
bool isMsgEnemyUpperPunch(const al::SensorMsg* msg);
bool isMsgPlayerTrample(const al::SensorMsg* msg);
bool isMsgPlayerTrampleReflect(const al::SensorMsg* msg);
bool isMsgPlayerHipDropAll(const al::SensorMsg* msg);
bool isMsgPlayerStatueDrop(const al::SensorMsg* msg);
bool isMsgPlayerObjHipDropAll(const al::SensorMsg* msg);
bool isMsgPlayerObjStatueDrop(const al::SensorMsg* msg);
bool isMsgPlayerObjHipDropReflectAll(const al::SensorMsg* msg);
bool isMsgPlayerObjStatueDropReflect(const al::SensorMsg* msg);
bool isMsgPlayerObjHipDropHighJump(const al::SensorMsg* msg);
bool isMsgPlayerHipDropKnockDown(const al::SensorMsg* msg);
bool isMsgPlayerObjStatueDropReflectNoCondition(const al::SensorMsg* msg);
bool isMsgPlayerStatueTouch(const al::SensorMsg* msg);
bool isMsgPlayerObjUpperPunch(const al::SensorMsg* msg);
bool isMsgPlayerRollingAttack(const al::SensorMsg* msg);
bool isMsgPlayerRollingReflect(const al::SensorMsg* msg);
bool isMsgPlayerObjRollingAttack(const al::SensorMsg* msg);
bool isMsgPlayerObjRollingAttackFailure(const al::SensorMsg* msg);
bool isMsgPlayerInvincibleAttack(const al::SensorMsg* msg);
bool isMsgPlayerFireBallAttack(const al::SensorMsg* msg);
bool isMsgPlayerRouteDokanFireBallAttack(const al::SensorMsg* msg);
bool isMsgPlayerKick(const al::SensorMsg* msg);
bool isMsgPlayerCatch(const al::SensorMsg* msg);
bool isMsgPlayerSlidingAttack(const al::SensorMsg* msg);
bool isMsgPlayerBoomerangAttack(const al::SensorMsg* msg);
bool isMsgPlayerBoomerangAttackCollide(const al::SensorMsg* msg);
bool isMsgPlayerBoomerangReflect(const al::SensorMsg* msg);
bool isMsgPlayerBoomerangBreak(const al::SensorMsg* msg);
bool isMsgPlayerBodyAttack(const al::SensorMsg* msg);
bool isMsgPlayerBodyLanding(const al::SensorMsg* msg);
bool isMsgPlayerBodyAttackReflect(const al::SensorMsg* msg);
bool isMsgPlayerClimbAttack(const al::SensorMsg* msg);
bool isMsgPlayerSpinAttack(const al::SensorMsg* msg);
bool isMsgPlayerGiantAttack(const al::SensorMsg* msg);
bool isMsgPlayerCooperationHipDrop(const al::SensorMsg* msg);
bool isMsgPlayerClimbSlidingAttack(const al::SensorMsg* msg);
bool isMsgPlayerClimbRollingAttack(const al::SensorMsg* msg);
bool isMsgPlayerGiantHipDrop(const al::SensorMsg* msg);
bool isMsgPlayerDisregard(const al::SensorMsg* msg);
bool isMsgPlayerDash(const al::SensorMsg* msg);
bool isMsgPlayerDamageTouch(const al::SensorMsg* msg);
bool isMsgPlayerFloorTouchBind(const al::SensorMsg* msg);
bool isMsgPlayerTouch(const al::SensorMsg* msg);
bool isMsgPlayerInvincibleTouch(const al::SensorMsg* msg);
bool isMsgPlayerGiantTouch(const al::SensorMsg* msg);
bool isMsgPlayerObjTouch(const al::SensorMsg* msg);
bool isMsgPlayerPutOnEquipment(const al::SensorMsg* msg);
bool isMsgPlayerReleaseEquipment(const al::SensorMsg* msg);
bool isMsgPlayerReleaseEquipmentGoal(const al::SensorMsg* msg);
bool isMsgPlayerCarryFront(const al::SensorMsg* msg);
bool isMsgPlayerCarryFrontWallKeep(const al::SensorMsg* msg);
bool isMsgPlayerCarryUp(const al::SensorMsg* msg);
bool isMsgPlayerCarryKeepDemo(const al::SensorMsg* msg);
bool isMsgPlayerCarryWarp(const al::SensorMsg* msg);
bool isMsgPlayerLeave(const al::SensorMsg* msg);
bool isMsgPlayerToss(const al::SensorMsg* msg);
bool isMsgEnemyAttack(const al::SensorMsg* msg);
bool isMsgEnemyAttackFire(const al::SensorMsg* msg);
bool isMsgEnemyAttackKnockDown(const al::SensorMsg* msg);
bool isMsgEnemyAttackBoomerang(const al::SensorMsg* msg);
bool isMsgEnemyAttackNeedle(const al::SensorMsg* msg);
bool isMsgEnemyItemGet(const al::SensorMsg* msg);
bool isMsgEnemyRouteDokanAttack(const al::SensorMsg* msg);
bool isMsgEnemyRouteDokanFire(const al::SensorMsg* msg);
bool isMsgExplosion(const al::SensorMsg* msg);
bool isMsgExplosionCollide(const al::SensorMsg* msg);
bool isMsgBindStart(const al::SensorMsg* msg);
bool isMsgBindInit(const al::SensorMsg* msg);
bool isMsgBindEnd(const al::SensorMsg* msg);
bool isMsgBindCancel(const al::SensorMsg* msg);
bool isMsgBindCancelByDemo(const al::SensorMsg* msg);
bool isMsgBindDamage(const al::SensorMsg* msg);
bool isMsgBindSteal(const al::SensorMsg* msg);
bool isMsgBindGiant(const al::SensorMsg* msg);
bool isMsgPressureDeath(const al::SensorMsg* msg);
bool isMsgNpcTouch(const al::SensorMsg* msg);
bool isMsgHit(const al::SensorMsg* msg);
bool isMsgHitStrong(const al::SensorMsg* msg);
bool isMsgHitVeryStrong(const al::SensorMsg* msg);
bool isMsgKnockDown(const al::SensorMsg* msg);
bool isMsgMapPush(const al::SensorMsg* msg);
bool isMsgVanish(const al::SensorMsg* msg);
bool isMsgChangeAlpha(const al::SensorMsg* msg);
bool isMsgShowModel(const al::SensorMsg* msg);
bool isMsgHideModel(const al::SensorMsg* msg);
bool isMsgRestart(const al::SensorMsg* msg);
bool isMsgEnemyTouch(const al::SensorMsg* msg);
bool isMsgEnemyTrample(const al::SensorMsg* msg);
bool isMsgMapObjTrample(const al::SensorMsg* msg);
bool isMsgNeedleBallAttack(const al::SensorMsg* msg);
bool isMsgPunpunFloorTouch(const al::SensorMsg* msg);
bool isMsgInvalidateFootPrint(const al::SensorMsg* msg);
bool isMsgKickKouraAttack(const al::SensorMsg* msg);
bool isMsgKickKouraAttackCollide(const al::SensorMsg* msg);
bool isMsgKickKouraReflect(const al::SensorMsg* msg);
bool isMsgKickKouraCollideNoReflect(const al::SensorMsg* msg);
bool isMsgKickKouraBreak(const al::SensorMsg* msg);
bool isMsgKickKouraBlow(const al::SensorMsg* msg);
bool isMsgKickStoneAttack(const al::SensorMsg* msg);
bool isMsgKickStoneAttackCollide(const al::SensorMsg* msg);
bool isMsgKickStoneAttackHold(const al::SensorMsg* msg);
bool isMsgKickStoneAttackReflect(const al::SensorMsg* msg);
bool isMsgKickStoneTrample(const al::SensorMsg* msg);
bool isMsgKillerAttack(const al::SensorMsg* msg);
bool isMsgLiftGeyser(const al::SensorMsg* msg);
bool isMsgWarpStart(const al::SensorMsg* msg);
bool isMsgWarpEnd(const al::SensorMsg* msg);
bool isMsgHoleIn(const al::SensorMsg* msg);
bool isMsgJumpInhibit(const al::SensorMsg* msg);
bool isMsgGoalKill(const al::SensorMsg* msg);
bool isMsgGoal(const al::SensorMsg* msg);
bool isMsgBallAttack(const al::SensorMsg* msg);
bool isMsgBallRouteDokanAttack(const al::SensorMsg* msg);
bool isMsgBallAttackHold(const al::SensorMsg* msg);
bool isMsgBallAttackDRCHold(const al::SensorMsg* msg);
bool isMsgBallAttackCollide(const al::SensorMsg* msg);
bool isMsgBallTrample(const al::SensorMsg* msg);
bool isMsgBallTrampleCollide(const al::SensorMsg* msg);
bool isMsgFireBallCollide(const al::SensorMsg* msg);
bool isMsgFireBallFloorTouch(const al::SensorMsg* msg);
bool isMsgDokanBazookaAttack(const al::SensorMsg* msg);
bool isMsgSwitchOn(const al::SensorMsg* msg);
bool isMsgSwitchOnInit(const al::SensorMsg* msg);
bool isMsgSwitchOffInit(const al::SensorMsg* msg);
bool isMsgSwitchKillOn(const al::SensorMsg* msg);
bool isMsgSwitchKillOnInit(const al::SensorMsg* msg);
bool isMsgSwitchKillOffInit(const al::SensorMsg* msg);
bool isMsgAskSafetyPoint(const al::SensorMsg* msg);
bool trySetAskSafetyPointFollowPos(const al::SensorMsg* msg, sead::Vector3f*);
bool isMsgTouchAssist(const al::SensorMsg* msg);
bool isMsgTouchAssistNoPat(const al::SensorMsg* msg);
bool isMsgTouchAssistTrig(const al::SensorMsg* msg);
bool isMsgTouchAssistTrigOff(const al::SensorMsg* msg);
bool isMsgTouchAssistTrigNoPat(const al::SensorMsg* msg);
bool isMsgTouchAssistBurn(const al::SensorMsg* msg);
bool isMsgTouchAssistAll(const al::SensorMsg* msg);
bool isMsgTouchCarryItem(const al::SensorMsg* msg);
bool isMsgTouchReleaseItem(const al::SensorMsg* msg);
bool isMsgTouchStroke(const al::SensorMsg* msg);
bool isMsgIsNerveSupportFreeze(const al::SensorMsg* msg);
bool isMsgOnSyncSupportFreeze(const al::SensorMsg* msg);
bool isMsgOffSyncSupportFreeze(const al::SensorMsg* msg);
bool isMsgScreenPointInvalidCollisionParts(const al::SensorMsg* msg);
bool isMsgBlockUpperPunch(const al::SensorMsg* msg);
bool isMsgBlockLowerPunch(const al::SensorMsg* msg);
bool isMsgBlockItemGet(const al::SensorMsg* msg);
bool isMsgPlayerKouraAttack(const al::SensorMsg* msg);
bool isMsgLightFlash(const al::SensorMsg* msg);
bool isMsgForceAbyss(const al::SensorMsg* msg);
bool isMsgSwordAttackHigh(const al::SensorMsg* msg);
bool isMsgSwordAttackHighLeft(const al::SensorMsg* msg);
bool isMsgSwordAttackHighRight(const al::SensorMsg* msg);
bool isMsgSwordAttackLow(const al::SensorMsg* msg);
bool isMsgSwordAttackLowLeft(const al::SensorMsg* msg);
bool isMsgSwordAttackLowRight(const al::SensorMsg* msg);
bool isMsgSwordBeamAttack(const al::SensorMsg* msg);
bool isMsgSwordBeamReflectAttack(const al::SensorMsg* msg);
bool isMsgSwordAttackJumpUnder(const al::SensorMsg* msg);
bool isMsgShieldGuard(const al::SensorMsg* msg);
bool isMsgAskMultiPlayerEnemy(const al::SensorMsg* msg);
bool isMsgItemGettable(const al::SensorMsg* msg);
bool isMsgKikkiThrow(const al::SensorMsg* msg);
bool isMsgIsKikkiThrowTarget(const al::SensorMsg* msg);
bool isMsgPlayerCloudGet(const al::SensorMsg* msg);
bool isMsgAutoJump(const al::SensorMsg* msg);
bool isMsgPlayerTouchShadow(const al::SensorMsg* msg);
bool isMsgPlayerPullOutShadow(const al::SensorMsg* msg);
bool isMsgPlayerAttackShadow(const al::SensorMsg* msg);
bool isMsgPlayerAttackShadowStrong(const al::SensorMsg* msg);
bool isMsgPlayerAttackChangePos(const al::SensorMsg* msg);
bool isMsgAtmosOnlineLight(const al::SensorMsg* msg);
bool isMsgLightBurn(const al::SensorMsg* msg);
bool isMsgMoonLightBurn(const al::SensorMsg* msg);
bool isMsgString(const al::SensorMsg* msg);
bool isMsgStringV4fPtr(const al::SensorMsg* msg);
bool isMsgStringV4fSensorPtr(const al::SensorMsg* msg);
bool isMsgStringVoidPtr(const al::SensorMsg* msg);
bool isMsgPlayerTrampleForCrossoverSensor(const al::SensorMsg* msg, const al::HitSensor*, const al::HitSensor*);
bool isMsgPlayerTrampleReflectForCrossoverSensor(const al::SensorMsg* msg, const al::HitSensor*, const al::HitSensor*);
bool isMsgPlayerUpperPunchForCrossoverSensor(const al::SensorMsg* msg, const al::HitSensor*, const al::HitSensor*, f32);
bool isMsgKickStoneTrampleForCrossoverSensor(const al::SensorMsg* msg, const al::HitSensor*, const al::HitSensor*);
}  // namespace al