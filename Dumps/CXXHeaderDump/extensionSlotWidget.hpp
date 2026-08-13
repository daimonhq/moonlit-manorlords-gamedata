#ifndef UE4SS_SDK_extensionSlotWidget_HPP
#define UE4SS_SDK_extensionSlotWidget_HPP

class UextensionSlotWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UWidgetAnimation* openOptions;                                              // 0x0370 (size: 0x8)
    class UWidgetAnimation* closeOptions;                                             // 0x0378 (size: 0x8)
    class UVerticalBox* allOptions_vb;                                                // 0x0380 (size: 0x8)
    class UW_BuildingExtensionButton_C* DemolishButton;                               // 0x0388 (size: 0x8)
    class UImage* exclam;                                                             // 0x0390 (size: 0x8)
    class UMD_NaviAutoButton_C* expansionButton;                                      // 0x0398 (size: 0x8)
    class UNamedSlot* ExtensionGridNamedSlot;                                         // 0x03A0 (size: 0x8)
    class UImage* Image_55;                                                           // 0x03A8 (size: 0x8)
    class UImage* Image_93;                                                           // 0x03B0 (size: 0x8)
    class UButton* main_button;                                                       // 0x03B8 (size: 0x8)
    class USizeBox* options_sb;                                                       // 0x03C0 (size: 0x8)
    FExtension Extension;                                                             // 0x03D0 (size: 0xD0)
    class ASMBuildingMaster* building;                                                // 0x04A0 (size: 0x8)
    int32 ID;                                                                         // 0x04A8 (size: 0x4)
    bool showConversionOptions;                                                       // 0x04AC (size: 0x1)
    bool showOptions;                                                                 // 0x04AD (size: 0x1)
    class UextensionSlotGrid_C* SlotGrid;                                             // 0x04B0 (size: 0x8)

    void CreateExtensionGrid();
    void CheckExtensionType(int32 ExtensionType, int32& RowName);
    FNaviSubGridLayout ComputeSubGridLayout();
    void requestArtisanChange(int32 New Request Upgrade ID);
    void playExtensionSignatureSnd(int32 Index);
    void ChangeExtension(int32 Type);
    void updateContents();
    void BndEvt__extensionSlotWidget_main_button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_Button_14_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_DemolishButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void WidgetAnimationEvt_closeOptions_K2Node_WidgetAnimationEvent_0();
    void ExecuteUbergraph_extensionSlotWidget(int32 EntryPoint);
}; // Size: 0x4B8

#endif
