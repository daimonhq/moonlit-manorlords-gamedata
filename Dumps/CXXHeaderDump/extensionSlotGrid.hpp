#ifndef UE4SS_SDK_extensionSlotGrid_HPP
#define UE4SS_SDK_extensionSlotGrid_HPP

class UextensionSlotGrid_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UW_BuildingExtensionButton_C* ApiaryButton;                                 // 0x0370 (size: 0x8)
    class UW_BuildingExtensionButton_C* ArmorerButton;                                // 0x0378 (size: 0x8)
    class UW_BuildingExtensionButton_C* BakerButton;                                  // 0x0380 (size: 0x8)
    class UW_BuildingExtensionButton_C* BlacksmithButton;                             // 0x0388 (size: 0x8)
    class UW_BuildingExtensionButton_C* BreweryButton;                                // 0x0390 (size: 0x8)
    class UW_BuildingExtensionButton_C* ButcherButton;                                // 0x0398 (size: 0x8)
    class UW_BuildingExtensionButton_C* CheesemongerButton;                           // 0x03A0 (size: 0x8)
    class UW_BuildingExtensionButton_C* CobblerButton;                                // 0x03A8 (size: 0x8)
    class UWrapBox* conversions;                                                      // 0x03B0 (size: 0x8)
    class UWrapBox* conversionsLv3;                                                   // 0x03B8 (size: 0x8)
    class UW_BuildingExtensionButton_C* CoopButton;                                   // 0x03C0 (size: 0x8)
    class UWrapBox* extensionsOptions;                                                // 0x03C8 (size: 0x8)
    class UW_BuildingExtensionButton_C* FletcherButton;                               // 0x03D0 (size: 0x8)
    class UW_BuildingExtensionButton_C* GardenButton;                                 // 0x03D8 (size: 0x8)
    class UW_BuildingExtensionButton_C* GoatButton;                                   // 0x03E0 (size: 0x8)
    class UW_BuildingExtensionButton_C* JoinerButton;                                 // 0x03E8 (size: 0x8)
    class UW_BuildingExtensionButton_C* OrchardButton;                                // 0x03F0 (size: 0x8)
    class UW_BuildingExtensionButton_C* TailorButton;                                 // 0x03F8 (size: 0x8)
    class UextensionSlotWidget_C* ParentWiget;                                        // 0x0400 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0408 (size: 0x8)

    void OnArtisanButtonClicked(class UW_MaterialButton_C* MyWidget);
    void OnExtensionButtonClicked(class UW_MaterialButton_C* MyWidget);
    void Setup();
    void Update();
    void ExecuteUbergraph_extensionSlotGrid(int32 EntryPoint);
}; // Size: 0x410

#endif
