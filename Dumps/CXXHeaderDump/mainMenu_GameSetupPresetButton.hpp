#ifndef UE4SS_SDK_mainMenu_GameSetupPresetButton_HPP
#define UE4SS_SDK_mainMenu_GameSetupPresetButton_HPP

class UmainMenu_GameSetupPresetButton_C : public UW_MaterialButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09C8 (size: 0x8)
    FGameSetupPreset setupPreset;                                                     // 0x09D0 (size: 0x150)
    FmainMenu_GameSetupPresetButton_CGamePresetSelected gamePresetSelected;           // 0x0B20 (size: 0x10)
    void gamePresetSelected(bool reselectDifficulty);
    FName presetRowName;                                                              // 0x0B30 (size: 0x8)
    bool PreviewSelected;                                                             // 0x0B38 (size: 0x1)
    double DesiredAspectRatio;                                                        // 0x0B40 (size: 0x8)

    void HandlePressed(bool bPressed);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_mainMenu_GameSetupPresetButton(int32 EntryPoint);
    void gamePresetSelected__DelegateSignature(bool reselectDifficulty);
}; // Size: 0xB48

#endif
