#ifndef UE4SS_SDK_W_HUD_BuildingCategorySelector_HPP
#define UE4SS_SDK_W_HUD_BuildingCategorySelector_HPP

class UW_HUD_BuildingCategorySelector_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UW_HUD_BuildingCategoryButton_C* Category_Gathering;                        // 0x0370 (size: 0x8)
    class UHorizontalBox* CategoryHB;                                                 // 0x0378 (size: 0x8)
    class UW_CheckboxButton_C* SnapToRoadCheckbox;                                    // 0x0380 (size: 0x8)
    class UUserWidget* SelectedCategoryWidget;                                        // 0x0388 (size: 0x8)
    TMap<class EBuildingCategory, class UUserWidget*> CategoryWidgets;                // 0x0390 (size: 0x50)

    bool HandleTabShift(int32 tabDelta);
    FNaviSubGridLayout ComputeSubGridLayout();
    void OnSelectedCategoryChanged();
    void OnCategoryWidgetClicked(class UW_MaterialButton_C* MyWidget);
    void InitCategories();
    void Construct();
    void BndEvt__W_HUD_BuildingPanel_W_CheckboxButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void ExecuteUbergraph_W_HUD_BuildingCategorySelector(int32 EntryPoint);
}; // Size: 0x3E0

#endif
