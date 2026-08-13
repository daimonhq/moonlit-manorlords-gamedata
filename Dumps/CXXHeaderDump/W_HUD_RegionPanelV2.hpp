#ifndef UE4SS_SDK_W_HUD_RegionPanelV2_HPP
#define UE4SS_SDK_W_HUD_RegionPanelV2_HPP

class UW_HUD_RegionPanelV2_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UWidgetAnimation* ShowAnim;                                                 // 0x0370 (size: 0x8)
    class UVerticalBox* VB;                                                           // 0x0378 (size: 0x8)
    class UW_HUD_ProblemPanelV2_C* W_HUD_ProblemPanelV2;                              // 0x0380 (size: 0x8)
    class UW_HUD_RegionName_C* W_HUD_Region;                                          // 0x0388 (size: 0x8)
    class UW_HUD_RegionGoodPanel_C* W_HUD_RegionGoodPanel;                            // 0x0390 (size: 0x8)
    class UW_HUD_RegionStats_Left_C* W_HUD_RegionStats_Left;                          // 0x0398 (size: 0x8)
    class UW_HUD_RegionStats_Right_C* W_HUD_RegionStats_Right;                        // 0x03A0 (size: 0x8)

    void OnMapViewChanged();
    void updateRegionDetails();
    FNaviSubGridLayout ComputeSubGridLayout();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_HUD_RegionPanelV2(int32 EntryPoint);
}; // Size: 0x3A8

#endif
