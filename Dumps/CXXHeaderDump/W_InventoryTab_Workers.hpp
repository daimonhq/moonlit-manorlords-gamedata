#ifndef UE4SS_SDK_W_InventoryTab_Workers_HPP
#define UE4SS_SDK_W_InventoryTab_Workers_HPP

class UW_InventoryTab_Workers_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UW_Inventory_WorkerGrid_C* ActiveWorkerGrid;                                // 0x0390 (size: 0x8)
    class UW_Inventory_WorkerGrid_C* Autumn;                                          // 0x0398 (size: 0x8)
    class UImage* CurrentSeasonBG;                                                    // 0x03A0 (size: 0x8)
    class UGridPanel* GridPanel;                                                      // 0x03A8 (size: 0x8)
    class UW_CheckboxButton_C* ShowSeasonalCheckbox;                                  // 0x03B0 (size: 0x8)
    class UW_Inventory_WorkerGrid_C* Spring;                                          // 0x03B8 (size: 0x8)
    class UW_Inventory_WorkerGrid_C* Summer;                                          // 0x03C0 (size: 0x8)
    class UW_Inventory_WorkerGrid_C* Winter;                                          // 0x03C8 (size: 0x8)
    TMap<class ESeason, class UW_Inventory_WorkerGrid_C*> SeasonGridMap;              // 0x03D0 (size: 0x50)
    bool SeasonalAssignmentActive;                                                    // 0x0420 (size: 0x1)
    bool HasSeasonalAssignment;                                                       // 0x0421 (size: 0x1)

    void UpdateHighlightedSeasonRow();
    void UpdateGridVisibility();
    void OnSeasonalWorkerRemoved(ESeason Season);
    void OnSeasonalWorkerAdded(ESeason Season);
    void OnWorkerRemoved();
    void OnWorkerAdded();
    void InitWorkerGrid();
    FNaviSubGridLayout ComputeSubGridLayout();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void updateWorkerSlots();
    void BP_OnInit();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_InventoryTab_Workers_ShowSeasonal_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_InventoryTab_Workers_ShowSeasonal_K2Node_ComponentBoundEvent_1_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void ExecuteUbergraph_W_InventoryTab_Workers(int32 EntryPoint);
}; // Size: 0x422

#endif
