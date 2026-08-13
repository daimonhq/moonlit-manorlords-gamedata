#ifndef UE4SS_SDK_MD_NaviAutoTooltip_HPP
#define UE4SS_SDK_MD_NaviAutoTooltip_HPP

class UMD_NaviAutoTooltip_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0368 (size: 0x8)
    ENaviUiHighlightStyle Style;                                                      // 0x0370 (size: 0x1)

    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void PreConstruct(bool IsDesignTime);
    void OnFocusChanged(bool nowHasFocus);
    void ExecuteUbergraph_MD_NaviAutoTooltip(int32 EntryPoint);
}; // Size: 0x371

#endif
