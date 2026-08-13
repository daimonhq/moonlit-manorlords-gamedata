#ifndef UE4SS_SDK_ProtectResourceAreaCheckboxWidget_HPP
#define UE4SS_SDK_ProtectResourceAreaCheckboxWidget_HPP

class UProtectResourceAreaCheckboxWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Image_32;                                                           // 0x02D8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x02E0 (size: 0x8)
    class UMLDefaultCheckbox_C* MLDefaultCheckbox;                                    // 0x02E8 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02F0 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_ProtectResourceAreaCheckboxWidget(int32 EntryPoint);
}; // Size: 0x2F8

#endif
