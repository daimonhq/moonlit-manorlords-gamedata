#ifndef UE4SS_SDK_ControlTooltipPanel_HPP
#define UE4SS_SDK_ControlTooltipPanel_HPP

class UControlTooltipPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UHorizontalBox* residential_HB;                                             // 0x02D8 (size: 0x8)
    class UVerticalBox* tips_VB;                                                      // 0x02E0 (size: 0x8)
    class UHorizontalBox* ToolTipGroup_CameraMovement;                                // 0x02E8 (size: 0x8)
    class UHorizontalBox* ToolTipGroup_Construction;                                  // 0x02F0 (size: 0x8)
    class UHorizontalBox* ToolTipGroup_Home;                                          // 0x02F8 (size: 0x8)
    class UHorizontalBox* ToolTipGroup_Plot;                                          // 0x0300 (size: 0x8)
    class UHorizontalBox* ToolTipGroup_Road;                                          // 0x0308 (size: 0x8)
    class UHorizontalBox* ToolTipGroup_WorkArea;                                      // 0x0310 (size: 0x8)
    class UBorder* tt_cameraMovement;                                                 // 0x0318 (size: 0x8)
    class UBorder* tt_construction;                                                   // 0x0320 (size: 0x8)
    class UBorder* tt_fields;                                                         // 0x0328 (size: 0x8)
    class UBorder* tt_home;                                                           // 0x0330 (size: 0x8)
    class UBorder* tt_roads;                                                          // 0x0338 (size: 0x8)
    class UBorder* tt_workArea;                                                       // 0x0340 (size: 0x8)
    double Delta;                                                                     // 0x0348 (size: 0x8)
    bool shouldbeVisible;                                                             // 0x0350 (size: 0x1)
    bool fadingIn;                                                                    // 0x0351 (size: 0x1)
    class AMyPawnCPP_BP3_C* Pawn;                                                     // 0x0358 (size: 0x8)
    class UMainUICPP_C* Main UI;                                                      // 0x0360 (size: 0x8)

    void tooltip_WorkArea(class APawnCPP* Pawn);
    void tooltip_Area(class APawnCPP* Pawn);
    void tooltip_Home(class APawnCPP* Pawn);
    void tooltip_roads(class AMyPawnCPP_BP3_C* PlayerPawn);
    void fadeTooltipComponent(class UWidget* ToolTip, bool show);
    void tooltip_buildingPlacement(class AMyPawnCPP_BP3_C* PlayerPawn);
    void tooltip_cameraMovement(class AMyPawnCPP_BP3_C* PlayerPawn);
    void globalFade();
    void Construct();
    void updateLoop();
    void ExecuteUbergraph_ControlTooltipPanel(int32 EntryPoint);
}; // Size: 0x368

#endif
