#ifndef UE4SS_SDK_W_InventoryTab_Storage_HPP
#define UE4SS_SDK_W_InventoryTab_Storage_HPP

class UW_InventoryTab_Storage_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UHorizontalBox* genericStorage_HB;                                          // 0x0390 (size: 0x8)
    class UUniformGridPanel* inventoryGrid;                                           // 0x0398 (size: 0x8)
    class UHorizontalBox* LargeStorage_HB;                                            // 0x03A0 (size: 0x8)
    class UHorizontalBox* pantryStorage_HB;                                           // 0x03A8 (size: 0x8)
    class UProgressBar* PrograssBarPantry;                                            // 0x03B0 (size: 0x8)
    class UProgressBar* ProgressBarGeneric;                                           // 0x03B8 (size: 0x8)
    class UProgressBar* ProgressBarLogs;                                              // 0x03C0 (size: 0x8)
    class UVerticalBox* storage;                                                      // 0x03C8 (size: 0x8)
    class UlocalizedTextBox_C* storage_empty;                                         // 0x03D0 (size: 0x8)
    class UVerticalBox* storage_limits_vb;                                            // 0x03D8 (size: 0x8)
    class UlocalizedTextBox_C* storage_txt;                                           // 0x03E0 (size: 0x8)
    class UTextBlock* StorageGenericText;                                             // 0x03E8 (size: 0x8)
    class UTextBlock* StorageNumbersLogs;                                             // 0x03F0 (size: 0x8)
    class UTextBlock* StoragePantryText;                                              // 0x03F8 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void getExistingInventoryItemWidget(int32 goodType, class UInventory_Item_C*& AsInventory Item, int32& Child Index);
    void updateInventoryGrid();
    void UpdateStorageLimits();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_Storage(int32 EntryPoint);
}; // Size: 0x400

#endif
