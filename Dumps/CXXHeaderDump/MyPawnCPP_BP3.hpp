#ifndef UE4SS_SDK_MyPawnCPP_BP3_HPP
#define UE4SS_SDK_MyPawnCPP_BP3_HPP

class AMyPawnCPP_BP3_C : public APawnCPP
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1540 (size: 0x8)
    class UStaticMeshComponent* DisplacementMesh_WIP;                                 // 0x1548 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Bonus;                        // 0x1550 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Accessory;                    // 0x1558 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Shield;                       // 0x1560 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Helmet;                       // 0x1568 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Head;                         // 0x1570 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Weapon;                       // 0x1578 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Body;                         // 0x1580 (size: 0x8)
    class UStaticMeshComponent* blurryFogCylinder_DISABLED;                           // 0x1588 (size: 0x8)
    class USceneCaptureComponent2D* unitCreator_SceneCaptureComponent2D;              // 0x1590 (size: 0x8)
    class UVARuntimeComponent* VARuntime_UnitPreview;                                 // 0x1598 (size: 0x8)
    class USceneComponent* dynamicAmbienceSystem;                                     // 0x15A0 (size: 0x8)
    class UAudioComponent* CenB;                                                      // 0x15A8 (size: 0x8)
    class UStaticMeshComponent* bbox_outlineCullPlane_DISABLED;                       // 0x15B0 (size: 0x8)
    class UDecalComponent* moduleMaskDecal;                                           // 0x15B8 (size: 0x8)
    class UAudioComponent* CenA;                                                      // 0x15C0 (size: 0x8)
    class UAudioComponent* LeftB;                                                     // 0x15C8 (size: 0x8)
    class UAudioComponent* RightB;                                                    // 0x15D0 (size: 0x8)
    class UAudioComponent* RightA;                                                    // 0x15D8 (size: 0x8)
    class UAudioComponent* LeftA;                                                     // 0x15E0 (size: 0x8)
    class USceneCaptureComponent2D* thumbCapture;                                     // 0x15E8 (size: 0x8)
    class UAudioComponent* StaticAmbience_HighWind;                                   // 0x15F0 (size: 0x8)
    class UAudioComponent* music_leadingTrackB;                                       // 0x15F8 (size: 0x8)
    class UAudioComponent* music_leadingTrackA;                                       // 0x1600 (size: 0x8)
    class USceneComponent* dynamicMusicSystem;                                        // 0x1608 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x1610 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x1618 (size: 0x8)
    class USceneComponent* unitCreator_Scene;                                         // 0x1620 (size: 0x8)
    float Timeline_prog_666652834CFBABE2326EBA9E4EDB2D0F;                             // 0x1628 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_666652834CFBABE2326EBA9E4EDB2D0F; // 0x162C (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x1630 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_828BA552426AFD6A7E796CAB0E235D1F; // 0x1638 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x1640 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> zoomTransition__Direction_4F8545034896CEEBF9D81587D9D4525A; // 0x1648 (size: 0x1)
    class UTimelineComponent* zoomTransition;                                         // 0x1650 (size: 0x8)
    class UMainUICPP_C* mainUI;                                                       // 0x1658 (size: 0x8)
    double bbox_scale_anim;                                                           // 0x1660 (size: 0x8)
    double bbox_scale_lerp;                                                           // 0x1668 (size: 0x8)
    double clickAnim;                                                                 // 0x1670 (size: 0x8)
    class UMaterialInstanceDynamic* highlight_materialinstance;                       // 0x1678 (size: 0x8)
    double gridRange;                                                                 // 0x1680 (size: 0x8)
    bool TownNamesUpdated;                                                            // 0x1688 (size: 0x1)
    bool HighlightAnimationRunning;                                                   // 0x1689 (size: 0x1)
    bool BLMB;                                                                        // 0x168A (size: 0x1)
    bool bRMB;                                                                        // 0x168B (size: 0x1)
    FVector2D RMBLast;                                                                // 0x1690 (size: 0x10)
    bool isUIHovered;                                                                 // 0x16A0 (size: 0x1)
    bool isInventoryHovered;                                                          // 0x16A1 (size: 0x1)
    TArray<class UquestItem_C*> questItems;                                           // 0x16A8 (size: 0x10)
    double MMB_Axis_0;                                                                // 0x16B8 (size: 0x8)
    int32 lastDebrisSnd;                                                              // 0x16C0 (size: 0x4)
    bool skipRMB;                                                                     // 0x16C4 (size: 0x1)
    TArray<class UgenericAchievement_EventMessage_C*> progressUpdates;                // 0x16C8 (size: 0x10)
    double timeCorrected;                                                             // 0x16D8 (size: 0x8)
    double ctrlAxis;                                                                  // 0x16E0 (size: 0x8)
    double deltaT;                                                                    // 0x16E8 (size: 0x8)
    class ASMBuildingMaster* nullBuilding;                                            // 0x16F0 (size: 0x8)
    bool UI setup Finished;                                                           // 0x16F8 (size: 0x1)
    double startingPitch;                                                             // 0x1700 (size: 0x8)
    double startingYaw;                                                               // 0x1708 (size: 0x8)
    int32 inventoryAudioBType;                                                        // 0x1710 (size: 0x4)
    bool ambienceSoundFound;                                                          // 0x1714 (size: 0x1)
    TArray<int32> tutorialsShown;                                                     // 0x1718 (size: 0x10)
    double desat;                                                                     // 0x1728 (size: 0x8)
    class ASkyAtmosphere* atmFog;                                                     // 0x1730 (size: 0x8)
    class ASkyLight* SkyLight;                                                        // 0x1738 (size: 0x8)
    class ADirectionalLightActor_C* dirLight;                                         // 0x1740 (size: 0x8)
    TArray<class UWidget*> oldQuestLog;                                               // 0x1748 (size: 0x10)
    bool anyNewQuest;                                                                 // 0x1758 (size: 0x1)
    int32 numTutMessages;                                                             // 0x175C (size: 0x4)
    bool hasClickedAnyMainTab;                                                        // 0x1760 (size: 0x1)
    int32 lastHomeID;                                                                 // 0x1764 (size: 0x4)
    class APostProcessVolume* postProcess;                                            // 0x1768 (size: 0x8)
    TArray<class UMessageFullscreen_C*> MessageWidgets;                               // 0x1770 (size: 0x10)
    TArray<class UtutorialMessage_C*> TutorialMessages;                               // 0x1780 (size: 0x10)
    double timeCorrectedPrevFrame;                                                    // 0x1790 (size: 0x8)
    TArray<class UsquadWidget_C*> squadWidgets;                                       // 0x1798 (size: 0x10)
    bool scheduleSquadWidgetUpdate;                                                   // 0x17A8 (size: 0x1)
    bool isHoveringOverUnitCard;                                                      // 0x17A9 (size: 0x1)
    TEnumAsByte<DMS_Mood::Type> DMS_Mood;                                             // 0x17AA (size: 0x1)
    TEnumAsByte<DMS_Mood::Type> DMS_PrevMood;                                         // 0x17AB (size: 0x1)
    FDMS_Track DMS_CurrentLeadingTrack;                                               // 0x17B0 (size: 0x30)
    double percentOfNextTransition;                                                   // 0x17E0 (size: 0x8)
    class UDataTable* DMS_DT_Tracks;                                                  // 0x17E8 (size: 0x8)
    double DMS_transition_treshold;                                                   // 0x17F0 (size: 0x8)
    double DMS_last_transition_considertion;                                          // 0x17F8 (size: 0x8)
    double DMS_last_track_change;                                                     // 0x1800 (size: 0x8)
    double DMS_transition_offset_mul;                                                 // 0x1808 (size: 0x8)
    double DMS_current_progress;                                                      // 0x1810 (size: 0x8)
    bool DMS_usingBComponent;                                                         // 0x1818 (size: 0x1)
    bool DMS_schedule_transition;                                                     // 0x1819 (size: 0x1)
    class USoundBase* DMS_next_transition;                                            // 0x1820 (size: 0x8)
    class UDataTable* DMS_DT_Transitions;                                             // 0x1828 (size: 0x8)
    FDMS_Track DMS_nextProposedTrack;                                                 // 0x1830 (size: 0x30)
    double DMS_currentTrackTime;                                                      // 0x1860 (size: 0x8)
    TArray<FDMS_Track> DMS_LastPlayedTracks;                                          // 0x1868 (size: 0x10)
    double DMS_lag;                                                                   // 0x1878 (size: 0x8)
    class UQuartzClockHandle* clock;                                                  // 0x1880 (size: 0x8)
    TArray<double> DMS_currentTransitionTImes;                                        // 0x1888 (size: 0x10)
    bool DMS_finalTransition;                                                         // 0x1898 (size: 0x1)
    TArray<class UWidget*> questsToRemove;                                            // 0x18A0 (size: 0x10)
    double prevClearance;                                                             // 0x18B0 (size: 0x8)
    bool smoothMapMode;                                                               // 0x18B8 (size: 0x1)
    bool prevSmoothMapMode;                                                           // 0x18B9 (size: 0x1)
    double smoothMapThreshold;                                                        // 0x18C0 (size: 0x8)
    double zoomBeforeClickedMap;                                                      // 0x18C8 (size: 0x8)
    int32 DMS_numTracksPlayed;                                                        // 0x18D0 (size: 0x4)
    bool DMS_MoodChanged;                                                             // 0x18D4 (size: 0x1)
    class ARegion* prevRegionUnderCursor;                                             // 0x18D8 (size: 0x8)
    double lastRegionChangeSfx;                                                       // 0x18E0 (size: 0x8)
    class UMessageFullscreen_C* lastMessagePlayed;                                    // 0x18E8 (size: 0x8)
    TArray<FQueuedEventMessage> eventMsgQueue;                                        // 0x18F0 (size: 0x10)
    TArray<EAmbienceType> DAS_CurrentAmbienceTypes;                                   // 0x1900 (size: 0x10)
    class UDataTable* DT_Ambience;                                                    // 0x1910 (size: 0x8)
    int32 DAS_LastDayChange;                                                          // 0x1918 (size: 0x4)
    class USourceEffectFilterPreset* ambient_SC;                                      // 0x1920 (size: 0x8)
    double DAS_Lowpass;                                                               // 0x1928 (size: 0x8)
    class UReverbEffect* DAS_ReverbFX;                                                // 0x1930 (size: 0x8)
    class AAudioVolume* DAS_ReverbVolume;                                             // 0x1938 (size: 0x8)
    double previewGuy_newAnimPos;                                                     // 0x1940 (size: 0x8)
    class AActor* mapPlane;                                                           // 0x1948 (size: 0x8)
    class AFogBP_C* heightFog;                                                        // 0x1950 (size: 0x8)
    class AActor* mapEdgeFade;                                                        // 0x1958 (size: 0x8)
    TSoftObjectPtr<USoundBase> Last_Voiceline_Path;                                   // 0x1960 (size: 0x28)
    int32 chosenVoiceLineVariation;                                                   // 0x1988 (size: 0x4)
    FTimerHandle tutorialTimerHandle;                                                 // 0x1990 (size: 0x8)
    TArray<class ARegion*> allRegions;                                                // 0x1998 (size: 0x10)
    class UmainMenu_widget_C* pauseMenu;                                              // 0x19A8 (size: 0x8)
    TArray<class UAudioComponent*> DAS_CurrentlyPlayingComponentForNode;              // 0x19B0 (size: 0x10)
    TArray<double> DAS_PrevFadeInTimes;                                               // 0x19C0 (size: 0x10)
    class UAudioComponent* DAS_newCurrentComponent;                                   // 0x19D0 (size: 0x8)
    double DAS_fadeTime;                                                              // 0x19D8 (size: 0x8)
    bool command_setSprintMode;                                                       // 0x19E0 (size: 0x1)
    FVector cinematic_actorPositionAboveGround;                                       // 0x19E8 (size: 0x18)
    double gameSpeedBeforeEnginePause;                                                // 0x1A00 (size: 0x8)
    double gameSpeedBeforeMapView;                                                    // 0x1A08 (size: 0x8)
    FTimerHandle updateFloatersTimerHandle;                                           // 0x1A10 (size: 0x8)
    class AActor* starDome;                                                           // 0x1A18 (size: 0x8)
    bool UI_assignmentMode_BP;                                                        // 0x1A20 (size: 0x1)
    bool UI_assignmentModeChanged;                                                    // 0x1A21 (size: 0x1)
    FTimerHandle autosaveHandle;                                                      // 0x1A28 (size: 0x8)
    FDMS_Track DMS_PreviousTrack;                                                     // 0x1A30 (size: 0x30)
    bool everChangedGameSpeed;                                                        // 0x1A60 (size: 0x1)
    double gameSpeed3_value;                                                          // 0x1A68 (size: 0x8)
    TArray<FQueuedPopup> queuedPopups;                                                // 0x1A70 (size: 0x10)
    bool triggeredVisitMode;                                                          // 0x1A80 (size: 0x1)
    TArray<class AActor*> landscapeMeshActors;                                        // 0x1A88 (size: 0x10)
    class ASkyAtmosphereClouds_Blueprint_C* SkyAtmosphereCloudBP;                     // 0x1A98 (size: 0x8)
    class UMaterialInstanceDynamic* PaperMapMaterialInstance;                         // 0x1AA0 (size: 0x8)
    TArray<class AStaticMeshActor*> fogPlanes;                                        // 0x1AA8 (size: 0x10)
    class UcastleFloater_C* castlePlannerFloater;                                     // 0x1AB8 (size: 0x8)
    class UcastleFloater_wallOptionWidget_C* castlePlannerWallOptionWidget;           // 0x1AC0 (size: 0x8)
    class UTexture* WaterTexture;                                                     // 0x1AC8 (size: 0x8)
    TSoftObjectPtr<UObject> waterMaskToLoad;                                          // 0x1AD0 (size: 0x28)
    FMapDataRow Out Row;                                                              // 0x1AF8 (size: 0x290)

    void IsCastlePlannerOpened(bool& Value);
    void UpdateSnowDisplacementMesh();
    void SetupSnowDisplacementMesh();
    void Update Map Plane Waterbody Properties();
    void toggleApprovalTooltipDetailsIfVisible(bool showDetails, bool& Success);
    void updateAmbienceNodeAtIndex(int32 Index);
    void SaveToDiskWithThumbnail(FString SlotName, FString OverrideSaveName);
    void Set Water Texture In Paper Map Material(FName ParamName);
    void setupPaperMapMaterialInstance();
    bool isPauseMenuVisible();
    void formatTutorialText(FName RowName, FText& tutorialText, FText& Header);
    void toggleLandscapeMeshVisibility(bool renderInMainPass);
    void getMainTabIndex(int32& mainTabIndex);
    void OpenPauseMenu();
    void ClosePauseMenu();
    void RebuildUnitPreviewShowOnlyList(bool ForceHidden);
    void playQueuedPopups();
    void playPopupMessage(FName messageType, class ARegion* Region);
    double getVariableVoicePitchForUnit(class ASMUnit* unit);
    bool hasQuest(FString questNameContains);
    void splitAndLocalize(FString SourceString, FString& localizedStringCombined);
    void updateMercenaryPaydayUI();
    void getHighestCommandedRegionLv(int32& highestLv1);
    void openLegacyView();
    void updateGameWindowFocus();
    void Set Autosave Timer(double Time);
    void Request Autosave();
    void Update Quest Message Elaborate Grid Visibility();
    void toggleStreamVisibility(bool bNewHidden);
    bool isHoveringResolutionConfirmation(class UMainUICPP_C* self2);
    bool isInBattleScenario();
    void storeOrBringBackGameSpeedAndZoomAfterMapMenuToggle();
    void setGamePausedInclVamp(bool bPaused);
    void playGameOver(int32 Selection);
    void updateReverbVolume();
    void Start Tutorials if Enabled();
    void rotateOutlineCullPlaneForPlacebuilding();
    bool isCurrentScenario(FName scenarioKey);
    void regionUnderCursorChangeSFX();
    void DAS_DynamicAudioFilters();
    void pickAmbienceSound(EAmbienceType Type, int32 ID, class USoundBase*& Sound);
    void updateEventMessageQueue();
    void playQueuedEventMessage(FQueuedEventMessage queuedMsg);
    void Any Event Mesages Playing(bool& stillPlaying);
    void adjustWindAmbience();
    void Find Light and Fog Actors();
    void DMS Is Dark Times(class ARegion*& Region, bool& dark);
    bool DMS Is Non Battle Track(class UObject* currentSound, TEnumAsByte<DMS_Mood::Type> currentMood);
    bool DMS_currentTrackLastTransitionPoint();
    void getBuildingMeshForID(int32 ID, TSoftObjectPtr<UStaticMesh>& Out Row Construction Mesh Asset);
    void checkAndTurnSmoothMapView();
    void updateVolumetricCloudVisibility();
    void Is Camera Shake Enabled(bool& Settings Camera Shake);
    void isQuestStillValid(FQuest Quest, bool& Valid);
    void questExistsInLog(FQuest Quest, TArray<class UWidget*>& scrollbox_children, bool& Exists, class UquestItem_C*& questItem);
    void update_questlog();
    void DMS_pastTracksContainMood(TEnumAsByte<DMS_Mood::Type> mood, bool& Contains);
    void DMS_generateTransitionTimes();
    void DMS_passedTransitionPoint(double CurrentTime, double Threshold, double anticipation, bool& Passed, double& transitionPoint, double& reminder);
    void DMS_pickRandomTransition(FDMS_Track& chosenTransition);
    void DMS_PickTrackForMood(TEnumAsByte<DMS_Mood::Type> mood, FDMS_Track& chosenTrack);
    void DMS_Setup();
    void DMS_selectMood();
    void dynamicMusicTick();
    void updateMPCValues();
    void isAnyBuildingUnderConstruction(class ASMBuildingMaster*& firstBuildingFound, bool& buildingFound);
    bool squadWidgetExists(int32 B);
    void setFoliageVisibility(bool bNewHidden);
    void displayNewDiplomaticMessages();
    void questExistedBefore(FQuest Quest, bool& existed);
    void spawnRegionIconWidgets();
    void mapViewChange_UpdateSkyFogEtc();
    void getNumShowingQuestMessages(int32& Num);
    void checkNoWorkersEmployed(bool& hasBuildingWithoutWorkers, class ASMBuildingMaster*& building);
    void getNumTotalBuildings(int32 bType, bool MustBeConstructed, int32& buildingAmount, class ASMBuildingMaster*& lastBuildingFound);
    void Check If Lacks Resource(const int32& Type, int32 neededAmt, bool& lacksResource);
    void spawnTutorialMessage(FVector Pos, bool realWorld, FVector2D FixedPositionOnScreen, bool pausesGame, bool visibleInMapView, FName tutorialKey, TArray<FName>& SubSections);
    void tutorial();
    void Play Fullscreen Message(FQuest Quest, FLetter Letter, bool tutorial, FName header_key_tut, FName descr_key_tut, class UMessageTutorialFullscreen_C*& tutorialWidget);
    void playFeedbackTextFunction(FText textToPrint, FVector Pos, double PlaybackSpeed);
    void getLastOpenedInventoryTab_WIP(class UInventory_C*& lastInventoryTab);
    void updateInventoryBackgroundAudio();
    void increaseGameSpeed(bool playSfx, bool AloowWrapAround);
    void decreaseGameSpeed(bool playSfx);
    void getGameSpeedID(int32& Speed);
    void changeGameSpeed(int32 newSpeedIndex, bool playSfx);
    void setupKillCam(FVector InVec, bool bCinematicTime);
    void showAndHideEconomyPanel();
    void getCtrlPressed(bool& IsPressed);
    void isAnyUnitCardHovered(bool& IsHovered);
    void closeAllInventoryTabs(bool ClosePinned);
    void popIcons2D();
    void gridLerp();
    void treeHighlights();
    bool flipBool(bool NewParam);
    void checkIfWindowsHovered(bool& Hovered);
    void UserConstructionScript();
    void zoomTransition__FinishedFunc();
    void zoomTransition__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_ShowProductionPanel_K2Node_InputActionEvent_19(FKey Key);
    void OnLoaded_606FAF6C4669EBE08B3A3DB2514CE8D4(class UObject* Loaded);
    void InpActEvt_quicksave_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_tab_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_tab_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_cinematicMode_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_squadSprint_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_esc_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_quickCottage_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_roadMode_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_remove worker_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_add worker_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_home_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_turnMapViewMode_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_prevCategory_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_nextCategory_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_fastSpeed_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_slowSpeed_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_army_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_pause_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_openBuildingsTab_K2Node_InputActionEvent_0(FKey Key);
    void OnLoaded_87C787CC442C40749917619FD991A844(class UObject* Loaded);
    void lerpToPosition(FVector NewPosition);
    void lerpToZoom(double newZoom);
    void ReceiveBeginPlay();
    void openBuildingTab(class ASMBuildingMaster* building, bool playSfx);
    void closeAllTabs();
    void iconPop(class ASMBuildingMaster* building, int32 Type);
    void updateCurrentRegionUI();
    void updateLogUI();
    void showProgressUpdate(class ARegion* Region);
    void closeAllTabsAndInventories();
    void openDevelopmentPanel(class ARegion* Region);
    void armyUIUpdate();
    void gameOver(const int32& Type);
    void playFeedbackText(FString Text, const FVector& Pos, float Speed);
    void switchTab(const int32& Tab);
    void playEventMessage(const FName& msgType, FString primaryText, FString secondaryText);
    void QuestMessage(const FQuest& Quest);
    void updateInventoryFieldStatus();
    void updateTownLabels();
    void updateClaimsUI();
    void checkInbox_Timer();
    void respawnTownNames();
    void updateSquadWidgets_1();
    void setCinematicMode(bool NewMode);
    void invokeRemoveRoadPrompt(class ARoad* roadToRemove);
    void callCommitRoad();
    void positionRoadConfirm(const FVector& NewPosition);
    void dynamicAmbienceSystemUpdate();
    void updateBoopMode();
    void spawnWorkAreaConfirmation(const FVector& Pos, const float& Radius);
    void playVoiceResponse(const FName& responseKey, const int32& voiceID, class ASMUnit* relatedUnit);
    void updateSoundFilters();
    void updateGameSpeedUI();
    void setDipToBlackOpacity(float Opacity);
    void playPopupMessageGUI(FName messageType, class ARegion* Region);
    void playSaveFinishedNotif();
    void updateAssignModeUI();
    void openCastlePlannerUI(class ASMBuildingMaster* plannerBuilding);
    void OnWindowFocusChanged(bool bIsFocused);
    void openSettlementInitializer(class ARegion* Region);
    void updateRTSToolActorUI();
    void updateActiveRTSToolUI();
    void RMB_BP_pressed();
    void RMB_BP_released();
    void LMB_BP_pressed();
    void LMB_BP_released();
    void setInventoryTabForBuilding(class ASMBuildingMaster* building, int32 inventoryTabIndex);
    void armyListUIUpdate();
    void despawnCastleFloater();
    void spawnCastleFloater(class AActor* buildingModule);
    void spawnWallJoinWidget(const class ARoad* wallA, const class ARoad* wallB);
    void despawnWallJoinWidgetIfExists();
    void updateAnySaveMenu();
    void CloseInventoryTabIfOpen(class ASMBuildingMaster* building);
    void LetterOpenedEventHandler(FGuid LetterUniqueId);
    void toggleDevelopmentPanel();
    void ReceiveRestarted();
    void DMS_pecentageEvent(const class USoundWave* PlayingSoundWave, const float PlaybackPercent);
    void ReceiveTick(float DeltaSeconds);
    void toggleTimeLast();
    void UpdateAllFloaterContents();
    void tabBpReleased();
    void tabBpPressed();
    void HomeShortcut_pressed();
    void toggleTimeNext();
    void toggleTimePause();
    void togglePauseMenu();
    void pleaseTurnMapView(bool NewMode);
    void flipMapView_event();
    void removeChallengeFromUI(int32 challengeID);
    void setMainUIMode(EMainUIMode NewMode);
    void UpdateLivingSpaceUI();
    void updateInventory(const EUpdateType UpdateType);
    void updateQuestTimesUI();
    void updateQuestlog();
    void changeSelectedRegionUI(class ARegion* newSelectedRegion);
    void updateCastleConstructionAvailabilityUI();
    void updateDemolishAvailabilityInOpenedBuildingTabsUI();
    void updateMercenayCompanyUI();
    void updateCastleReconstructionCostUI();
    void updateResidentsUI();
    void updateMarketStats();
    void updateCoatOfArmsSymbol();
    void updateInventoryStorage();
    void updateApprovalUI();
    void updateProblemUI();
    void updateDateUI(int32 day, int32 month, int32 Season);
    void updateLoyaltyUI();
    void updateStatUI();
    void playMarkerSound(const int32& snd);
    void play build sound(bool withPlanks);
    void playBuildingSound(const int32& bType);
    void playAlert(const int32& Type);
    void playUISnd(int32 Type);
    void playCameraShake(const int32& typeOfShake, class AActor* DebugActor, FString Reason);
    void playParticleSystem(const int32& ID, const FVector& Pos);
    void playBuildEffects(const FVector& Position);
    void playIntroSweep();
    void stopIntroCinematic();
    void ExecuteUbergraph_MyPawnCPP_BP3(int32 EntryPoint);
}; // Size: 0x1D88

#endif
