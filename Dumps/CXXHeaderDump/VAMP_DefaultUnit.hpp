#ifndef UE4SS_SDK_VAMP_DefaultUnit_HPP
#define UE4SS_SDK_VAMP_DefaultUnit_HPP

class AVAMP_DefaultUnit_C : public ASMUnit
{
    class UVAISMController* VAISMController_Head;                                     // 0x1310 (size: 0x8)
    class UVAISMController* VAISMController_Helmet;                                   // 0x1318 (size: 0x8)
    class UVAISMController* VAISMController_Body;                                     // 0x1320 (size: 0x8)
    class USpatialEntityComponent* SpatialEntity;                                     // 0x1328 (size: 0x8)
    class UVAISMController* VAISMController_Bonus;                                    // 0x1330 (size: 0x8)
    class UVAISMController* VAISMController_Accessory;                                // 0x1338 (size: 0x8)
    class UVAISMController* VAISMController_Weapon;                                   // 0x1340 (size: 0x8)
    class UVAISMController* VAISMController_Shield;                                   // 0x1348 (size: 0x8)
    class UVARuntimeComponent* VARuntimeBP;                                           // 0x1350 (size: 0x8)
    int32 Unique ID;                                                                  // 0x1358 (size: 0x4)

}; // Size: 0x135C

#endif
