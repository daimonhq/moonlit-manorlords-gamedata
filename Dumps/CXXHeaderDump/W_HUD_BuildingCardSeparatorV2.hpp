#ifndef UE4SS_SDK_W_HUD_BuildingCardSeparatorV2_HPP
#define UE4SS_SDK_W_HUD_BuildingCardSeparatorV2_HPP

class UW_HUD_BuildingCardSeparatorV2_C : public UMLBuildingSeparator
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)
    class UWidgetAnimation* OpenAnim;                                                 // 0x02E0 (size: 0x8)
    class UImage* Image;                                                              // 0x02E8 (size: 0x8)

    void Init_BP();
    void ExecuteUbergraph_W_HUD_BuildingCardSeparatorV2(int32 EntryPoint);
}; // Size: 0x2F0

#endif
