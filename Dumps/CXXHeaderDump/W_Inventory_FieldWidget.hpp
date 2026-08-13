#ifndef UE4SS_SDK_W_Inventory_FieldWidget_HPP
#define UE4SS_SDK_W_Inventory_FieldWidget_HPP

class UW_Inventory_FieldWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UMLDefaultCheckbox_C* checkbox_cropRotation;                                // 0x0370 (size: 0x8)
    class UMLDefaultCheckbox_C* checkbox_forceHarvest;                                // 0x0378 (size: 0x8)
    class UComboBoxString* crop_options_secondYear;                                   // 0x0380 (size: 0x8)
    class UComboBoxString* crop_options_thirdYear;                                    // 0x0388 (size: 0x8)
    class UComboBoxString* crop_options_type;                                         // 0x0390 (size: 0x8)
    class UVerticalBox* cropRotationDetails_VB;                                       // 0x0398 (size: 0x8)
    class UHorizontalBox* croptype_Hb;                                                // 0x03A0 (size: 0x8)
    class UButton* erase_crop_button;                                                 // 0x03A8 (size: 0x8)
    class UBorder* field_priority_border;                                             // 0x03B0 (size: 0x8)
    class UTextBlock* field_workers_num;                                              // 0x03B8 (size: 0x8)
    class UVerticalBox* FieldDetails_VB;                                              // 0x03C0 (size: 0x8)
    class UGridPanel* fieldOperationModes;                                            // 0x03C8 (size: 0x8)
    class UHorizontalBox* fieldPriority_HB_1;                                         // 0x03D0 (size: 0x8)
    class UPlusMinus_C* fieldPriorityPlusMinus;                                       // 0x03D8 (size: 0x8)
    class URichTextBlock* fieldStatus;                                                // 0x03E0 (size: 0x8)
    class UVerticalBox* fieldStatus_VB;                                               // 0x03E8 (size: 0x8)
    class UHorizontalBox* forceHarvest_HB;                                            // 0x03F0 (size: 0x8)
    class UProgressBar* grow_progress;                                                // 0x03F8 (size: 0x8)
    class UProgressBar* harvest_progress_1;                                           // 0x0400 (size: 0x8)
    class UlocalizedTextBox_C* HarvestYield_LocalizedBox;                             // 0x0408 (size: 0x8)
    class UImage* Image_80;                                                           // 0x0410 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_79;                                 // 0x0418 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip;                                  // 0x0420 (size: 0x8)
    class UMD_NaviComboBoxWrapper_C* navi_CropTypeMain;                               // 0x0428 (size: 0x8)
    class UMD_NaviComboBoxWrapper_C* navi_CropTypeSecondYear;                         // 0x0430 (size: 0x8)
    class UMD_NaviComboBoxWrapper_C* navi_CropTypeThirdYear;                          // 0x0438 (size: 0x8)
    class URichTextBlock* nextHarvest_num_txt_1;                                      // 0x0440 (size: 0x8)
    class UImage* operation_grow_icon;                                                // 0x0448 (size: 0x8)
    class UImage* operation_harvest_icon;                                             // 0x0450 (size: 0x8)
    class UImage* operation_plough_icon;                                              // 0x0458 (size: 0x8)
    class UImage* operation_sow_icon;                                                 // 0x0460 (size: 0x8)
    class UProgressBar* plow_progress;                                                // 0x0468 (size: 0x8)
    class UHorizontalBox* predicted_harvest_hb;                                       // 0x0470 (size: 0x8)
    class UProgressBar* sow_progress_1;                                               // 0x0478 (size: 0x8)
    class UTextBlock* yield_num_txt;                                                  // 0x0480 (size: 0x8)
    class UInventory_C* ParentInventory;                                              // 0x0488 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0490 (size: 0x8)

    void InitCropOptions();
    FNaviSubGridLayout ComputeSubGridLayout();
    class UWidget* On_crop_options_GenerateWidget(FString Item);
    void updateFarmingTooltip(FText tooltipTxt, class UWidget* Widget);
    void updateFieldOperationButtons();
    void updateFieldCropProgress();
    void updateCropOptions();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BndEvt__Inventory_MLDefaultCheckbox_K2Node_ComponentBoundEvent_4_OnValueChange__DelegateSignature(bool IsChecked);
    void BndEvt__Inventory_checkbox_cropRotation_K2Node_ComponentBoundEvent_0_OnValueChange__DelegateSignature(bool IsChecked);
    void BndEvt__Inventory_crop_options_K2Node_ComponentBoundEvent_17_OnOpeningEvent__DelegateSignature();
    void BndEvt__Inventory_crop_options_1_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature();
    void BndEvt__Inventory_crop_options_2_K2Node_ComponentBoundEvent_6_OnOpeningEvent__DelegateSignature();
    void BndEvt__crop_options_K2Node_ComponentBoundEvent_24_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__erase_crop_button_K2Node_ComponentBoundEvent_25_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Inventory_navi_CropTypeMain_K2Node_ComponentBoundEvent_6_OnComboFinish__DelegateSignature();
    void BndEvt__Inventory_crop_options_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__Inventory_crop_options_2_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__Inventory_navi_CropTypeThirdYear_K2Node_ComponentBoundEvent_0_OnComboFinish__DelegateSignature();
    void BndEvt__Inventory_navi_CropTypeSecondYear_K2Node_ComponentBoundEvent_5_OnComboFinish__DelegateSignature();
    void BndEvt__Inventory_fieldPriorityPlusMinus_K2Node_ComponentBoundEvent_1_priorityChanged__DelegateSignature(int32 change);
    void UpdateField();
    void Construct();
    void ExecuteUbergraph_W_Inventory_FieldWidget(int32 EntryPoint);
}; // Size: 0x498

#endif
