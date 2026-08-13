#ifndef UE4SS_SDK_W_GameSetup_MapPlayerPoint_HPP
#define UE4SS_SDK_W_GameSetup_MapPlayerPoint_HPP

class UW_GameSetup_MapPlayerPoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* ScaleAnim;                                                // 0x02D8 (size: 0x8)
    class UWidgetAnimation* SelectedAnim;                                             // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PressedAnim;                                              // 0x02E8 (size: 0x8)
    class UWidgetAnimation* HoveredAnim;                                              // 0x02F0 (size: 0x8)
    class UWidgetAnimation* ShowAnim;                                                 // 0x02F8 (size: 0x8)
    class UImage* Background;                                                         // 0x0300 (size: 0x8)
    class UBorder* borderContainer;                                                   // 0x0308 (size: 0x8)
    class UImage* coatOfArms;                                                         // 0x0310 (size: 0x8)
    class URetainerBox* CoatOfArmsRetainer;                                           // 0x0318 (size: 0x8)
    class UNaviUi* NaviUi;                                                            // 0x0320 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x0328 (size: 0x8)
    class UImage* PointState;                                                         // 0x0330 (size: 0x8)
    class UmainMenu_GameSetup_C* OwnerWidget;                                         // 0x0338 (size: 0x8)
    FVillageSpawnerData villageSpawnData;                                             // 0x0340 (size: 0xE0)
    int32 PlayerIndex;                                                                // 0x0420 (size: 0x4)
    class UMaterialInterface* RevealMaterial;                                         // 0x0428 (size: 0x8)
    class UUserWidget* ActiveToolTip;                                                 // 0x0430 (size: 0x8)
    bool Hovered;                                                                     // 0x0438 (size: 0x1)
    bool Pressed;                                                                     // 0x0439 (size: 0x1)
    bool Highlight;                                                                   // 0x043A (size: 0x1)
    FSlateColor PlayerTintColor;                                                      // 0x043C (size: 0x14)
    FSlateColor EnemyTintColor;                                                       // 0x0450 (size: 0x14)

    ENaviHandleMethod HandleControllerInput(ENaviUiIntent Key);
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void UpdateCoat();
    void SetSpotButtonState(bool State, class UWidgetAnimation* Animation);
    void HighlightAsAvailable(bool Highlight);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    bool IsPlayer();
    void SetPlayerOrAISpot();
    void SetEmptySpot();
    void GetRowNameFromPlayerIndex(FString& RowName);
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void IsSpotEmpty(bool& IsEmtpy);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void UpdatePawnIndex();
    void onStartLocationChanged();
    void Destruct();
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void InitToolTip(class UUserWidget* InToolTip);
    void updateTooltip();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ResetToolTip(class UUserWidget* InToolTip);
    void Construct();
    void BndEvt__W_GameSetup_MapPlayerPoint_NaviUi_K2Node_ComponentBoundEvent_0_OnFocusChange__DelegateSignature(bool HasFocus);
    void ExecuteUbergraph_W_GameSetup_MapPlayerPoint(int32 EntryPoint);
}; // Size: 0x464

#endif
