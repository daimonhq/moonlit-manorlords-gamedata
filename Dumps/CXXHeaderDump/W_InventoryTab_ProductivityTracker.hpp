#ifndef UE4SS_SDK_W_InventoryTab_ProductivityTracker_HPP
#define UE4SS_SDK_W_InventoryTab_ProductivityTracker_HPP

class UW_InventoryTab_ProductivityTracker_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UProductivityTrackerWidget_C* ProductivityTrackerWidget;                    // 0x0390 (size: 0x8)
    bool ShouldDisplayTracker;                                                        // 0x0398 (size: 0x1)

    FNaviSubGridLayout ComputeSubGridLayout();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BP_OnInit();
    void BP_Update();
    void OnNewProduction();
    void OnNewTime();
    void ExecuteUbergraph_W_InventoryTab_ProductivityTracker(int32 EntryPoint);
}; // Size: 0x399

#endif
