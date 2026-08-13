#ifndef UE4SS_SDK_W_HUD_RegionGoodPanel_HPP
#define UE4SS_SDK_W_HUD_RegionGoodPanel_HPP

class UW_HUD_RegionGoodPanel_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UHorizontalBox* ConstructionStats;                                          // 0x0370 (size: 0x8)
    class UHorizontalBox* GeneralStats;                                               // 0x0378 (size: 0x8)
    class UScrollBox* ScrollBox;                                                      // 0x0380 (size: 0x8)
    class UW_MaterialButton_C* ShowSurplusButton;                                     // 0x0388 (size: 0x8)
    class UMLToolTipAnchor* ToolTipAnchor;                                            // 0x0390 (size: 0x8)
    TSoftObjectPtr<UMaterialInterface> SurplusOff;                                    // 0x0398 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> SurplusOn;                                     // 0x03C0 (size: 0x28)
    class UWidget* VisibleStats;                                                      // 0x03E8 (size: 0x8)
    class UUserWidget* ActiveSurplusToolTip;                                          // 0x03F0 (size: 0x8)

    void UpdateSurplusButtonMaterial();
    void UpdateSurplusToolTip(class UUserWidget* InWidget);
    FNaviSubGridLayout ComputeSubGridLayout();
    void UpdateVisibleStats();
    void UpdateRegion();
    void BndEvt__W_HUD_RegionGoodPanel_ShowSurplusButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_RegionGoodPanel_ShowSurplusButton_K2Node_ComponentBoundEvent_1_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_HUD_RegionGoodPanel_ShowSurplusButton_K2Node_ComponentBoundEvent_2_OnResetToolTip__DelegateSignature(class UUserWidget* UserWidget, class UNaviUi* InSourceButton);
    void ExecuteUbergraph_W_HUD_RegionGoodPanel(int32 EntryPoint);
}; // Size: 0x3F8

#endif
