#ifndef UE4SS_SDK_USDStage_HPP
#define UE4SS_SDK_USDStage_HPP

#include "USDStage_enums.hpp"

struct FUsdPrimLocatorFragment
{
    bool bPreferComponent;                                                            // 0x0000 (size: 0x1)
    FString PrimPath;                                                                 // 0x0008 (size: 0x10)

}; // Size: 0x18

class AUsdStageActor : public AActor
{
    FFilePath RootLayer;                                                              // 0x02A8 (size: 0x10)
    EUsdStageState StageState;                                                        // 0x02B8 (size: 0x1)
    class UUsdAssetCache3* AssetCache;                                                // 0x02C0 (size: 0x8)
    class UUsdInfoCache* UsdInfoCache;                                                // 0x02C8 (size: 0x8)
    class UUsdPrimLinkCache* PrimLinkCache;                                           // 0x02D0 (size: 0x8)
    class UUsdAssetCache2* UsdAssetCache;                                             // 0x02D8 (size: 0x8)
    EUsdInitialLoadSet InitialLoadSet;                                                // 0x02E0 (size: 0x1)
    EUsdInterpolationType InterpolationType;                                          // 0x02E1 (size: 0x1)
    EGeometryCacheImport GeometryCacheImport;                                         // 0x02E2 (size: 0x1)
    bool bUsePrimKindsForCollapsing;                                                  // 0x02E3 (size: 0x1)
    int32 KindsToCollapse;                                                            // 0x02E4 (size: 0x4)
    bool bMergeIdenticalMaterialSlots;                                                // 0x02E8 (size: 0x1)
    bool bShareAssetsForIdenticalPrims;                                               // 0x02E9 (size: 0x1)
    bool bReuseIdenticalAssets;                                                       // 0x02EA (size: 0x1)
    bool bCollapseTopLevelPointInstancers;                                            // 0x02EB (size: 0x1)
    int32 PurposesToLoad;                                                             // 0x02EC (size: 0x4)
    int32 NaniteTriangleThreshold;                                                    // 0x02F0 (size: 0x4)
    FName RenderContext;                                                              // 0x02F4 (size: 0x8)
    FName MaterialPurpose;                                                            // 0x02FC (size: 0x8)
    EUsdRootMotionHandling RootMotionHandling;                                        // 0x0304 (size: 0x1)
    int32 SubdivisionLevel;                                                           // 0x0308 (size: 0x4)
    FUsdMetadataImportOptions MetadataOptions;                                        // 0x0310 (size: 0x20)
    class USceneComponent* SceneComponent;                                            // 0x03D8 (size: 0x8)
    float Time;                                                                       // 0x03E0 (size: 0x4)
    class ULevelSequence* LevelSequence;                                              // 0x03E8 (size: 0x8)
    class UUsdPrimTwin* RootUsdTwin;                                                  // 0x03F0 (size: 0x8)
    TSet<FString> PrimsToAnimate;                                                     // 0x03F8 (size: 0x50)
    TMap<class UObject*, class FString> ObjectsToWatch;                               // 0x0448 (size: 0x50)
    class UUsdTransactor* Transactor;                                                 // 0x0498 (size: 0x8)

    void SetUsePrimKindsForCollapsing(bool bUse);
    void SetUsdAssetCache(class UUsdAssetCache3* NewCache);
    void SetTime(float InTime);
    void SetSubdivisionLevel(int32 newLevel);
    void SetStageState(EUsdStageState NewStageState);
    void SetShareAssetsForIdenticalPrims(bool bShare);
    void SetRootMotionHandling(EUsdRootMotionHandling NewHandlingStrategy);
    void SetRootLayer(FString RootFilePath);
    void SetReuseIdenticalAssets(bool bReuse);
    void SetRenderContext(const FName& NewRenderContext);
    void SetPurposesToLoad(int32 NewPurposesToLoad);
    void SetNaniteTriangleThreshold(int32 NewNaniteTriangleThreshold);
    void SetMergeIdenticalMaterialSlots(bool bMerge);
    void SetMaterialPurpose(const FName& NewMaterialPurpose);
    void SetKindsToCollapse(int32 NewKindsToCollapse);
    void SetIsolatedRootLayer(FString IsolatedStageRootLayer);
    void SetInvertFilters(bool bNewInvertValue);
    void SetInterpolationType(EUsdInterpolationType NewType);
    void SetInitialLoadSet(EUsdInitialLoadSet NewLoadSet);
    void SetGeometryCacheImport(EGeometryCacheImport ImportOption);
    void SetCollectOnComponents(bool bNewCollectValue);
    void SetCollectMetadata(bool bNewCollectValue);
    void SetCollectFromEntireSubtrees(bool bNewCollectValue);
    void SetCollapseTopLevelPointInstancers(bool bCollapse);
    void SetBlockedPrefixFilters(const TArray<FString>& NewFilters);
    void SetAssetCache(class UUsdAssetCache2* NewCache);
    void NewStage();
    float GetTime();
    FString GetSourcePrimPath(const class UObject* Object);
    class ULevelSequence* GetLevelSequence();
    FString GetIsolatedRootLayer();
    class USceneComponent* GetGeneratedComponent(FString PrimPath);
    TArray<class UObject*> GetGeneratedAssets(FString PrimPath);
}; // Size: 0x678

class UUsdDynamicBindingResolverLibrary : public UBlueprintFunctionLibrary
{

    FMovieSceneDynamicBindingResolveResult ResolveWithStageActor(class UObject* WorldContextObject, const FMovieSceneDynamicBindingResolveParams& params, FString StageActorIDNameFilter, FString RootLayerFilter, FString PrimPath);
}; // Size: 0x28

class UUsdInfoCache : public UObject
{
}; // Size: 0x30

class UUsdPrimLinkCache : public UObject
{
}; // Size: 0x30

class UUsdPrimTwin : public UObject
{
    FString PrimPath;                                                                 // 0x0040 (size: 0x10)
    TWeakObjectPtr<class USceneComponent> SceneComponent;                             // 0x0050 (size: 0x8)
    TMap<class FString, class UUsdPrimTwin*> Children;                                // 0x0058 (size: 0x50)
    TWeakObjectPtr<class UUsdPrimTwin> Parent;                                        // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class UUsdTransactor : public UObject
{
}; // Size: 0x38

#endif
