#ifndef UE4SS_SDK_MD_NaviConsoleCursor_HPP
#define UE4SS_SDK_MD_NaviConsoleCursor_HPP

class UMD_NaviConsoleCursor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* InnerLayerLight;                                                    // 0x02D8 (size: 0x8)
    class UImage* OuterLayerLight;                                                    // 0x02E0 (size: 0x8)
    bool CanNeverAttack;                                                              // 0x02E8 (size: 0x1)
    bool LastShownAttackStatus;                                                       // 0x02E9 (size: 0x1)

    void SetShowAttacking(bool IsAttackingHover);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_MD_NaviConsoleCursor(int32 EntryPoint);
}; // Size: 0x2EA

#endif
