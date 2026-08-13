#ifndef UE4SS_SDK_W_InventoryTab_RoadConnection_HPP
#define UE4SS_SDK_W_InventoryTab_RoadConnection_HPP

class UW_InventoryTab_RoadConnection_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UTextBlock* road_txt;                                                       // 0x0390 (size: 0x8)
    class UImage* roadConnectionIcon;                                                 // 0x0398 (size: 0x8)
    class UHorizontalBox* roadStatus_HB;                                              // 0x03A0 (size: 0x8)

    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_RoadConnection(int32 EntryPoint);
}; // Size: 0x3A8

#endif
