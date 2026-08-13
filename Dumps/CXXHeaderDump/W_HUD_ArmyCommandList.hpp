#ifndef UE4SS_SDK_W_HUD_ArmyCommandList_HPP
#define UE4SS_SDK_W_HUD_ArmyCommandList_HPP

class UW_HUD_ArmyCommandList_C : public UMLArmyCommandWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UImage* BarBG;                                                              // 0x0418 (size: 0x8)
    class UHorizontalBox* HB;                                                         // 0x0420 (size: 0x8)
    class UHorizontalBox* RalliedHB;                                                  // 0x0428 (size: 0x8)
    class UW_HUD_ArmySkillButtonV2_C* Skill_CustomizeRetinue;                         // 0x0430 (size: 0x8)
    class UW_HUD_ArmySkillButtonV2_C* Skill_Disband;                                  // 0x0438 (size: 0x8)
    class UW_HUD_ArmyCommandButton_Base_C* Skill_FriendlyFire;                        // 0x0440 (size: 0x8)
    class UW_HUD_ArmySkillButtonV2_C* Skill_Halt;                                     // 0x0448 (size: 0x8)
    class UW_HUD_ArmySkillButtonV2_C* skill_ladder;                                   // 0x0450 (size: 0x8)
    class UW_HUD_ArmySkillButtonV2_C* Skill_Rally;                                    // 0x0458 (size: 0x8)
    class UW_HUD_ArmySkillButtonV2_C* Skill_ReleaseAtWill;                            // 0x0460 (size: 0x8)
    class UW_HUD_ArmySkillButtonV2_C* Skill_RemoveUnit;                               // 0x0468 (size: 0x8)
    class UW_HUD_ArmySkillButtonV2_C* Skill_ShieldWall;                               // 0x0470 (size: 0x8)
    class UW_HUD_ArmySkillButtonV2_C* Skill_SpreadOut;                                // 0x0478 (size: 0x8)
    class UW_HUD_ArmySkillButtonV2_C* Skill_ToggleSprint;                             // 0x0480 (size: 0x8)
    class UW_HUD_ArmyStanceButtonV2_C* stance_balanced;                               // 0x0488 (size: 0x8)
    class UW_HUD_ArmyStanceButtonV2_C* stance_giveGround;                             // 0x0490 (size: 0x8)
    class UW_HUD_ArmyStanceButtonV2_C* Stance_MissileAlert;                           // 0x0498 (size: 0x8)
    class UW_HUD_ArmyStanceButtonV2_C* Stance_PushForward;                            // 0x04A0 (size: 0x8)
    class UW_HUD_ArmyStanceButtonV2_C* stance_standGround;                            // 0x04A8 (size: 0x8)
    class UHorizontalBox* StanceHB;                                                   // 0x04B0 (size: 0x8)
    TArray<class UWidget*> StanceWidgets;                                             // 0x04B8 (size: 0x10)
    TArray<class UWidget*> SkillWidgets;                                              // 0x04C8 (size: 0x10)
    bool friendlyFireOn;                                                              // 0x04D8 (size: 0x1)

    void BP_UpdateEntries();
    FNaviSubGridLayout ComputeSubGridLayout();
    void OnInitialized();
    void BndEvt__W_HUD_ArmyCommandList_Skill_FriendlyFire_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void ExecuteUbergraph_W_HUD_ArmyCommandList(int32 EntryPoint);
}; // Size: 0x4D9

#endif
