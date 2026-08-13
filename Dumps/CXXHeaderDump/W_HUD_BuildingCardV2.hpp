#ifndef UE4SS_SDK_W_HUD_BuildingCardV2_HPP
#define UE4SS_SDK_W_HUD_BuildingCardV2_HPP

class UW_HUD_BuildingCardV2_C : public UMLBuildingCardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UWidgetAnimation* OpenAnim;                                                 // 0x0308 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0310 (size: 0x8)
    class UBorder* Border_Unused;                                                     // 0x0318 (size: 0x8)
    class UW_MaterialButton_C* Button;                                                // 0x0320 (size: 0x8)
    class UImage* Frame;                                                              // 0x0328 (size: 0x8)
    class UImage* HoverFrame;                                                         // 0x0330 (size: 0x8)
    class UCommonLazyImage* Icon;                                                     // 0x0338 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x0340 (size: 0x8)
    class UImage* padlock;                                                            // 0x0348 (size: 0x8)
    TMap<class EBuildingCategory, class TSoftObjectPtr<UTexture2D>> FrameTexures;     // 0x0350 (size: 0x50)
    class UUserWidget* AttributeWidget;                                               // 0x03A0 (size: 0x8)
    FSlateColor DefaultTint;                                                          // 0x03A8 (size: 0x14)

    void TriggerTutorial();
    void UpdatePadlockVisibility();
    void CreateAttributeWidget();
    class UUserWidget* CreateResourceWidget(const TSoftObjectPtr<UTexture2D>& ResourceIcon);
    void UpdateStyle();
    void BndEvt__W_HUD_BuildingCardV2_Button_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature(class UW_MaterialButton_C* MyWidget, bool Hovered);
    void BndEvt__W_HUD_BuildingCardV2_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void Init_BP(const FStat& Stat);
    void DeInit_BP();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_HUD_BuildingCardV2_Button_K2Node_ComponentBoundEvent_1_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void playOpenAnimation();
    void WidgetAnimationEvt_OpenAnim_K2Node_WidgetAnimationEvent_0();
    void ExecuteUbergraph_W_HUD_BuildingCardV2(int32 EntryPoint);
}; // Size: 0x3BC

#endif
