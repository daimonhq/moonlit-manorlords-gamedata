#ifndef UE4SS_SDK_W_InventoryTab_Animals_HPP
#define UE4SS_SDK_W_InventoryTab_Animals_HPP

class UW_InventoryTab_Animals_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UVerticalBox* animals_VB;                                                   // 0x0390 (size: 0x8)
    class UTextBlock* pastureSpace_txt;                                               // 0x0398 (size: 0x8)
    class UHorizontalBox* pastureStats_HB;                                            // 0x03A0 (size: 0x8)
    class UTextBlock* stable_space_txt;                                               // 0x03A8 (size: 0x8)
    class UHorizontalBox* stableStats_HB_1;                                           // 0x03B0 (size: 0x8)

    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_Animals(int32 EntryPoint);
}; // Size: 0x3B8

#endif
