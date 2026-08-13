#ifndef UE4SS_SDK_W_MapSelectComboButton_HPP
#define UE4SS_SDK_W_MapSelectComboButton_HPP

class UW_MapSelectComboButton_C : public UW_MaterialButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09C8 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x09D0 (size: 0x8)
    class UImage* arrow;                                                              // 0x09D8 (size: 0x8)
    class UMenuAnchor* MenuAnchor;                                                    // 0x09E0 (size: 0x8)
    TSoftObjectPtr<UTexture2D> NormalTexture;                                         // 0x09E8 (size: 0x28)
    TSoftObjectPtr<UTexture2D> HoveredTexture;                                        // 0x0A10 (size: 0x28)
    TSoftObjectPtr<UTexture2D> PressedTexture;                                        // 0x0A38 (size: 0x28)
    class UW_MapSelectionGrid_C* MenuGrid;                                            // 0x0A60 (size: 0x8)
    bool MenuOpen;                                                                    // 0x0A68 (size: 0x1)
    FW_MapSelectComboButton_COnMapSelected OnMapSelected;                             // 0x0A70 (size: 0x10)
    void OnMapSelected(FName mapName);

    class UUserWidget* On_MenuAnchor_GetUserMenuContent();
    void HandlePressed(bool bPressed);
    void HandleHovered(bool bHovered);
    void BndEvt__W_MapSelectButton_MenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
    void HandleMapSelected(FName mapName);
    void Construct();
    void OnTextChanged();
    void ExecuteUbergraph_W_MapSelectComboButton(int32 EntryPoint);
    void OnMapSelected__DelegateSignature(FName mapName);
}; // Size: 0xA80

#endif
