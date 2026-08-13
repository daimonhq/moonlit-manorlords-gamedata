#ifndef UE4SS_SDK_ResidentialRequirementCollectionWidget_HPP
#define UE4SS_SDK_ResidentialRequirementCollectionWidget_HPP

class UResidentialRequirementCollectionWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UVerticalBox* ItemCategories;                                               // 0x0370 (size: 0x8)
    class UHorizontalBox* Pips_HB;                                                    // 0x0378 (size: 0x8)
    class USimpleFrameWidgetA_C* SimpleFrameWidgetA;                                  // 0x0380 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x0388 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void BuildingSuppliedFrom(const FRequirementCollection InCollection, FString& SuppliedFromString);
    FString BuildMissingTypesText(TArray<EItemSubcategory>& Array);
    void UpdateCollectionContents(TArray<int32>& SuppliedTypes, FResidentialRequirement ResidentialRequirementData, int32 TriggeringLevel);
    void Destruct();
    void ExecuteUbergraph_ResidentialRequirementCollectionWidget(int32 EntryPoint);
}; // Size: 0x390

#endif
