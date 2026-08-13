#ifndef UE4SS_SDK_W_HUD_ArmyControlGroup_HPP
#define UE4SS_SDK_W_HUD_ArmyControlGroup_HPP

class UW_HUD_ArmyControlGroup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Bg;                                                                 // 0x02D8 (size: 0x8)
    class UMLNumericTextBlock* Text;                                                  // 0x02E0 (size: 0x8)
    int32 Group;                                                                      // 0x02E8 (size: 0x4)
    TArray<FSlateColor> GroupColors;                                                  // 0x02F0 (size: 0x10)

    void UpdateStyle();
    void Update(int32 InGroup);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_HUD_ArmyControlGroup(int32 EntryPoint);
}; // Size: 0x300

#endif
