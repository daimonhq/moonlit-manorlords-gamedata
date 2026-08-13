#ifndef UE4SS_SDK_FallenTreeBP_HPP
#define UE4SS_SDK_FallenTreeBP_HPP

class AFallenTreeBP_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0418 (size: 0x8)
    float death_NewTrack_0_70C8B5C84B4F30B0AC80B880FA86F5B9;                          // 0x0420 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> death__Direction_70C8B5C84B4F30B0AC80B880FA86F5B9; // 0x0424 (size: 0x1)
    class UTimelineComponent* death;                                                  // 0x0428 (size: 0x8)
    float fallAnim_wind_1A6DBA594B97876A8BEB8E9A5B672A41;                             // 0x0430 (size: 0x4)
    float fallAnim_rotation_1A6DBA594B97876A8BEB8E9A5B672A41;                         // 0x0434 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> fallAnim__Direction_1A6DBA594B97876A8BEB8E9A5B672A41; // 0x0438 (size: 0x1)
    class UTimelineComponent* fallAnim;                                               // 0x0440 (size: 0x8)
    class UMaterialInstanceDynamic* Mat0;                                             // 0x0448 (size: 0x8)
    class UMaterialInstanceDynamic* Mat1;                                             // 0x0450 (size: 0x8)
    double fallTime;                                                                  // 0x0458 (size: 0x8)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x0460 (size: 0x8)

    void death__FinishedFunc();
    void death__UpdateFunc();
    void fallAnim__FinishedFunc();
    void fallAnim__UpdateFunc();
    void fallAnim__event__EventFunc();
    void removeResource();
    void startFalling();
    void ReceiveBeginPlay();
    void TreeHitGroundEvent();
    void ExecuteUbergraph_FallenTreeBP(int32 EntryPoint);
}; // Size: 0x468

#endif
