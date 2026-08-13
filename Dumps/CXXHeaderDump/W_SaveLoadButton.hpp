#ifndef UE4SS_SDK_W_SaveLoadButton_HPP
#define UE4SS_SDK_W_SaveLoadButton_HPP

class UW_SaveLoadButton_C : public UW_MaterialButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09C8 (size: 0x8)
    class UImage* SquareLeft;                                                         // 0x09D0 (size: 0x8)
    class UImage* SquareRight;                                                        // 0x09D8 (size: 0x8)
    bool HasSquares;                                                                  // 0x09E0 (size: 0x1)
    FSlateColor SquareColor;                                                          // 0x09E4 (size: 0x14)
    FSlateColor SquarePressedColor;                                                   // 0x09F8 (size: 0x14)

    void HandleHovered(bool bHovered);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_SaveLoadButton(int32 EntryPoint);
}; // Size: 0xA0C

#endif
