#ifndef UE4SS_SDK_productionFocusChoice_HPP
#define UE4SS_SDK_productionFocusChoice_HPP

class UproductionFocusChoice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* Border_1;                                                          // 0x02D8 (size: 0x8)
    class UButton* Button_15;                                                         // 0x02E0 (size: 0x8)
    class UImage* GoodIcon;                                                           // 0x02E8 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x02F0 (size: 0x8)
    class UTextBlock* priority_txt;                                                   // 0x02F8 (size: 0x8)
    class UImage* selected_img;                                                       // 0x0300 (size: 0x8)
    int32 goodType;                                                                   // 0x0308 (size: 0x4)
    bool IsSelected;                                                                  // 0x030C (size: 0x1)
    FproductionFocusChoice_CProductionFocusChanged productionFocusChanged;            // 0x0310 (size: 0x10)
    void productionFocusChanged(int32 goodType, bool Active);

    void UpdateRecipePriority(class ASMBuildingMaster* building);
    void listFormattedGoods(TArray<FGood>& Input, TArray<FGood>& Output, FString& text_input, FString& text_output);
    void listGoods(TArray<FGood>& Array, FString& text1);
    void BndEvt__productionFocusChoice_Button_15_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_productionFocusChoice(int32 EntryPoint);
    void productionFocusChanged__DelegateSignature(int32 goodType, bool Active);
}; // Size: 0x320

#endif
