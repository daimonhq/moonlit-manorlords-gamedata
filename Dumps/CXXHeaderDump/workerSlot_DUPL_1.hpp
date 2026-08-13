#ifndef UE4SS_SDK_workerSlot_DUPL_1_HPP
#define UE4SS_SDK_workerSlot_DUPL_1_HPP

class UworkerSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x02D8 (size: 0x8)
    class UImage* Head;                                                               // 0x02E0 (size: 0x8)
    class UImage* Image_29;                                                           // 0x02E8 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x02F0 (size: 0x8)
    class UButton* StallButton;                                                       // 0x02F8 (size: 0x8)
    class ASMUnit* Worker;                                                            // 0x0300 (size: 0x8)
    class UHorizontalBox* daddy_HB;                                                   // 0x0308 (size: 0x8)
    int32 ID;                                                                         // 0x0310 (size: 0x4)
    class UInventory_C* daddy_inventory;                                              // 0x0318 (size: 0x8)
    bool isLivestockAssignment;                                                       // 0x0320 (size: 0x1)
    FWorkerFamily WorkerFamily;                                                       // 0x0328 (size: 0x50)
    FSlateBrush DefaultBrush;                                                         // 0x0380 (size: 0xB0)

    bool isBuildingTabOpened(class AMyPawnCPP_BP3_C*& pawnCPPBP, class UObject*& building);
    class UWidget* GetToolTipWidget_0();
    void OpenAnim();
    void updateWorkerSlot();
    void ResetToolTip(class UUserWidget* InToolTip);
    void BndEvt__workerSlot_stallButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void InitToolTip(class UUserWidget* InToolTip);
    void ExecuteUbergraph_workerSlot(int32 EntryPoint);
}; // Size: 0x430

#endif
