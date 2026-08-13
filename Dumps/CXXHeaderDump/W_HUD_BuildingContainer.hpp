#ifndef UE4SS_SDK_W_HUD_BuildingContainer_HPP
#define UE4SS_SDK_W_HUD_BuildingContainer_HPP

class UW_HUD_BuildingContainer_C : public UMLBuildingCardContainerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D0 (size: 0x8)
    class UWidgetAnimation* RebuildAnim;                                              // 0x03D8 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void UpdateBuildingList();
    class UMLBuildingSeparator* CreateSeparator();
    class UMLBuildingCardWidget* CreateEntryWidget();
    void Construct();
    void BP_RebuildWidgetContainer();
    void ExecuteUbergraph_W_HUD_BuildingContainer(int32 EntryPoint);
}; // Size: 0x3E0

#endif
