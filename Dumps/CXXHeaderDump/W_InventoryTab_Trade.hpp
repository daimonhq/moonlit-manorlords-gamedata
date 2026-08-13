#ifndef UE4SS_SDK_W_InventoryTab_Trade_HPP
#define UE4SS_SDK_W_InventoryTab_Trade_HPP

class UW_InventoryTab_Trade_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UNamedSlot* TradeWidgetSlot;                                                // 0x0390 (size: 0x8)
    class UUserWidget* TradeWidget;                                                   // 0x0398 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void UpdateTradeWidget();
    void CreateTradeWidget();
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_Trade(int32 EntryPoint);
}; // Size: 0x3A0

#endif
