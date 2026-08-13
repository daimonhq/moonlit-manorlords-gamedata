#ifndef UE4SS_SDK_W_MapSelectionGrid_HPP
#define UE4SS_SDK_W_MapSelectionGrid_HPP

class UW_MapSelectionGrid_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x02D8 (size: 0x8)
    class UImage* Bg;                                                                 // 0x02E0 (size: 0x8)
    class UGridPanel* Grid;                                                           // 0x02E8 (size: 0x8)
    FW_MapSelectionGrid_COnSelected OnSelected;                                       // 0x02F0 (size: 0x10)
    void OnSelected(FName mapName);
    class UUserWidget* HoveredHighlight;                                              // 0x0300 (size: 0x8)
    FSlateBrush HoveredHighlightBrush;                                                // 0x0310 (size: 0xB0)
    FName PendingMapName;                                                             // 0x03C0 (size: 0x8)
    FSlateBrush AlternateBrush;                                                       // 0x03D0 (size: 0xB0)
    FSlateBrush EmptyBrush;                                                           // 0x0480 (size: 0xB0)

    void SequenceEvent__ENTRYPOINTW_MapSelectionGrid();
    void ShouldCreateEntry(FName mapName, bool& Result);
    void CreateEntryWidget(FName InMapName, int32 InRow);
    void SequenceEvent();
    void PreConstruct(bool IsDesignTime);
    void OnEntryClicked(class UW_MaterialButton_C* MyWidget);
    void OnEntryHovered(class UW_MaterialButton_C* MyWidget, bool Hovered);
    void Destruct();
    void ExecuteUbergraph_W_MapSelectionGrid(int32 EntryPoint);
    void OnSelected__DelegateSignature(FName mapName);
}; // Size: 0x530

#endif
