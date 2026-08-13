#ifndef UE4SS_SDK_Inventory_HPP
#define UE4SS_SDK_Inventory_HPP

class UInventory_C : public UMLInventoryScreen
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class UWidgetAnimation* IntroAnim;                                                // 0x0498 (size: 0x8)
    class USizeBox* Advanced_sizeBox;                                                 // 0x04A0 (size: 0x8)
    class UVerticalBox* advanced_vb;                                                  // 0x04A8 (size: 0x8)
    class UHorizontalBox* Affinities_HB;                                              // 0x04B0 (size: 0x8)
    class UCommonLazyImage* buildingImage;                                            // 0x04B8 (size: 0x8)
    class UCanvasPanel* CanvasPanel;                                                  // 0x04C0 (size: 0x8)
    class UW_LegacyButton_C* CloseButton;                                             // 0x04C8 (size: 0x8)
    class USizeBox* Construction_SizeBox;                                             // 0x04D0 (size: 0x8)
    class UVerticalBox* customBuildingSlot;                                           // 0x04D8 (size: 0x8)
    class UW_LegacyButton_C* DemolishButton;                                          // 0x04E0 (size: 0x8)
    class UTextBlock* DisplayName;                                                    // 0x04E8 (size: 0x8)
    class UVerticalBox* extensions_and_upgrades_VB;                                   // 0x04F0 (size: 0x8)
    class UHorizontalBox* extensionSlots_HB;                                          // 0x04F8 (size: 0x8)
    class UVerticalBox* general_and_storage_vb;                                       // 0x0500 (size: 0x8)
    class USizeBox* General_SizeBox;                                                  // 0x0508 (size: 0x8)
    class UVerticalBox* general_VB;                                                   // 0x0510 (size: 0x8)
    class UButton* Header_button;                                                     // 0x0518 (size: 0x8)
    class UW_LegacyButton_C* HelpButton;                                              // 0x0520 (size: 0x8)
    class UHorizontalRadioSelect_C* HorizontalRadioSelect_MainTabs;                   // 0x0528 (size: 0x8)
    class USizeBox* livestock_SizeBox;                                                // 0x0530 (size: 0x8)
    class UBorder* MainBorder;                                                        // 0x0538 (size: 0x8)
    class UHorizontalBox* MainTabsParent;                                             // 0x0540 (size: 0x8)
    class UOverlay* panelImage_overlay;                                               // 0x0548 (size: 0x8)
    class USizeBox* PeopleList_SizeBox;                                               // 0x0550 (size: 0x8)
    class UW_LegacyButton_C* PinButton;                                               // 0x0558 (size: 0x8)
    class UTextBlock* regionName_txt;                                                 // 0x0560 (size: 0x8)
    class UW_LegacyButton_C* RelocateButton;                                          // 0x0568 (size: 0x8)
    class USizeBox* residential_sizeBox;                                              // 0x0570 (size: 0x8)
    class UHorizontalBox* residentialUpg;                                             // 0x0578 (size: 0x8)
    class UW_LegacyButton_C* SleepButton;                                             // 0x0580 (size: 0x8)
    class UW_LegacyButton_C* StallButton;                                             // 0x0588 (size: 0x8)
    class USizeBox* taxes_SizeBox;                                                    // 0x0590 (size: 0x8)
    class UBorder* topHeader_border;                                                  // 0x0598 (size: 0x8)
    class USizeBox* trade_sizeBox;                                                    // 0x05A0 (size: 0x8)
    class UHorizontalBox* upgradesHB;                                                 // 0x05A8 (size: 0x8)
    class UVerticalBox* VB_RecipeSelectionSlot;                                       // 0x05B0 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x05B8 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_Animals;                            // 0x05C0 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_Construction;                       // 0x05C8 (size: 0x8)
    class UW_InventoryTab_Field_C* W_InventoryTab_Field;                              // 0x05D0 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_Fuel;                               // 0x05D8 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_Livestock;                          // 0x05E0 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_Maintenance;                        // 0x05E8 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_ManorDetails;                       // 0x05F0 (size: 0x8)
    class UW_InventoryTab_MarketProsperity_C* W_InventoryTab_MarketProsperity;        // 0x05F8 (size: 0x8)
    class UW_InventoryTab_MineChanceCollapse_C* W_InventoryTab_MineChanceCollapse;    // 0x0600 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_People;                             // 0x0608 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_ProductivityTracker;                // 0x0610 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_ProtectionSlot;                     // 0x0618 (size: 0x8)
    class UW_InventoryTab_Residential_C* W_InventoryTab_Residential;                  // 0x0620 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_RoadConnection;                     // 0x0628 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_Storage;                            // 0x0630 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_StorageFilters;                     // 0x0638 (size: 0x8)
    class UW_InventoryTab_Taxes_C* W_InventoryTab_Taxes;                              // 0x0640 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_Threshing;                          // 0x0648 (size: 0x8)
    class UW_InventoryTab_Trade_C* W_InventoryTab_Trade;                              // 0x0650 (size: 0x8)
    class UW_InventoryTab_Windmill_C* W_InventoryTab_Windmill;                        // 0x0658 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_WorkArea;                           // 0x0660 (size: 0x8)
    class UW_InventoryTab_Proxy_C* W_InventoryTab_WorkerProxy;                        // 0x0668 (size: 0x8)
    class UW_InventoryTab_WorkplaceLimits_C* W_InventoryTab_WorkplaceLimits;          // 0x0670 (size: 0x8)
    bool Dragging;                                                                    // 0x0678 (size: 0x1)
    FVector2D Offset;                                                                 // 0x0680 (size: 0x10)
    FVector2D LastPosition;                                                           // 0x0690 (size: 0x10)
    class APawnCPP* PlayerPawn;                                                       // 0x06A0 (size: 0x8)
    bool foundPawn;                                                                   // 0x06A8 (size: 0x1)
    class UMainUICPP_C* Daddy;                                                        // 0x06B0 (size: 0x8)
    int32 mainTabIndex;                                                               // 0x06B8 (size: 0x4)
    FStat bData;                                                                      // 0x06C0 (size: 0x390)
    int32 bType;                                                                      // 0x0A50 (size: 0x4)
    bool closing;                                                                     // 0x0A54 (size: 0x1)
    bool IsConstructed;                                                               // 0x0A55 (size: 0x1)
    EUpdateType UpdateType;                                                           // 0x0A56 (size: 0x1)

    void UpdateConstructionStatus();
    void InitFromBuilding();
    void UpdateHighlightedCategories();
    void UpdateCategoryList();
    void UpdateRelocationButtonVisibility();
    void UpdateStallButtonVisibility();
    void UpdateSleepButtonVisibility();
    void SetupToolTips();
    void DestroyInventoryWindow();
    void RespawnAffinities();
    bool WillNotRemoveLastOxSlot();
    bool HasMainTabOptions();
    void ApplyPlatformLimits();
    void OnFamilyEntryWantsScrollIntoView(class UFamilyEntry_C* DesiredEntry);
    bool HandleTabShift(int32 tabDelta);
    void ConsiderControllerScrollBoxVisiblity(bool HasFocus);
    FNaviSubGridLayout ComputeSubGridLayout();
    void debugFamilies();
    void Update Production Focus Widget if Needed();
    void isDebugMode(bool& Draw Battle Debug);
    FVector2D scaleByDPI_IThink(FVector2D A);
    void updateExtensionSlots();
    void updateDemolish();
    void updatePosition();
    void updateUpgrades();
    void animateInventoryCategories(double Delta);
    void updateTrade();
    void updateStorageAndFuel();
    void setWindows_IsHomeOrWork();
    void OnLoaded_B172AFCD4C155EDA3CCC20B65E555612(class UObject* Loaded);
    void BndEvt__Inventory_HorizontalRadioSelect_K2Node_ComponentBoundEvent_13_RadioSelectedSignature__DelegateSignature(FString Value);
    void updatePos();
    void confirmDemolish();
    void DelayedPositionChange();
    void OnInitialized();
    void BndEvt__Inventory_HelpButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__Inventory_HelpButton_K2Node_ComponentBoundEvent_2_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__Inventory_DemolishButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__Inventory_DemolishButton_K2Node_ComponentBoundEvent_5_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__Inventory_CloseButton_K2Node_ComponentBoundEvent_20_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__Inventory_CloseButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void OnAnimationFinished_Event_0();
    void Close();
    void Update Inventory Event(EUpdateType UpdateType);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Inventory_PinButton_K2Node_ComponentBoundEvent_18_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__Inventory_PinButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__Inventory_StallButton_K2Node_ComponentBoundEvent_16_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__Inventory_StallButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__Inventory_SleepButton_K2Node_ComponentBoundEvent_14_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__Inventory_SleepButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__Inventory_RelocateButton_K2Node_ComponentBoundEvent_11_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__Inventory_RelocateButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void updateTogglesColor();
    void updatePinColor();
    void BndEvt__Header_button_K2Node_ComponentBoundEvent_112_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Header_button_K2Node_ComponentBoundEvent_94_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_Inventory(int32 EntryPoint);
}; // Size: 0xA57

#endif
