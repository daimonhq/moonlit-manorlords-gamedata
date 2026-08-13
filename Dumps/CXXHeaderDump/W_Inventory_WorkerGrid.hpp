#ifndef UE4SS_SDK_W_Inventory_WorkerGrid_HPP
#define UE4SS_SDK_W_Inventory_WorkerGrid_HPP

class UW_Inventory_WorkerGrid_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UWidgetAnimation* RemoveWorkerAnim;                                         // 0x0370 (size: 0x8)
    class UWidgetAnimation* AddWorkerAnim;                                            // 0x0378 (size: 0x8)
    class UW_LegacyButton_C* AddWorkerButton;                                         // 0x0380 (size: 0x8)
    class UW_LegacyButton_C* RemoveWorkerButton;                                      // 0x0388 (size: 0x8)
    class UCommonVisualAttachment* SeasonCWU;                                         // 0x0390 (size: 0x8)
    class UCommonLazyImage* SeasonImg;                                                // 0x0398 (size: 0x8)
    class UUniformGridPanel* workerSlots_Grid;                                        // 0x03A0 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x03A8 (size: 0x8)
    bool bSeasonal;                                                                   // 0x03B0 (size: 0x1)
    ESeason PreviewSeason;                                                            // 0x03B1 (size: 0x1)
    int32 PreviewCount;                                                               // 0x03B4 (size: 0x4)
    TArray<TSoftObjectPtr<UTexture2D>> SeasonTextures;                                // 0x03B8 (size: 0x10)
    FSlateBrush Filled;                                                               // 0x03D0 (size: 0xB0)
    FSlateBrush Searching;                                                            // 0x0480 (size: 0xB0)
    FSlateBrush Empty;                                                                // 0x0530 (size: 0xB0)
    FVector2D ButtonSizeDefault;                                                      // 0x05E0 (size: 0x10)
    FVector2D ButtonSizeSeasonal;                                                     // 0x05F0 (size: 0x10)

    bool IsRemoveButtonEnabled();
    bool IsAddButtonEnabled();
    FVector2D GetButtonSize();
    void InitSeasonImage();
    void UpdateSeasonImage();
    FNaviSubGridLayout ComputeSubGridLayout();
    void GetWorkerFamily(int32 SlotIndex, FWorkerFamily& Result);
    void PlayWorkerAnim();
    void NotifyWorkerCountChanged(bool Added);
    void GetWorkerSlotStyle(int32 SlotIndex, FGameplayTag& Result, FSlateBrush& Brush);
    void updateWorkerSlots();
    void InitWorkerSlots(int32 count);
    void SetupToolTipFromInputSetting(class UUserWidget* ToolTip, FName RowName, const FName InActionName);
    void SetupButtonToolTips();
    void ResetToolTip(class UUserWidget* InToolTip);
    void BndEvt__W_Inventory_WorkerGrid_AddWorkerButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_Inventory_WorkerGrid_RemoveWorkerButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_InventoryTab_Workers_AddWorkerButton_K2Node_ComponentBoundEvent_1_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_InventoryTab_Workers_RemoveWorkerButton_K2Node_ComponentBoundEvent_2_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void InitToolTip(class UUserWidget* InToolTip);
    void SetBuilding(class ASMBuildingMaster* building);
    void ExecuteUbergraph_W_Inventory_WorkerGrid(int32 EntryPoint);
}; // Size: 0x600

#endif
