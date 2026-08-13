#ifndef UE4SS_SDK_BP_ResourceNode_HPP
#define UE4SS_SDK_BP_ResourceNode_HPP

class ABP_ResourceNode_C : public AActor
{
    class UBillboardComponent* Billboard;                                             // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    TEnumAsByte<EResourceNodeType::Type> nodeType;                                    // 0x02B8 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x2B9

#endif
