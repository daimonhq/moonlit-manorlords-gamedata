#ifndef UE4SS_SDK_W_HUD_MercenaryPanelV2_HPP
#define UE4SS_SDK_W_HUD_MercenaryPanelV2_HPP

class UW_HUD_MercenaryPanelV2_C : public UMLMercenaryPanelWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class UWidgetAnimation* ShowAnim;                                                 // 0x03A8 (size: 0x8)
    class UMLNumericTextBlock* TotalCostNumeric;                                      // 0x03B0 (size: 0x8)
    class UVerticalBox* VB;                                                           // 0x03B8 (size: 0x8)
    bool PanelOpen;                                                                   // 0x03C0 (size: 0x1)

    void PlayShowAnim(bool show);
    void BP_Update(int32 TotalCost);
    void Construct();
    void OnMapViewChanged();
    void ExecuteUbergraph_W_HUD_MercenaryPanelV2(int32 EntryPoint);
}; // Size: 0x3C1

#endif
