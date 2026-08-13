#ifndef UE4SS_SDK_W_HUD_BuildingPanel_HPP
#define UE4SS_SDK_W_HUD_BuildingPanel_HPP

class UW_HUD_BuildingPanel_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UImage* Bg;                                                                 // 0x0370 (size: 0x8)
    class UMLToolTipAnchor* ToolTipAnchor;                                            // 0x0378 (size: 0x8)
    class UW_HUD_BuildingCategorySelector_C* W_HUD_BuildingCategorySelector;          // 0x0380 (size: 0x8)
    class UW_HUD_BuildingContainer_C* W_HUD_BuildingContainer;                        // 0x0388 (size: 0x8)

    void UpdateBackgroundWidth(double DeltaTime);
    FNaviSubGridLayout ComputeSubGridLayout();
    void NotifyOpen();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_HUD_BuildingPanel(int32 EntryPoint);
}; // Size: 0x390

#endif
