#ifndef UE4SS_SDK_W_ItemCategoryToolTipV2_HPP
#define UE4SS_SDK_W_ItemCategoryToolTipV2_HPP

class UW_ItemCategoryToolTipV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UVerticalBox* CategoriesVB;                                                 // 0x02D8 (size: 0x8)
    class UMLTextBlock* CategoryText;                                                 // 0x02E0 (size: 0x8)
    class UWidget_Frame_Scroll_Simple_C* Widget_Frame_Scroll_Simple;                  // 0x02E8 (size: 0x8)
    class UWidget_HeaderBg_C* Widget_HeaderBg;                                        // 0x02F0 (size: 0x8)
    TArray<EItemSubcategory> SubcategoriesToDisplay;                                  // 0x02F8 (size: 0x10)
    FString CustomName;                                                               // 0x0308 (size: 0x10)

    void updateText();
    void RespawnSubcategories();
    void Init(FString CustomName, const TArray<EItemSubcategory>& Subcategories);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_ItemCategoryToolTipV2(int32 EntryPoint);
}; // Size: 0x318

#endif
