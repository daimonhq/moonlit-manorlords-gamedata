#ifndef UE4SS_SDK_W_Menu_HeaderBar_HPP
#define UE4SS_SDK_W_Menu_HeaderBar_HPP

class UW_Menu_HeaderBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x02D8 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02E0 (size: 0x8)
    class UImage* SquareLeft;                                                         // 0x02E8 (size: 0x8)
    class UImage* SquareRight;                                                        // 0x02F0 (size: 0x8)
    class UNamedSlot* TextSlot;                                                       // 0x02F8 (size: 0x8)
    double MinHeight;                                                                 // 0x0300 (size: 0x8)
    double SquareSize;                                                                // 0x0308 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void adjustHeight(double InHeight);
    void ExecuteUbergraph_W_Menu_HeaderBar(int32 EntryPoint);
}; // Size: 0x310

#endif
