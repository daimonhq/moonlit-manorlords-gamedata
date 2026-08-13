#ifndef UE4SS_SDK_W_InventoryTab_People_HPP
#define UE4SS_SDK_W_InventoryTab_People_HPP

class UW_InventoryTab_People_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0390 (size: 0x8)
    class UHorizontalBox* occupantNum_HB;                                             // 0x0398 (size: 0x8)
    class UTextBlock* occupants;                                                      // 0x03A0 (size: 0x8)
    class UVerticalBox* PeopleList_VB;                                                // 0x03A8 (size: 0x8)
    class UScrollBox* PeopleListScrollBox;                                            // 0x03B0 (size: 0x8)
    class UVerticalBox* PeopleSection_VB;                                             // 0x03B8 (size: 0x8)
    class USizeBox* popList_SB;                                                       // 0x03C0 (size: 0x8)
    class UTimeAllocationTrackerWidget_C* TimeAllocationTrackerWidget;                // 0x03C8 (size: 0x8)

    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void ScrollIntoView2(class UFamilyEntry_C* ThisWidget);
    void ScrollIntoView(bool HasFocus);
    FNaviSubGridLayout ComputeSubGridLayout();
    void MakeWorkerFamilyFromRetinue(class ASMBuildingMaster* building, TArray<FWorkerFamily>& retinue);
    void UpdatePeopleList();
    void getStallOwnerFamily(class ASMBuildingMaster* InBuilding, FWorkerFamily& ownerFamily, int32& ownerFamilyIndex);
    void ShouldUpdatePeopleList(bool& Result);
    void UpdateTracker();
    void BP_Update();
    void BP_OnInit();
    void OnWorkerFamilyRemoved(const int32 RemovedFamilyID);
    void ExecuteUbergraph_W_InventoryTab_People(int32 EntryPoint);
}; // Size: 0x3D0

#endif
