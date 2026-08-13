#ifndef UE4SS_SDK_overlayLegend_HPP
#define UE4SS_SDK_overlayLegend_HPP

class UoverlayLegend_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UImage* Image_35;                                                           // 0x0370 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0378 (size: 0x8)
    class UMD_ControllerHotkey_C* MD_ControllerHotkey;                                // 0x0380 (size: 0x8)
    class UVerticalRadioSelect_C* VerticalRadioSelect;                                // 0x0388 (size: 0x8)
    FString SelectedOption;                                                           // 0x0390 (size: 0x10)

    void IncrementChoice();
    void ApplyPlatformLimits();
    FNaviSubGridLayout ComputeSubGridLayout();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__overlayLegend_VerticalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void ExecuteUbergraph_overlayLegend(int32 EntryPoint);
}; // Size: 0x3A0

#endif
