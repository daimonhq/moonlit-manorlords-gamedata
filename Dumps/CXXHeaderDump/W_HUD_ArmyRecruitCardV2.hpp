#ifndef UE4SS_SDK_W_HUD_ArmyRecruitCardV2_HPP
#define UE4SS_SDK_W_HUD_ArmyRecruitCardV2_HPP

class UW_HUD_ArmyRecruitCardV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x02D8 (size: 0x8)
    class UW_MaterialButton_C* Button;                                                // 0x02E0 (size: 0x8)
    class UImage* Frame;                                                              // 0x02E8 (size: 0x8)
    class UCommonLazyImage* Icon;                                                     // 0x02F0 (size: 0x8)
    class UMLToolTipAnchor* ToolTipAnchor;                                            // 0x02F8 (size: 0x8)
    FName unitType;                                                                   // 0x0300 (size: 0x8)

    void HandleClicked();
    void GetToolTipText(FText& Result);
    void ResetToolTip(class UUserWidget* InToolTip);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_HUD_ArmyRecruitCardV2_Button_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature(class UW_MaterialButton_C* MyWidget, bool Hovered);
    void BndEvt__W_HUD_ArmyRecruitCardV2_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void Construct();
    void InitToolTip(class UUserWidget* InToolTip);
    void ExecuteUbergraph_W_HUD_ArmyRecruitCardV2(int32 EntryPoint);
}; // Size: 0x308

#endif
