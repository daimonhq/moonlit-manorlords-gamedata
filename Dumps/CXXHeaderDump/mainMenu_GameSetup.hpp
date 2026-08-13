#ifndef UE4SS_SDK_mainMenu_GameSetup_HPP
#define UE4SS_SDK_mainMenu_GameSetup_HPP

class UmainMenu_GameSetup_C : public UMLGameSetupScreen
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UWidgetAnimation* HideContentAnim;                                          // 0x0390 (size: 0x8)
    class UWidgetAnimation* showMapAnim;                                              // 0x0398 (size: 0x8)
    class UWidgetAnimation* ShowContentAnim;                                          // 0x03A0 (size: 0x8)
    class UOverlay* BottomOverlay;                                                    // 0x03A8 (size: 0x8)
    class UGridPanel* economic_settings;                                              // 0x03B0 (size: 0x8)
    class UW_Menu_GameSetupSettingEntry_C* entry_aggressiveness;                      // 0x03B8 (size: 0x8)
    class UW_Menu_GameSetupSettingEntry_C* entry_ai;                                  // 0x03C0 (size: 0x8)
    class UW_Menu_GameSetupSettingEntry_C* entry_goals;                               // 0x03C8 (size: 0x8)
    class UW_Menu_GameSetupSettingEntry_C* entry_untilFirstRaid;                      // 0x03D0 (size: 0x8)
    class UW_Menu_HeaderBar_C* HeaderBar_Difficulty;                                  // 0x03D8 (size: 0x8)
    class UW_Menu_HeaderBar_C* HeaderBar_GamePreset;                                  // 0x03E0 (size: 0x8)
    class UOverlay* HeaderOverlay;                                                    // 0x03E8 (size: 0x8)
    class UHorizontalRadioSelect_C* HorizontalRadioSelect_Difficulty;                 // 0x03F0 (size: 0x8)
    class UOverlay* LeftOverlay;                                                      // 0x03F8 (size: 0x8)
    class UCommonLazyImage* mapParchment;                                             // 0x0400 (size: 0x8)
    class UCanvasPanel* MapParchmentBG;                                               // 0x0408 (size: 0x8)
    class UCanvasPanel* mapParchmentContainer;                                        // 0x0410 (size: 0x8)
    class UCanvasPanel* MapParchmentIcons;                                            // 0x0418 (size: 0x8)
    class UScaleBox* MapParchmentParent;                                              // 0x0420 (size: 0x8)
    class UW_MapSelectComboButton_C* MapSelectButton;                                 // 0x0428 (size: 0x8)
    class UVerticalBox* menu_Container;                                               // 0x0430 (size: 0x8)
    class UHorizontalBox* ModePresets;                                                // 0x0438 (size: 0x8)
    class UW_MenuButton_C* PlayButton;                                                // 0x0440 (size: 0x8)
    class UW_MenuButton_C* ReturnButton;                                              // 0x0448 (size: 0x8)
    class UOverlay* RightOverlay;                                                     // 0x0450 (size: 0x8)
    class UImage* SettingHoveredHiglight;                                             // 0x0458 (size: 0x8)
    class UCommonHierarchicalScrollBox* SettingsScrollBox;                            // 0x0460 (size: 0x8)
    class UW_Menu_HeaderBar_C* W_Header_MapSelection;                                 // 0x0468 (size: 0x8)
    TSubclassOf<class UCoatOfArmsLibrary> CoatOfArmsLibraryClass;                     // 0x0470 (size: 0x8)
    TArray<class UmapSelectionEntry_C*> mapSelectionOptionWidgets;                    // 0x0478 (size: 0x10)
    TMap<class FRegionData, class UUserWidget*> regionWidgets;                        // 0x0488 (size: 0x50)
    TArray<class UUserWidget*> MapWidgets;                                            // 0x04D8 (size: 0x10)
    TArray<FSettingOption> DefaultAILordSettingOptions;                               // 0x04E8 (size: 0x10)
    double MapResolution;                                                             // 0x04F8 (size: 0x8)
    FName PreviewMapName;                                                             // 0x0500 (size: 0x8)
    class UMLMainMenuScreen* MainMenu;                                                // 0x0508 (size: 0x8)
    int32 DraggedPlayerIndex;                                                         // 0x0510 (size: 0x4)
    FVillageSpawnerData DragSourceVillage;                                            // 0x0520 (size: 0xE0)

    void SequenceEvent__ENTRYPOINTmainMenu_GameSetup();
    void OnHoveredSettingChanged(class UUserWidget* MyWidget, bool Hovered);
    void IsMapDragging(bool& Return Value, int32& Index);
    void NotifyMapDragFinished(FVillageSpawnerData To, bool Cancelled);
    void NotifyMapDragStarted(FVillageSpawnerData from, int32 DraggedPlayerIndex);
    void GetMapRegionWidget(const FRegionData& Key, class UUserWidget*& Value);
    void UpdateRegionWidgets(FMapDataRow MapData);
    void SetHighlightMapWidgets(bool bHighlight);
    void UpdateGameSetupFromSetting(class UMLGameSetupSettingWidget* Widget);
    void UpdateAILordCountSetting();
    void CleanupForMapEntry();
    void Apply Edge Padding to Icon(FVector2D Location, double Resolution, bool ApplyPadding, FVector2D& PaddedLocation);
    void PopulateParchmentWithStartLocations(FMapDataRow MapData);
    void SetOptionAvailable(class UWidget* Widget, bool isAvailable);
    void InitMapList();
    void updateSelectedMapUI(FName mapName);
    class UWidget* OnGenerateWidget_mapComboBox(FString Item);
    void ConsiderScrollingGameSettingIntoView(bool HasFocus);
    FNaviSubGridLayout ComputeSubGridLayout();
    void changeVictoryConditionsOptionsBasedOnAIPresence(bool AI_is_present);
    void getCurrentGameSetup(FGameSetupParameters& CurrentSetupParams);
    void NotifySettingsChanged_BP();
    void UpdateAll();
    void SubscribeToEvents();
    void repopulateGamePresets();
    void WaveFlags();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__mainMenu_GameSetup_HorizontalRadioSelect_69_K2Node_ComponentBoundEvent_11_RadioSelectedSignature__DelegateSignature(FString Value);
    void BndEvt__mainMenu_GameSetup_Return_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__mainMenu_GameSetup_Play_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void Open();
    void Close();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void WidgetAnimationEvt_HideContentAnim_K2Node_WidgetAnimationEvent_1();
    void BndEvt__mainMenu_GameSetup_W_MapSelectButton_K2Node_ComponentBoundEvent_0_OnMapSelected__DelegateSignature(FName mapName);
    void ExecuteUbergraph_mainMenu_GameSetup(int32 EntryPoint);
}; // Size: 0x600

#endif
