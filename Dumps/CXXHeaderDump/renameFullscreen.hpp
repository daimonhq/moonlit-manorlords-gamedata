#ifndef UE4SS_SDK_renameFullscreen_HPP
#define UE4SS_SDK_renameFullscreen_HPP

class UrenameFullscreen_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UButton* close_button_1;                                                    // 0x0370 (size: 0x8)
    class UEditableText* EditableText_130;                                            // 0x0378 (size: 0x8)
    class UTextBlock* header_txt;                                                     // 0x0380 (size: 0x8)
    class UImage* Image;                                                              // 0x0388 (size: 0x8)
    class UMD_NaviAutoButton_C* Navi_ExitButton;                                      // 0x0390 (size: 0x8)
    class UMD_NaviHijackProxy_C* Navi_TextEdit;                                       // 0x0398 (size: 0x8)
    class ARegion* Region;                                                            // 0x03A0 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void Construct();
    void BndEvt__close_button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__EditableText_130_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Open();
    void BndEvt__renameFullscreen_EditableText_130_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__renameFullscreen_MD_NaviHijackProxy_K2Node_ComponentBoundEvent_3_HijackedHandleInput__DelegateSignature(ENaviUiIntent intent);
    void ExecuteUbergraph_renameFullscreen(int32 EntryPoint);
}; // Size: 0x3A8

#endif
