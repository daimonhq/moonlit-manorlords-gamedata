#ifndef UE4SS_SDK_Inventory_Item_HPP
#define UE4SS_SDK_Inventory_Item_HPP

class UInventory_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UTextBlock* itemAmt;                                                        // 0x02D8 (size: 0x8)
    class UImage* itemImage;                                                          // 0x02E0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip;                                  // 0x02E8 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02F0 (size: 0x8)
    int32 ItemType;                                                                   // 0x02F8 (size: 0x4)
    int32 amt;                                                                        // 0x02FC (size: 0x4)
    class ASMBuildingMaster* building;                                                // 0x0300 (size: 0x8)
    int32 spoilageIndex;                                                              // 0x0308 (size: 0x4)
    FText ToolTipTextToUse;                                                           // 0x0310 (size: 0x10)

    void updateInventoryItem();
    void ResetToolTip(class UUserWidget* InToolTip);
    void InitToolTip(class UUserWidget* InToolTip);
    void Construct();
    void ExecuteUbergraph_Inventory_Item(int32 EntryPoint);
}; // Size: 0x320

#endif
