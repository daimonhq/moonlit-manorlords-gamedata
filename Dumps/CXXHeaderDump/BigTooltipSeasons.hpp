#ifndef UE4SS_SDK_BigTooltipSeasons_HPP
#define UE4SS_SDK_BigTooltipSeasons_HPP

class UBigTooltipSeasons_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02D8 (size: 0x8)
    class UCommonLazyImage* AutumnImage;                                              // 0x02E0 (size: 0x8)
    class UBorder* Border;                                                            // 0x02E8 (size: 0x8)
    class UMLRichTextBlock* DescriptionRichText;                                      // 0x02F0 (size: 0x8)
    class URichTextBlock* name_txt;                                                   // 0x02F8 (size: 0x8)
    class UMLRichTextBlock* Season_Autumn;                                            // 0x0300 (size: 0x8)
    class UMLRichTextBlock* Season_Autumn_1;                                          // 0x0308 (size: 0x8)
    class UMLRichTextBlock* Season_Autumn_2;                                          // 0x0310 (size: 0x8)
    class UMLRichTextBlock* Season_Spring;                                            // 0x0318 (size: 0x8)
    class UMLRichTextBlock* Season_Spring_1;                                          // 0x0320 (size: 0x8)
    class UMLRichTextBlock* Season_Spring_2;                                          // 0x0328 (size: 0x8)
    class UMLRichTextBlock* Season_Summer;                                            // 0x0330 (size: 0x8)
    class UMLRichTextBlock* Season_Summer_1;                                          // 0x0338 (size: 0x8)
    class UMLRichTextBlock* Season_Summer_2;                                          // 0x0340 (size: 0x8)
    class UMLRichTextBlock* Season_Winter;                                            // 0x0348 (size: 0x8)
    class UMLRichTextBlock* Season_Winter_1;                                          // 0x0350 (size: 0x8)
    class UMLRichTextBlock* Season_Winter_2;                                          // 0x0358 (size: 0x8)
    class UCommonLazyImage* SpringImage;                                              // 0x0360 (size: 0x8)
    class UCommonLazyImage* SummerImage;                                              // 0x0368 (size: 0x8)
    class UCommonLazyImage* WinterImage;                                              // 0x0370 (size: 0x8)
    FName headerKey;                                                                  // 0x0378 (size: 0x8)
    FName mainTextKey;                                                                // 0x0380 (size: 0x8)
    TArray<FApprovalMemory> factors;                                                  // 0x0388 (size: 0x10)
    int32 Season;                                                                     // 0x0398 (size: 0x4)
    TArray<TSoftObjectPtr<UTexture2D>> SeasonTextures;                                // 0x03A0 (size: 0x10)

    void UpdateSeasonImage();
    void UpdateSeasonText(class URichTextBlock* Header, class URichTextBlock* Months, class URichTextBlock* descr, FName Name);
    void calculateSeason();
    void updateContents(int32 seasonID);
    void Construct();
    void Update();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BigTooltipSeasons(int32 EntryPoint);
}; // Size: 0x3B0

#endif
