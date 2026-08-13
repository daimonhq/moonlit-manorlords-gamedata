#ifndef UE4SS_SDK_FamilyMember_HPP
#define UE4SS_SDK_FamilyMember_HPP

class UFamilyMember_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UEditableText* EditableName;                                                // 0x02D8 (size: 0x8)
    class UHorizontalBox* hb_status;                                                  // 0x02E0 (size: 0x8)
    class UMD_NaviHijackProxy_C* navi_nameEdit;                                       // 0x02E8 (size: 0x8)
    class UMD_NaviAutoTooltip_C* navi_TooltipStatus;                                  // 0x02F0 (size: 0x8)
    class UW_LegacyButton_C* PersonButton;                                            // 0x02F8 (size: 0x8)
    class UTextBlock* task_txt;                                                       // 0x0300 (size: 0x8)
    class ASMUnit* Person;                                                            // 0x0308 (size: 0x8)
    FString statusText;                                                               // 0x0310 (size: 0x10)
    bool widgetSpawnComplete;                                                         // 0x0320 (size: 0x1)
    EUnitRole currentUnitRole;                                                        // 0x0321 (size: 0x1)
    FString LastShownStatusText;                                                      // 0x0328 (size: 0x10)

    void SetStatusVisible(bool IsVisible);
    void UpdateRoleImage(EUnitRole Role);
    void updateContents();
    void BndEvt__PersonEntry_EditableName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void updateDetailsThatCouldHaveChanged();
    void BndEvt__FamilyMember_navi_nameEdit_K2Node_ComponentBoundEvent_0_HijackedHandleInput__DelegateSignature(ENaviUiIntent intent);
    void BndEvt__FamilyMember_EditableName_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__FamilyMember_PersonButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__FamilyMember_PersonButton_K2Node_ComponentBoundEvent_5_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void ExecuteUbergraph_FamilyMember(int32 EntryPoint);
}; // Size: 0x338

#endif
