#ifndef UE4SS_SDK_W_HUD_ArmyRecruitPanel_HPP
#define UE4SS_SDK_W_HUD_ArmyRecruitPanel_HPP

class UW_HUD_ArmyRecruitPanel_C : public UNaviSubGrid
{
    class UHorizontalBox* HB;                                                         // 0x0368 (size: 0x8)
    class UW_HUD_ArmyRecruitCardV2_C* Recruit_Foot;                                   // 0x0370 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
}; // Size: 0x378

#endif
