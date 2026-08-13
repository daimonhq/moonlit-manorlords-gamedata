#ifndef UE4SS_SDK_castleFloater_HPP
#define UE4SS_SDK_castleFloater_HPP

class UcastleFloater_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UImage* bldType;                                                            // 0x0370 (size: 0x8)
    class UHorizontalBox* buildingCost_HB;                                            // 0x0378 (size: 0x8)
    class UButton* Button_demo;                                                       // 0x0380 (size: 0x8)
    class UButton* Button_flip;                                                       // 0x0388 (size: 0x8)
    class UButton* Button_levelDown;                                                  // 0x0390 (size: 0x8)
    class UButton* Button_levelUp;                                                    // 0x0398 (size: 0x8)
    class UImage* Image;                                                              // 0x03A0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x03A8 (size: 0x8)
    class UImage* Image_221;                                                          // 0x03B0 (size: 0x8)
    class UImage* Image_308;                                                          // 0x03B8 (size: 0x8)
    class UTextBlock* lvTxt;                                                          // 0x03C0 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_destroy;                                         // 0x03C8 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_down;                                            // 0x03D0 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_flip;                                            // 0x03D8 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_up;                                              // 0x03E0 (size: 0x8)
    class UNamedSlot* platformLevelSlot;                                              // 0x03E8 (size: 0x8)
    class UImage* spacerImg;                                                          // 0x03F0 (size: 0x8)
    class AActor* Actor;                                                              // 0x03F8 (size: 0x8)
    class UcastleFloater_platformLevel_C* PlatformLevelWidget;                        // 0x0400 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void listConstructionGoods(class ASMBuildingMaster* building, TArray<FGood>& Array);
    void changePlatformLevel(int32 change);
    void setIconImageToBuildingType();
    void changeUpgradeLevel(int32 levelChange);
    void updateContents();
    FVector2D scaleByDPI_IThink(FVector2D A);
    void updatePositionInViewport();
    void Construct();
    void BndEvt__castleFloater_Button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__castleFloater_Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__castleFloater_Button_demo_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__castleFloater_Button_flip_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_castleFloater(int32 EntryPoint);
}; // Size: 0x408

#endif
