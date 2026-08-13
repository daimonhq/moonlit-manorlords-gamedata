#ifndef UE4SS_SDK_W_GamePresetToolTipV2_HPP
#define UE4SS_SDK_W_GamePresetToolTipV2_HPP

class UW_GamePresetToolTipV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UCommonLazyImage* fill;                                                     // 0x02D8 (size: 0x8)
    class UMLTextBlock* GoalText;                                                     // 0x02E0 (size: 0x8)
    class URichTextBlock* GoalTextDesc;                                               // 0x02E8 (size: 0x8)
    class UMLTextBlock* HeaderText;                                                   // 0x02F0 (size: 0x8)
    class UMLTextBlock* SetupText;                                                    // 0x02F8 (size: 0x8)
    class URichTextBlock* SetupTextDesc;                                              // 0x0300 (size: 0x8)
    FName gameSetupRowKey;                                                            // 0x0308 (size: 0x8)

    void Construct();
    void UpdateKey(FName gameSetupRowKey);
    void Destruct();
    void UpdateRichText();
    void ExecuteUbergraph_W_GamePresetToolTipV2(int32 EntryPoint);
}; // Size: 0x310

#endif
