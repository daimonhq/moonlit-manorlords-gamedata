#ifndef UE4SS_SDK_W_HUD_RemoveRoadScreen_HPP
#define UE4SS_SDK_W_HUD_RemoveRoadScreen_HPP

class UW_HUD_RemoveRoadScreen_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0370 (size: 0x8)
    class UOverlay* HeaderOverlay;                                                    // 0x0378 (size: 0x8)
    class UW_SaveLoadButton_Positive_C* NoButton;                                     // 0x0380 (size: 0x8)
    class UHorizontalBox* OptionsHB;                                                  // 0x0388 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x0390 (size: 0x8)
    class UW_SaveLoadButton_Negative_C* YesButton;                                    // 0x0398 (size: 0x8)
    class ARoad* Road;                                                                // 0x03A0 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void Construct();
    void BndEvt__W_HUD_RemoveRoadScreen_NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_RemoveRoadScreen_YesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void ExecuteUbergraph_W_HUD_RemoveRoadScreen(int32 EntryPoint);
}; // Size: 0x3A8

#endif
