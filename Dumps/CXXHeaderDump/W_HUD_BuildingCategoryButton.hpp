#ifndef UE4SS_SDK_W_HUD_BuildingCategoryButton_HPP
#define UE4SS_SDK_W_HUD_BuildingCategoryButton_HPP

class UW_HUD_BuildingCategoryButton_C : public UW_MaterialButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09C8 (size: 0x8)
    class UImage* Icon;                                                               // 0x09D0 (size: 0x8)
    EBuildingCategory Category;                                                       // 0x09D8 (size: 0x1)
    TMap<class EBuildingCategory, class TSoftObjectPtr<UTexture2D>> CategoryIconTextures; // 0x09E0 (size: 0x50)
    FSlateBrush SelectedBrush;                                                        // 0x0A30 (size: 0xB0)

    void HandleSelected(bool bSelected);
    void PreConstruct(bool IsDesignTime);
    void InitToolTip(class UUserWidget* InToolTip);
    void ExecuteUbergraph_W_HUD_BuildingCategoryButton(int32 EntryPoint);
}; // Size: 0xAE0

#endif
