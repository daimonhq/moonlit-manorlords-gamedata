#ifndef UE4SS_SDK_W_Menu_GameSetupSettingEntry_HPP
#define UE4SS_SDK_W_Menu_GameSetupSettingEntry_HPP

class UW_Menu_GameSetupSettingEntry_C : public UMLGameSetupSettingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UHorizontalBox* HB;                                                         // 0x03C8 (size: 0x8)
    class UImage* Icon;                                                               // 0x03D0 (size: 0x8)
    class UMLTextBlock* Text;                                                         // 0x03D8 (size: 0x8)
    FW_Menu_GameSetupSettingEntry_COnSettingChanged OnSettingChanged;                 // 0x03E0 (size: 0x10)
    void OnSettingChanged(class UMLGameSetupSettingWidget* Widget);
    bool GamepadSelected;                                                             // 0x03F0 (size: 0x1)
    FW_Menu_GameSetupSettingEntry_COnSettingHovered OnSettingHovered;                 // 0x03F8 (size: 0x10)
    void OnSettingHovered(class UUserWidget* MyWidget, bool Hovered);

    bool WantsAllInput();
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void GetToolTipLabel(FText& Return);
    void OnInitialized();
    void PreConstruct(bool IsDesignTime);
    void SelectionChangedEvent_Event(FString Value);
    void InitToolTip(class UUserWidget* InToolTip);
    void updateTooltip();
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnFocusChanged(bool nowHasFocus);
    void ExecuteUbergraph_W_Menu_GameSetupSettingEntry(int32 EntryPoint);
    void OnSettingHovered__DelegateSignature(class UUserWidget* MyWidget, bool Hovered);
    void OnSettingChanged__DelegateSignature(class UMLGameSetupSettingWidget* Widget);
}; // Size: 0x408

#endif
