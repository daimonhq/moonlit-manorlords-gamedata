#ifndef UE4SS_SDK_FamilyEntry_HPP
#define UE4SS_SDK_FamilyEntry_HPP

class UFamilyEntry_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0370 (size: 0x8)
    class UTextBlock* action_txt;                                                     // 0x0378 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0380 (size: 0x8)
    class UMD_NaviAutoTooltip_C* ConsumptionFood_NaviTooltip;                         // 0x0388 (size: 0x8)
    class UOverlay* ConsumptionFood_TooltipOverlay;                                   // 0x0390 (size: 0x8)
    class UVerticalBox* ConsumptionIcon_VB;                                           // 0x0398 (size: 0x8)
    class UImage* consumptionImg;                                                     // 0x03A0 (size: 0x8)
    class UVerticalBox* familyMembers_VB;                                             // 0x03A8 (size: 0x8)
    class UHorizontalBox* FamilyWidgetsBox;                                           // 0x03B0 (size: 0x8)
    class UButton* HomeButton;                                                        // 0x03B8 (size: 0x8)
    class UImage* Image_54;                                                           // 0x03C0 (size: 0x8)
    class UImage* Image_64;                                                           // 0x03C8 (size: 0x8)
    class UTextBlock* job_text;                                                       // 0x03D0 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_Home;                                         // 0x03D8 (size: 0x8)
    class UW_LegacyButton_C* ReassignButton;                                          // 0x03E0 (size: 0x8)
    class UW_LegacyButton_C* WorkplaceButton;                                         // 0x03E8 (size: 0x8)
    bool isWorkplace;                                                                 // 0x03F0 (size: 0x1)
    bool shouldUpdateByTimer;                                                         // 0x03F1 (size: 0x1)
    FWorkerFamily WorkerFamily;                                                       // 0x03F8 (size: 0x50)
    FFamilyEntry_COnWantScrollIntoView OnWantScrollIntoView;                          // 0x0448 (size: 0x10)
    void OnWantScrollIntoView(class UFamilyEntry_C* ThisWidget);
    int32 WorkerFamilyIndex;                                                          // 0x0458 (size: 0x4)
    class ARegion* Region;                                                            // 0x0460 (size: 0x8)

    void UpdateReassignmentButtonVisibility();
    void SpawnOrUpdateConsumptionTooltip(class ARegion* Region);
    void OnChildNaviBtnFocusChange(bool HasFocus);
    FNaviSubGridLayout ComputeSubGridLayout();
    void setFamilyBeingAssignedMaterialHighlight(bool isBeingAssigned);
    bool notProSoldier(class ASMUnit* Target);
    void Construct();
    void updateContents();
    void BndEvt__PersonEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void updateDetailsThatCouldHaveChanged();
    void BndEvt__FamilyEntry_ReassignButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__FamilyEntry_ReassignButton_K2Node_ComponentBoundEvent_4_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__FamilyEntry_WorkplaceButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__FamilyEntry_WorkplaceButton_K2Node_ComponentBoundEvent_8_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void Destruct();
    void ExecuteUbergraph_FamilyEntry(int32 EntryPoint);
    void OnWantScrollIntoView__DelegateSignature(class UFamilyEntry_C* ThisWidget);
}; // Size: 0x468

#endif
