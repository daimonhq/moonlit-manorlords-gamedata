#ifndef UE4SS_SDK_W_HUD_MercenaryCompanyV2_HPP
#define UE4SS_SDK_W_HUD_MercenaryCompanyV2_HPP

class UW_HUD_MercenaryCompanyV2_C : public UMLMercenaryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)
    class UImage* banner;                                                             // 0x02E0 (size: 0x8)
    class UMLNumericTextBlock* CostNumeric;                                           // 0x02E8 (size: 0x8)
    class UImage* Image_58;                                                           // 0x02F0 (size: 0x8)
    class UOverlay* OverlayVisible;                                                   // 0x02F8 (size: 0x8)
    class UMLNumericTextBlock* TimeNumeric;                                           // 0x0300 (size: 0x8)
    FMercenaryCompany MercenaryCompany;                                               // 0x0308 (size: 0x60)
    int32 costPerMonth;                                                               // 0x0368 (size: 0x4)
    int32 DaysLeft;                                                                   // 0x036C (size: 0x4)

    void GetToolTipText(int32 InDays, FText& Result);
    void ResetToolTip(class UUserWidget* InToolTip);
    void BP_Update(const FMercenaryCompany& InCompany);
    void BP_UpdatePaymentDate();
    void Construct();
    void InitToolTip(class UUserWidget* InToolTip);
    void ExecuteUbergraph_W_HUD_MercenaryCompanyV2(int32 EntryPoint);
}; // Size: 0x370

#endif
