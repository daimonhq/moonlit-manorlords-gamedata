#ifndef UE4SS_SDK_mainMenu_widget_HPP
#define UE4SS_SDK_mainMenu_widget_HPP

class UmainMenu_widget_C : public UMLMainMenuScreen
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0588 (size: 0x8)
    class UWidgetAnimation* MenuButtonAnim;                                           // 0x0590 (size: 0x8)
    class UWidgetAnimation* BGSplashAnim;                                             // 0x0598 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x05A0 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x05A8 (size: 0x8)
    class USizeBox* AspectRatioSizeBox;                                               // 0x05B0 (size: 0x8)
    class USizeBox* back_sb;                                                          // 0x05B8 (size: 0x8)
    class UScaleBox* back_scaleBox;                                                   // 0x05C0 (size: 0x8)
    class UVerticalBox* back_vb;                                                      // 0x05C8 (size: 0x8)
    class UBorder* background_darkening_border;                                       // 0x05D0 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_51;                                         // 0x05D8 (size: 0x8)
    class UCanvasPanel* CanvasRoot;                                                   // 0x05E0 (size: 0x8)
    class UCreditsPage_C* CreditsPage;                                                // 0x05E8 (size: 0x8)
    class UBorder* inGameFadeBorder;                                                  // 0x05F0 (size: 0x8)
    class UImage* logo_img;                                                           // 0x05F8 (size: 0x8)
    class USizeBox* main_buttons_sb;                                                  // 0x0600 (size: 0x8)
    class UVerticalBox* main_buttons_vb;                                              // 0x0608 (size: 0x8)
    class UHorizontalBox* MainMenuButtons;                                            // 0x0610 (size: 0x8)
    class Umenu_saveLoadMenu_C* menu_load;                                            // 0x0618 (size: 0x8)
    class Umenu_settingsWrapper_C* menu_settingsWrapper_fullscreen;                   // 0x0620 (size: 0x8)
    class UW_MainMenuButton_C* menuButton_back;                                       // 0x0628 (size: 0x8)
    class UW_MainMenuButton_C* menuButton_continue;                                   // 0x0630 (size: 0x8)
    class UW_MainMenuButton_C* menuButton_credits;                                    // 0x0638 (size: 0x8)
    class UW_MainMenuButton_C* menuButton_loadGame;                                   // 0x0640 (size: 0x8)
    class UW_MainMenuButton_C* menuButton_mainMenu;                                   // 0x0648 (size: 0x8)
    class UW_MainMenuButton_C* menuButton_newGame;                                    // 0x0650 (size: 0x8)
    class UW_MainMenuButton_C* menuButton_quit;                                       // 0x0658 (size: 0x8)
    class UW_MainMenuButton_C* menuButton_saveGame;                                   // 0x0660 (size: 0x8)
    class UW_MainMenuButton_C* menuButton_settings;                                   // 0x0668 (size: 0x8)
    class UCanvasPanel* Sphash;                                                       // 0x0670 (size: 0x8)
    class UW_Splash_C* SplashImage;                                                   // 0x0678 (size: 0x8)
    class UTextBlock* ver;                                                            // 0x0680 (size: 0x8)
    UDLSSMode DLSS_used;                                                              // 0x0688 (size: 0x1)
    class UMLGameStartScreen* main_menu_lordCustomization;                            // 0x0690 (size: 0x8)
    class UMLGameSetupScreen* GameSetupWidget;                                        // 0x0698 (size: 0x8)
    class UMLSaveLoadMenuScreen* LoadMenuWidget;                                      // 0x06A0 (size: 0x8)
    class UWidget* activeMenu;                                                        // 0x06A8 (size: 0x8)
    bool StartingNewGame;                                                             // 0x06B0 (size: 0x1)
    class UMainMenu_LoadingThrobber_C* ShownLoadingIndicator;                         // 0x06B8 (size: 0x8)
    bool MenuButtonsHidden;                                                           // 0x06C0 (size: 0x1)
    bool WaitingForCoatLibrary;                                                       // 0x06C1 (size: 0x1)
    TSoftClassPtr<UUserWidget> GameSetupScreenClass;                                  // 0x06C8 (size: 0x28)
    TSoftClassPtr<UUserWidget> GameStartScreenClass;                                  // 0x06F0 (size: 0x28)
    TSoftClassPtr<UUserWidget> LoadMenuScreenClass;                                   // 0x0718 (size: 0x28)
    FSaveGameSlot PendingGame;                                                        // 0x0740 (size: 0x10)
    double ButtonSize;                                                                // 0x0750 (size: 0x8)

    void GoToPreviousMenu();
    class UUserWidget* CreateScreen(TSubclassOf<class UUserWidget> Class);
    void DoCloseAndHideSelf();
    void ConsiderPurgeLoadingIndicator(bool IsReloadingTextures);
    void OnPauseMenuReopen();
    bool IsButtonCategoryBackOnly();
    FNaviPrimeGridLayout ComputePrimeGridLayout();
    void disableSavesIfGameOver();
    void RespectConsoleQuitLimits();
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void RebuildNaviGrid();
    void getScenarioName(FName& scenario);
    bool newGameSettingsIsCreatedAndVisible();
    void LoadGame(FSaveGameSlot SaveGameSlot);
    void startNewGame();
    void unpauseAndResetDLSS();
    void getNumVisibleChildren(class UPanelWidget* Target, int32& numCh1);
    void closeLevel();
    void animateMainButtonCategory(double DeltaTime, bool IsVisible, class USizeBox* SizeBox, double desiredSizeY);
    void SwitchMenu(class UWidget* show);
    void OnLoaded_C18C7BA645D459322AE8ED9B50426E67(UClass* Loaded);
    void OnLoaded_3AD213274D0B28C50386D0BBF01D22C3(UClass* Loaded);
    void OnLoaded_35D0E60D40AF8C2C162BFD955FCCD528(UClass* Loaded);
    void Construct();
    void continue();
    void goBackToBannerCreation();
    void onCreditDone();
    void EnsureStartAchieved();
    void LoopStartAchieve();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void GoToGameSetup();
    void OnBack_Event();
    void BndEvt__mainMenu_widget_menuButton_newGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__mainMenu_widget_menuButton_loadGame_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__mainMenu_widget_menuButton_saveGame_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__mainMenu_widget_menuButton_settings_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__mainMenu_widget_menuButton_back_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__mainMenu_widget_menuButton_mainMenu_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__mainMenu_widget_menuButton_credits_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__mainMenu_widget_menuButton_continue_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__mainMenu_widget_menuButton_quit_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void SwitchToLoadScreen(bool saveMode);
    void WidgetAnimationEvt_fadeOut_K2Node_WidgetAnimationEvent_0();
    void OnSaveLoadMenuClosed_Event();
    void ExecuteUbergraph_mainMenu_widget(int32 EntryPoint);
}; // Size: 0x758

#endif
