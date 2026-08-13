#ifndef UE4SS_SDK_taxOption_HPP
#define UE4SS_SDK_taxOption_HPP

class UtaxOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x02D8 (size: 0x8)
    class UW_LegacyButton_C* DecreaseTaxButton;                                       // 0x02E0 (size: 0x8)
    class UEditableTextBox* editableText_taxRate;                                     // 0x02E8 (size: 0x8)
    class UMLTextBlock* FormText;                                                     // 0x02F0 (size: 0x8)
    class UW_LegacyButton_C* IncreaseTaxButton;                                       // 0x02F8 (size: 0x8)
    class UMD_NaviAutoTooltip_C* Navi_NameTooltip;                                    // 0x0300 (size: 0x8)
    class UMD_NaviHijackProxy_C* Navi_TextEdit;                                       // 0x0308 (size: 0x8)
    class UImage* taxIcon;                                                            // 0x0310 (size: 0x8)
    class USizeBox* taxName_sb;                                                       // 0x0318 (size: 0x8)
    class UMLTextBlock* TaxNameText;                                                  // 0x0320 (size: 0x8)
    class USlider* taxSlider;                                                         // 0x0328 (size: 0x8)
    class UTexture2D* taxIconTexture;                                                 // 0x0330 (size: 0x8)
    class ARegion* Region;                                                            // 0x0338 (size: 0x8)
    class UInventory_C* Inventory;                                                    // 0x0340 (size: 0x8)
    FName taxType;                                                                    // 0x0348 (size: 0x8)
    FName taxedInKey;                                                                 // 0x0350 (size: 0x8)
    int32 taxMin;                                                                     // 0x0358 (size: 0x4)
    int32 taxMax;                                                                     // 0x035C (size: 0x4)
    int32 taxButtonMul;                                                               // 0x0360 (size: 0x4)

    void SetRegion(class ARegion* Region);
    void increaseDecreaseTax(int32 amt);
    void Change to Amt(int32 amt);
    void Update Current Rate();
    void BndEvt__taxOption_editableText_taxRate_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__editableText_taxRate_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Slider_279_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__renameFullscreen_MD_NaviHijackProxy_K2Node_ComponentBoundEvent_3_HijackedHandleInput__DelegateSignature(ENaviUiIntent intent);
    void InitToolTip(class UUserWidget* InToolTip);
    void ResetToolTip(class UUserWidget* InToolTip);
    void Construct();
    void BndEvt__taxOption_DecreaseTaxButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__taxOption_IncreaseTaxButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_taxOption(int32 EntryPoint);
}; // Size: 0x364

#endif
