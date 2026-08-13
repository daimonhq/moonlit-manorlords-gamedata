#ifndef UE4SS_SDK_W_Splash_HPP
#define UE4SS_SDK_W_Splash_HPP

class UW_Splash_C : public UMLSplashWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image;                                                              // 0x02E8 (size: 0x8)
    TArray<TSoftObjectPtr<UTexture2D>> Textures;                                      // 0x02F0 (size: 0x10)
    TArray<TSoftObjectPtr<UTexture2D>> WideTextures;                                  // 0x0300 (size: 0x10)
    class UMaterialInterface* SplashMaterial;                                         // 0x0310 (size: 0x8)
    int32 CurrentTextureIndex;                                                        // 0x0318 (size: 0x4)
    FName TextureParam;                                                               // 0x031C (size: 0x8)
    bool Is Wide Screen;                                                              // 0x0324 (size: 0x1)

    void OnLoaded_B7EC919145CE3E3CF997508065CF96B4(class UObject* Loaded);
    void PreConstruct(bool IsDesignTime);
    void UpdateDisplayedTexture(bool bIsWideScreen);
    void OnInitialized();
    void SetTextureIndex(int32 InIndex);
    void ExecuteUbergraph_W_Splash(int32 EntryPoint);
}; // Size: 0x325

#endif
