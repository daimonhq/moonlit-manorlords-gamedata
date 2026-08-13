#ifndef UE4SS_SDK_W_ItemSubcategoryV2_HPP
#define UE4SS_SDK_W_ItemSubcategoryV2_HPP

class UW_ItemSubcategoryV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UGridPanel* GridPanel;                                                      // 0x02D8 (size: 0x8)
    class UMLTextBlock* HeaderText;                                                   // 0x02E0 (size: 0x8)
    EItemSubcategory Subcategory;                                                     // 0x02E8 (size: 0x1)

    void RespawnItemList();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_ItemSubcategoryV2(int32 EntryPoint);
}; // Size: 0x2E9

#endif
