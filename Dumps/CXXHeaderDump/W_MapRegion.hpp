#ifndef UE4SS_SDK_W_MapRegion_HPP
#define UE4SS_SDK_W_MapRegion_HPP

class UW_MapRegion_C : public UMLGameSetupMapWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class UImage* Image;                                                              // 0x0598 (size: 0x8)
    class UMaterialInstanceDynamic* Material;                                         // 0x05A0 (size: 0x8)
    FVillageSpawnerData CurrentSpawner;                                               // 0x05B0 (size: 0xE0)
    class UMLGameInstance* GI;                                                        // 0x0690 (size: 0x8)
    float MapResolution;                                                              // 0x0698 (size: 0x4)
    bool HasPawnSpawner;                                                              // 0x069C (size: 0x1)
    bool ForceNullOwner;                                                              // 0x069D (size: 0x1)
    double CurrentProgress;                                                           // 0x06A0 (size: 0x8)
    double MaxProgress;                                                               // 0x06A8 (size: 0x8)
    double ProgressTime;                                                              // 0x06B0 (size: 0x8)
    int32 pawnIndex;                                                                  // 0x06B8 (size: 0x4)
    TArray<FLinearColor> RegionColors;                                                // 0x06C0 (size: 0x10)

    void getRegionColor(FLinearColor& Result);
    bool IncreaseProgress();
    void NotifyDragFinished();
    void NotifyDragStarted();
    void Update();
    void onStartLocationChanged_Event();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetupMapTextures();
    void ExecuteUbergraph_W_MapRegion(int32 EntryPoint);
}; // Size: 0x6D0

#endif
