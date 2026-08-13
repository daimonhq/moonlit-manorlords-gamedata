#ifndef UE4SS_SDK_Widget_Affinity_HPP
#define UE4SS_SDK_Widget_Affinity_HPP

class UWidget_Affinity_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* AffinityIcon_Img;                                                   // 0x02D8 (size: 0x8)
    class UBorder* Border;                                                            // 0x02E0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip;                                  // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x02F0 (size: 0x8)
    class UOverlay* TooltipRoot;                                                      // 0x02F8 (size: 0x8)
    bool ShowName;                                                                    // 0x0300 (size: 0x1)
    EAffinityType Affinity;                                                           // 0x0301 (size: 0x1)
    class ARegion* Region;                                                            // 0x0308 (size: 0x8)
    FText BigToolTipHeader;                                                           // 0x0310 (size: 0x10)
    FText BigToolTipDescr;                                                            // 0x0320 (size: 0x10)

    void GetAffinityEnvironmentColor_Experimental(class ARegion* Region, FLinearColor& Color);
    void Construct();
    void ResetToolTip(class UUserWidget* InToolTip);
    void InitToolTip(class UUserWidget* InToolTip);
    void ExecuteUbergraph_Widget_Affinity(int32 EntryPoint);
}; // Size: 0x330

#endif
