#ifndef UE4SS_SDK_W_HUD_ArmyUnitCardV2_HPP
#define UE4SS_SDK_W_HUD_ArmyUnitCardV2_HPP

class UW_HUD_ArmyUnitCardV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* DragAnim;                                                 // 0x02D8 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x02E0 (size: 0x8)
    class UW_MaterialButton_C* Button;                                                // 0x02E8 (size: 0x8)
    class UW_HUD_ArmyControlGroupContainer_C* ControlGroupContainer;                  // 0x02F0 (size: 0x8)
    class UProgressBar* FatigueProgress;                                              // 0x02F8 (size: 0x8)
    class UImage* HoverFrame;                                                         // 0x0300 (size: 0x8)
    class UProgressBar* MoraleProgress;                                               // 0x0308 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x0310 (size: 0x8)
    class UOverlay* StatOverlay;                                                      // 0x0318 (size: 0x8)
    class UBorder* StatusBorder;                                                      // 0x0320 (size: 0x8)
    class UImage* StatusIcon;                                                         // 0x0328 (size: 0x8)
    class UMLToolTipAnchor* ToolTipAnchor;                                            // 0x0330 (size: 0x8)
    class UMLNumericTextBlock* unitCount;                                             // 0x0338 (size: 0x8)
    int32 squadID;                                                                    // 0x0340 (size: 0x4)
    FSquad UnitSquad;                                                                 // 0x0348 (size: 0x3E8)
    TMap<class FName, class TSoftObjectPtr<UTexture2D>> StatusIcons;                  // 0x0730 (size: 0x50)
    bool selectedByPlayer;                                                            // 0x0780 (size: 0x1)
    double LastPressedTime;                                                           // 0x0788 (size: 0x8)
    double DoubleClickTimeWindow;                                                     // 0x0790 (size: 0x8)
    FSlateColor DefaultCountColor;                                                    // 0x0798 (size: 0x14)
    FSlateColor BadCountColor;                                                        // 0x07AC (size: 0x14)
    bool PreviewRallied;                                                              // 0x07C0 (size: 0x1)
    int32 PreviewCurrentSize;                                                         // 0x07C4 (size: 0x4)
    int32 PreviewMaxSize;                                                             // 0x07C8 (size: 0x4)
    bool DragInProgress;                                                              // 0x07CC (size: 0x1)
    bool HoverFrameVisible;                                                           // 0x07CD (size: 0x1)
    bool ButtonHovered;                                                               // 0x07CE (size: 0x1)
    bool ButtonRMBHovered;                                                            // 0x07CF (size: 0x1)

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateHoverFrame();
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void TryRemoveMySquad();
    void SetIsDragged(bool isDragged);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    bool ShouldResetSelection();
    bool SquadHasUnits();
    void GetUnitCount(int32& CurrentSize, int32& maxSize);
    void CanRallyUnit(bool& Result);
    bool CanExecuteDoubleClick();
    void NavigateToSquad();
    void ToggleSquadSelection();
    void NavigateToUnits();
    void GetControlGroupText(TArray<int32>& Array, FString& Result);
    FSquad GetUnitSquad();
    void ToggleUnitSelection();
    void UpdateSelectedState();
    void UpdateProgressBars();
    void UpdateControlGroups();
    void UpdateUnitStatusIcon();
    void UpdateUnitIcon();
    void UpdateUnitCount();
    void UpdateCardDetails();
    void BndEvt__W_HUD_ArmyUnitCardV2_Button_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature(class UW_MaterialButton_C* MyWidget, bool Hovered);
    void BndEvt__W_HUD_ArmyUnitCardV2_Button_K2Node_ComponentBoundEvent_2_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_HUD_ArmyUnitCardV2_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void ExecuteUbergraph_W_HUD_ArmyUnitCardV2(int32 EntryPoint);
}; // Size: 0x7D0

#endif
