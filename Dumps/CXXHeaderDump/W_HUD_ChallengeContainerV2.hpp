#ifndef UE4SS_SDK_W_HUD_ChallengeContainerV2_HPP
#define UE4SS_SDK_W_HUD_ChallengeContainerV2_HPP

class UW_HUD_ChallengeContainerV2_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UVerticalBox* VB;                                                           // 0x0370 (size: 0x8)
    int32 PreviewChallengeCount;                                                      // 0x0378 (size: 0x4)
    FMargin EntryPadding;                                                             // 0x037C (size: 0x10)

    class UW_HUD_ChallengeV2_C* CreateChallengeWidget();
    TArray<FChallenge> GetChallenges();
    FNaviSubGridLayout ComputeSubGridLayout();
    void getWidgetForChallenge(FChallenge Challenge, TArray<class UWidget*>& challengeWidgets, class UWidget*& challengeWidget);
    void IsChallengeRelevant(TArray<FChallenge>& relevantChallenges, FChallenge& challengeToCheck, bool& relevant, FChallenge& Value);
    void UpdateChallengeList();
    void Construct();
    void OnClaimUpdateRequested_Event();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_HUD_ChallengeContainerV2(int32 EntryPoint);
}; // Size: 0x38C

#endif
