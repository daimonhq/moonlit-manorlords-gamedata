#ifndef UE4SS_SDK_ResidentialRequirementDynamicSupplyCategory_HPP
#define UE4SS_SDK_ResidentialRequirementDynamicSupplyCategory_HPP

class UResidentialRequirementDynamicSupplyCategory_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UVerticalBox* Collections_VB;                                               // 0x0370 (size: 0x8)
    class UResidentialRequirementCollectionWidget_C* ResidentialRequirementCollectionWidget; // 0x0378 (size: 0x8)
    class UResidentialRequirementCollectionWidget_C* ResidentialRequirementCollectionWidget_1; // 0x0380 (size: 0x8)
    class UImage* SupplyCategoryIcon_Image;                                           // 0x0388 (size: 0x8)
    EResidentialRequirement supplyCategory;                                           // 0x0390 (size: 0x1)

    FNaviSubGridLayout ComputeSubGridLayout();
    void SetSupplyCategory(const EResidentialRequirement InSupplyCategory);
    void UpdateRequirementData(TArray<FResidentialRequirement>& RequirementData, class ASMBuildingMaster* buildingMaster);
    void ResetToolTip(class UUserWidget* InToolTip);
    void InitToolTip(class UUserWidget* InToolTip);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_ResidentialRequirementDynamicSupplyCategory(int32 EntryPoint);
}; // Size: 0x391

#endif
