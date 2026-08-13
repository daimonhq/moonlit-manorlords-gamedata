#ifndef UE4SS_SDK_W_HUD_OverlayLegendV2_HPP
#define UE4SS_SDK_W_HUD_OverlayLegendV2_HPP

class UW_HUD_OverlayLegendV2_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UVerticalRadioSelect_C* VerticalRadioSelect;                                // 0x0370 (size: 0x8)
    FString SelectedOption;                                                           // 0x0378 (size: 0x10)
    TMap<class FName, class FName> OverlayNameToParam;                                // 0x0388 (size: 0x50)

    void UpdateActiveOverlay(FName NewOverlay);
    void onPlaceBuildingChanged();
    void onPlotTypeChanged();
    void ApplyPlatformLimits();
    FNaviSubGridLayout ComputeSubGridLayout();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__overlayLegend_VerticalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void OnPossessedPawnChanged_Event(class APawn* OldPawn, class APawn* NewPawn);
    void ExecuteUbergraph_W_HUD_OverlayLegendV2(int32 EntryPoint);
}; // Size: 0x3D8

#endif
