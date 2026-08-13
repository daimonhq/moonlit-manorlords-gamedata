#ifndef UE4SS_SDK_W_Inventory_WorkerSlotV2_HPP
#define UE4SS_SDK_W_Inventory_WorkerSlotV2_HPP

class UW_Inventory_WorkerSlotV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* anim;                                                     // 0x02D8 (size: 0x8)
    class UW_StallButton_C* familyStall;                                              // 0x02E0 (size: 0x8)
    class UImage* Image;                                                              // 0x02E8 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x02F0 (size: 0x8)
    class ASMBuildingMaster* StallBuilding;                                           // 0x02F8 (size: 0x8)
    FGameplayTag CurrentStyle;                                                        // 0x0300 (size: 0x8)

    bool isBuildingTabOpened(class AMyPawnCPP_BP3_C*& pawnCPPBP, class UObject*& building);
    void SetFamilyStall(class ASMBuildingMaster* InBuilding);
    void UpdateStyle(FGameplayTag StyleTag, FSlateBrush Brush, FVector2D Size);
    void Animate();
    void BndEvt__W_Inventory_WorkerSlotV2_W_StallButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void ExecuteUbergraph_W_Inventory_WorkerSlotV2(int32 EntryPoint);
}; // Size: 0x308

#endif
