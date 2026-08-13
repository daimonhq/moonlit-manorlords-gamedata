#ifndef UE4SS_SDK_W_BuildingExtensionButton_HPP
#define UE4SS_SDK_W_BuildingExtensionButton_HPP

class UW_BuildingExtensionButton_C : public UW_LegacyButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09C8 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x09D0 (size: 0x8)
    int32 extensionID;                                                                // 0x09D8 (size: 0x4)
    int32 upgradeID;                                                                  // 0x09DC (size: 0x4)
    bool bHasToolTip;                                                                 // 0x09E0 (size: 0x1)

    void InitToolTip(class UUserWidget* InToolTip);
    void Construct();
    void SetBuilding(class ASMBuildingMaster* building);
    void ExecuteUbergraph_W_BuildingExtensionButton(int32 EntryPoint);
}; // Size: 0x9E1

#endif
