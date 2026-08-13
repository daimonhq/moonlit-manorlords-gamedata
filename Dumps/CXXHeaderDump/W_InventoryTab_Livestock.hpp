#ifndef UE4SS_SDK_W_InventoryTab_Livestock_HPP
#define UE4SS_SDK_W_InventoryTab_Livestock_HPP

class UW_InventoryTab_Livestock_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UVerticalBox* livestockList_vb;                                             // 0x0390 (size: 0x8)
    class UScrollBox* livestockScrollbox;                                             // 0x0398 (size: 0x8)
    class UVerticalBox* VB;                                                           // 0x03A0 (size: 0x8)
    class UworkerAssignment_C* workerAssignment;                                      // 0x03A8 (size: 0x8)

    void GetLivestock(TSet<ASMUnit*>& Return Value);
    void ShouldUpdateAnimalsList(bool& Value);
    void ScrollIntoView(bool HasFocus);
    FNaviSubGridLayout ComputeSubGridLayout();
    void UpdateAnimals();
    void BndEvt__W_InventoryTab_Livestock_workerAssignment_K2Node_ComponentBoundEvent_0_changeActiveWorkers__DelegateSignature(int32 amt);
    void BP_OnInit();
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_Livestock(int32 EntryPoint);
}; // Size: 0x3B0

#endif
