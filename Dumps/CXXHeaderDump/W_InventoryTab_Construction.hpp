#ifndef UE4SS_SDK_W_InventoryTab_Construction_HPP
#define UE4SS_SDK_W_InventoryTab_Construction_HPP

class UW_InventoryTab_Construction_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UconstructionGoodsWidget_C* constructionGoodsWidget;                        // 0x0390 (size: 0x8)
    class UPlusMinus_C* constructionPriorityPlusMinus;                                // 0x0398 (size: 0x8)
    class UVerticalBox* VB;                                                           // 0x03A0 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void BndEvt__W_InventoryTab_Construction_constructionPriorityPlusMinus_K2Node_ComponentBoundEvent_0_priorityChanged__DelegateSignature(int32 change);
    void BP_OnInit();
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_Construction(int32 EntryPoint);
}; // Size: 0x3A8

#endif
