#ifndef UE4SS_SDK_workerAssignment_HPP
#define UE4SS_SDK_workerAssignment_HPP

class UworkerAssignment_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UW_LegacyButton_C* AddWorkerButton;                                         // 0x0370 (size: 0x8)
    class UW_LegacyButton_C* RemoveWorkerButton;                                      // 0x0378 (size: 0x8)
    class UUniformGridPanel* workerSlots_Grid;                                        // 0x0380 (size: 0x8)
    FworkerAssignment_CChangeActiveWorkers changeActiveWorkers;                       // 0x0388 (size: 0x10)
    void changeActiveWorkers(int32 amt);

    FNaviSubGridLayout ComputeSubGridLayout();
    void updateActiveWorkers(TArray<class ASMUnit*>& workers);
    void Construct();
    void BndEvt__workerAssignment_AddWorkerButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__workerAssignment_RemoveWorkerButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__workerAssignment_AddWorkerButton_K2Node_ComponentBoundEvent_4_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__workerAssignment_RemoveWorkerButton_K2Node_ComponentBoundEvent_5_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void ExecuteUbergraph_workerAssignment(int32 EntryPoint);
    void changeActiveWorkers__DelegateSignature(int32 amt);
}; // Size: 0x398

#endif
