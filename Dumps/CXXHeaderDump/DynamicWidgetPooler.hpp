#ifndef UE4SS_SDK_DynamicWidgetPooler_HPP
#define UE4SS_SDK_DynamicWidgetPooler_HPP

class UPooledWidgetSettings : public UDeveloperSettings
{
    TArray<TSoftClassPtr<UUserWidget>> WidgetsToBeUnpooled;                           // 0x0038 (size: 0x10)

}; // Size: 0x48

class UWidgetPoolSubsystem : public UWorldSubsystem
{
    TMap<class UClass*, class FUserWidgetPool> Pools;                                 // 0x0040 (size: 0x50)
    TArray<class TSubclassOf<UUserWidget>> NeverPoolClasses;                          // 0x0090 (size: 0x10)

    void ReleaseFromPanel(class UPanelWidget* InOwner, bool IncludeTooltips);
    void Release(class UUserWidget* InOwner, bool IncludeTooltips);
    class UUserWidget* GetOrCreateInstance(class UObject* WorldContext, TSubclassOf<class UUserWidget> WidgetType);
}; // Size: 0xA0

#endif
