#ifndef UE4SS_SDK_NDA_widget_HPP
#define UE4SS_SDK_NDA_widget_HPP

class UNDA_widget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0370 (size: 0x8)
    class UButton* Button;                                                            // 0x0378 (size: 0x8)
    class UButton* Button_279;                                                        // 0x0380 (size: 0x8)
    class UMLDefaultCheckbox_C* check_A;                                              // 0x0388 (size: 0x8)
    class UMLDefaultCheckbox_C* check_b;                                              // 0x0390 (size: 0x8)
    class UMLDefaultCheckbox_C* check_c;                                              // 0x0398 (size: 0x8)
    class UTextBlock* date_txt;                                                       // 0x03A0 (size: 0x8)
    class UTextBlock* Header;                                                         // 0x03A8 (size: 0x8)
    class UImage* Image_7;                                                            // 0x03B0 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_accept;                                          // 0x03B8 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_quit;                                            // 0x03C0 (size: 0x8)
    class UTextBlock* nda_txt;                                                        // 0x03C8 (size: 0x8)
    class UTextBlock* nda_txt_1;                                                      // 0x03D0 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void ConsiderNdaAcceptance();
    void Construct();
    void BndEvt__NDA_widget_Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__NDA_widget_Button_279_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__NDA_widget_check_A_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature(bool IsChecked);
    void BndEvt__NDA_widget_check_b_K2Node_ComponentBoundEvent_6_OnValueChange__DelegateSignature(bool IsChecked);
    void BndEvt__NDA_widget_check_c_K2Node_ComponentBoundEvent_7_OnValueChange__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_NDA_widget(int32 EntryPoint);
}; // Size: 0x3D8

#endif
