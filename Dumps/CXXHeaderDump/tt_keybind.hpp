#ifndef UE4SS_SDK_tt_keybind_HPP
#define UE4SS_SDK_tt_keybind_HPP

class Utt_keybind_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* Border;                                                            // 0x02D8 (size: 0x8)
    class UImage* ControllerIconDisplay;                                              // 0x02E0 (size: 0x8)
    class URichTextBlock* RichTextBlock_64;                                           // 0x02E8 (size: 0x8)
    class UMaterialInterface* BorderMaterial;                                         // 0x02F0 (size: 0x8)
    bool red;                                                                         // 0x02F8 (size: 0x1)
    FName MappingName;                                                                // 0x02FC (size: 0x8)
    bool isAxis;                                                                      // 0x0304 (size: 0x1)
    int32 KeyIndex;                                                                   // 0x0308 (size: 0x4)
    bool CustomName;                                                                  // 0x030C (size: 0x1)
    EInputIconButton ControllerModeInput;                                             // 0x030D (size: 0x1)

    void SetShowControllerIcon(bool DoShow);
    void OnControlHookModeChange(EControlInputMode nextInputMode, EControlInputMode lastInputMode);
    void RegisterOnInputModeChanges();
    void UpdateControllerInput();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ConsiderIcons();
    void ExecuteUbergraph_tt_keybind(int32 EntryPoint);
}; // Size: 0x30E

#endif
