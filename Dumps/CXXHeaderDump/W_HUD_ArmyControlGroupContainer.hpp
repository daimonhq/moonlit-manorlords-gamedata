#ifndef UE4SS_SDK_W_HUD_ArmyControlGroupContainer_HPP
#define UE4SS_SDK_W_HUD_ArmyControlGroupContainer_HPP

class UW_HUD_ArmyControlGroupContainer_C : public UMLArmyControlGroupContainerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)

    void BP_UpdateActiveGroup(class UUserWidget* InWidget, int32 Group);
    void ExecuteUbergraph_W_HUD_ArmyControlGroupContainer(int32 EntryPoint);
}; // Size: 0x2E8

#endif
