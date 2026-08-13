#ifndef UE4SS_SDK_mapSelectionEntry_HPP
#define UE4SS_SDK_mapSelectionEntry_HPP

class UmapSelectionEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x02D8 (size: 0x8)
    class UMLTextBlock* Text;                                                         // 0x02E0 (size: 0x8)
    FName mapName;                                                                    // 0x02E8 (size: 0x8)

    void playOpenAnimation();
    void ResetToolTip(class UUserWidget* InToolTip);
    void Construct();
    void InitToolTip(class UUserWidget* InToolTip);
    void ExecuteUbergraph_mapSelectionEntry(int32 EntryPoint);
}; // Size: 0x2F0

#endif
