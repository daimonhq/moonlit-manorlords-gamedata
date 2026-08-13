#ifndef UE4SS_SDK_W_GameSetup_MapTradePoint_HPP
#define UE4SS_SDK_W_GameSetup_MapTradePoint_HPP

class UW_GameSetup_MapTradePoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* ShowAnim;                                                 // 0x02D8 (size: 0x8)
    class UImage* NormalHoveredImage;                                                 // 0x02E0 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x02E8 (size: 0x8)
    bool Hovered;                                                                     // 0x02F0 (size: 0x1)

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ResetToolTip(class UUserWidget* InToolTip);
    void Construct();
    void InitToolTip(class UUserWidget* InToolTip);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_GameSetup_MapTradePoint(int32 EntryPoint);
}; // Size: 0x2F1

#endif
