#ifndef UE4SS_SDK_castleFloater_platformLevel_HPP
#define UE4SS_SDK_castleFloater_platformLevel_HPP

class UcastleFloater_platformLevel_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UButton* Button_levelDown_1;                                                // 0x0370 (size: 0x8)
    class UButton* Button_levelUp_1;                                                  // 0x0378 (size: 0x8)
    class UImage* Image;                                                              // 0x0380 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0388 (size: 0x8)
    class UImage* Image_81;                                                           // 0x0390 (size: 0x8)
    class UTextBlock* lvTxt_1;                                                        // 0x0398 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_down;                                            // 0x03A0 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_up;                                              // 0x03A8 (size: 0x8)
    class UHorizontalBox* platformLevel_HB;                                           // 0x03B0 (size: 0x8)
    FcastleFloater_platformLevel_CPlatformLevelChange platformLevelChange;            // 0x03B8 (size: 0x10)
    void platformLevelChange(int32 change);

    FNaviSubGridLayout ComputeSubGridLayout();
    void BndEvt__castleFloater_platformLevel_Button_levelUp_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__castleFloater_platformLevel_Button_levelDown_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_castleFloater_platformLevel(int32 EntryPoint);
    void platformLevelChange__DelegateSignature(int32 change);
}; // Size: 0x3C8

#endif
