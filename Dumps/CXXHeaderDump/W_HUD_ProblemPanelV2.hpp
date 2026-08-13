#ifndef UE4SS_SDK_W_HUD_ProblemPanelV2_HPP
#define UE4SS_SDK_W_HUD_ProblemPanelV2_HPP

class UW_HUD_ProblemPanelV2_C : public UMLRegionProblemContainerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void Update();
    void Construct();
    void ExecuteUbergraph_W_HUD_ProblemPanelV2(int32 EntryPoint);
}; // Size: 0x3E0

#endif
