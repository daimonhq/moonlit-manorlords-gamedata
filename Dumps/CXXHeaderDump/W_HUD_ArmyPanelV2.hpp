#ifndef UE4SS_SDK_W_HUD_ArmyPanelV2_HPP
#define UE4SS_SDK_W_HUD_ArmyPanelV2_HPP

class UW_HUD_ArmyPanelV2_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UWidgetAnimation* CommandListAnim;                                          // 0x0370 (size: 0x8)
    class UWidgetAnimation* RecruitOverlayAnim;                                       // 0x0378 (size: 0x8)
    class UW_MaterialButton_C* AddSquadButton;                                        // 0x0380 (size: 0x8)
    class UW_HUD_ArmyCommandList_C* CommandList;                                      // 0x0388 (size: 0x8)
    class UOverlay* CommandOverlay;                                                   // 0x0390 (size: 0x8)
    class UW_MaterialButton_C* HireMercenariesButton;                                 // 0x0398 (size: 0x8)
    class UOverlay* RecruitOverlay;                                                   // 0x03A0 (size: 0x8)
    class USizeBox* RecruitSizeBox;                                                   // 0x03A8 (size: 0x8)
    class UImage* squadBg;                                                            // 0x03B0 (size: 0x8)
    class UHorizontalBox* SquadHB;                                                    // 0x03B8 (size: 0x8)
    class UW_HUD_ArmyRecruitPanel_C* W_HUD_ArmyRecruitPanel;                          // 0x03C0 (size: 0x8)
    class UW_HUD_ArmyStatPanelV2_C* W_HUD_ArmyStatPanelV2;                            // 0x03C8 (size: 0x8)
    class UW_HUD_ArmyUnitGrid_C* W_HUD_ArmyUnitGrid;                                  // 0x03D0 (size: 0x8)
    bool CommandListOpen;                                                             // 0x03D8 (size: 0x1)
    bool RecruitOverlayOpen;                                                          // 0x03D9 (size: 0x1)

    void NotifyOpen();
    void UpdateBackgroundWidth(double DeltaTime);
    void UpdateCommandListVisibility();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_HUD_ArmyUnitGrid_W_MaterialButton_K2Node_ComponentBoundEvent_1_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_ArmyPanelV2_HireMercenariesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_ArmyPanelV2_HireMercenariesButton_K2Node_ComponentBoundEvent_2_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_ArmyPanelV2_AddSquadButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void OnInitialized();
    void OnArmyUpdateRequested_Event();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnArmyListUpdateRequested_Event();
    void ExecuteUbergraph_W_HUD_ArmyPanelV2(int32 EntryPoint);
}; // Size: 0x3DA

#endif
