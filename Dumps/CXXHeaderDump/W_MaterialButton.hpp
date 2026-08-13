#ifndef UE4SS_SDK_W_MaterialButton_HPP
#define UE4SS_SDK_W_MaterialButton_HPP

class UW_MaterialButton_C : public UMLButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UButton* Button;                                                            // 0x03E0 (size: 0x8)
    class UCommonLazyImage* Image;                                                    // 0x03E8 (size: 0x8)
    class UNamedSlot* NamedSlot;                                                      // 0x03F0 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x03F8 (size: 0x8)
    FSlateBrush BrushSettings;                                                        // 0x0400 (size: 0xB0)
    class UMaterialInterface* Material;                                               // 0x04B0 (size: 0x8)
    TSoftObjectPtr<UTexture2D> SoftTexture;                                           // 0x04B8 (size: 0x28)
    FName TextureParamName;                                                           // 0x04E0 (size: 0x8)
    FName HoveredParamName;                                                           // 0x04E8 (size: 0x8)
    FName PressedParamName;                                                           // 0x04F0 (size: 0x8)
    FName SelectedParamName;                                                          // 0x04F8 (size: 0x8)
    FW_MaterialButton_COnClicked OnClicked;                                           // 0x0500 (size: 0x10)
    void OnClicked(class UW_MaterialButton_C* MyWidget);
    FName InactiveParamName;                                                          // 0x0510 (size: 0x8)
    class USoundBase* HoveredSound;                                                   // 0x0518 (size: 0x8)
    class USoundBase* PressedSound;                                                   // 0x0520 (size: 0x8)
    FVector2D PressedOffset;                                                          // 0x0528 (size: 0x10)
    FButtonStyle ButtonStyle;                                                         // 0x0540 (size: 0x370)
    bool bUseDynamicMaterials;                                                        // 0x08B0 (size: 0x1)
    bool bHideNamedSlot;                                                              // 0x08B1 (size: 0x1)
    bool bIsCheckbox;                                                                 // 0x08B2 (size: 0x1)
    ECheckBoxState DefaultCheckedState;                                               // 0x08B3 (size: 0x1)
    bool bInactive;                                                                   // 0x08B4 (size: 0x1)
    bool bIsSelected;                                                                 // 0x08B5 (size: 0x1)
    bool bAddControllerHighlight;                                                     // 0x08B6 (size: 0x1)
    ENaviUiHighlightStyle ControllerHighlightStyle;                                   // 0x08B7 (size: 0x1)
    TEnumAsByte<EHorizontalAlignment> FillImageHAlign;                                // 0x08B8 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> FillImageVAlign;                                  // 0x08B9 (size: 0x1)
    TEnumAsByte<EHorizontalAlignment> SlotHAlign;                                     // 0x08BA (size: 0x1)
    TEnumAsByte<EVerticalAlignment> SlotVAlign;                                       // 0x08BB (size: 0x1)
    FW_MaterialButton_COnHovered OnHovered;                                           // 0x08C0 (size: 0x10)
    void OnHovered(class UW_MaterialButton_C* MyWidget, bool Hovered);
    TSoftObjectPtr<UMaterialInterface> NormalMaterial;                                // 0x08D0 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> HoveredMaterial;                               // 0x08F8 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> PressedMaterial;                               // 0x0920 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> SelectedMaterial;                              // 0x0948 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> InactiveMaterial;                              // 0x0970 (size: 0x28)
    FW_MaterialButton_COnInitToolTip OnInitToolTip;                                   // 0x0998 (size: 0x10)
    void OnInitToolTip(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    FW_MaterialButton_COnResetToolTip OnResetToolTip;                                 // 0x09A8 (size: 0x10)
    void OnResetToolTip(class UUserWidget* UserWidget, class UNaviUi* InSourceButton);
    class UMD_NaviAutoFocusHighlight_C* ControllerHighlight;                          // 0x09B8 (size: 0x8)
    ESlateVisibility InactiveVisibility;                                              // 0x09C0 (size: 0x1)

    void SetDynamicMaterialParam(FName ParameterName, float Value);
    void InitControllerHighlight();
    void UpdateButtonMaterial(bool Hovered, bool Pressed, bool Selected);
    void GetTextState(bool Hovered, EMLTextState& Return);
    void HandleClicked();
    void HandleInactive(bool bInactive);
    void HandleSelected(bool bSelected);
    void HandlePressed(bool bPressed);
    void HandleHovered(bool bHovered);
    void GetIsSelected(bool& bIsSelected);
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_MaterialButton_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_MaterialButton_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_MaterialButton_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void SetButtonSelected(bool Selected);
    void SetImageSize(FVector2D Size);
    void OnFocusChanged(bool nowHasFocus);
    void GamepadReleased();
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void SetButtonInactive(bool Inactive);
    void InitToolTip(class UUserWidget* InToolTip);
    void ResetToolTip(class UUserWidget* InToolTip);
    void BndEvt__W_MaterialButton_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_MaterialButton_Button_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_W_MaterialButton(int32 EntryPoint);
    void OnResetToolTip__DelegateSignature(class UUserWidget* UserWidget, class UNaviUi* InSourceButton);
    void OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void OnHovered__DelegateSignature(class UW_MaterialButton_C* MyWidget, bool Hovered);
    void OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
}; // Size: 0x9C1

#endif
